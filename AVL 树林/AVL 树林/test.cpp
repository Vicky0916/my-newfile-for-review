#include <iostream>
#include <stdlib.h>
using namespace std;

template<class K,class V>
struct AVLTreeNode
{
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K, V>* _right;
	AVLTreeNode<K, V>* _parent;

	pair<K, V> _kv;
	int _bf; //平衡因子

	AVLTreeNode(const pair<K, V>&kv)
		:_left(nullptr),
		_right(nullptr),
		_parent(nullptr),
		_bf(0).
		_kv(kv);
	{
	}
 };

template<class K, class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	pair<Node*, bool> Insert(const pair<K, V>& kv)
	{
		Node* cur = _root;
		Node* parent = nullptr;
		if (_root == nullptr)
		{
			_root = new Node(kv);
			return make_pair(_root, true);
		}

		while (cur)
		{
			if (cur._kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			if (cur._kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else
			{
				return make_pair(cur, false);
			}
		}
		cur = new Node(kv);
		Node* newnode = new Node(kv);
		cur = newnode;
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
			cur->_parent = parent;
		}
		else
		{
			parent->_left = cur;
			cur->_parent = parent;
		}
		//更新平衡因子
		while (parent)
		{
			if (cur == parent->_left)
			{
				parent->_bf -= 1;
			}
			else
			{
				parent->_bf += 1;
			}
			if (parent->_bf == 1 || parent->_bf == -1)
			{
				cur = cur->_parent;
				parent = parent->_parent
			}
			else if (parent->_bf == 0)
			{
				break;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				//parents->_bf=2/-2  需要旋转处理
				if (parent->_bf == -2 && cur->_bf == -1)  //需要右旋
				{
					RotateR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == 1) //需要左旋
				{
					RotateL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == 1)
				{
					RotateLR(parent); //左右双旋
				}
				else if (parent->_bf == -2 && cur->_bf == -1)
				{
					RotateRL(parent);  //右左双旋
				}
				else  //如果不是以上四种情况，那就是其他部分出错了
				{
					assert(false);
				}
				break;
			}
		}
		return make_pair(newnode, true);
	}
	//左旋
	void RotateL(Node* parent)
	{
		Node *subR = parent->_right;
		Node *subRL = subR->_left;

		parent->_right = subRL;
		if (subRL)
			subRL->_parent = parent;

		subR->_left = parent;
		Node* parentParent = parent->_parent;
		parent->_parent = subR;

		if (parent == _root)
		{
			_root = subR;
			subR->_parent = NULL;
		}
			
		if (parentParent->_left == parent)
		{
			parentParent->_left = subR;
		}
		else
		{
			parentParent->_right = subR;
		}
		subR->_parent = parentParent;

		parent->_bf = subR->_bf = 0;
	}

	//右旋
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		parent->_left = subL;
		if(subLR)
			subLR->_parent = subL;

		subL->_right = parent;
		Node* parentParent = parent->_parent;
		parent->_parent = subL;
		if (parent == _root)
		{
			_root = subL;
			subL->_parent = NULL;
		}
		if (parentParent->_left = parent)
		{
			parentParent->_left = subL;
		}
		else
		{
			parentParent->_right = subL;
		}
		subL->_parent = parentParent;
		parent->_bf = subL->_bf = 0;
	}
	void RotateLR(Node* parent)  //
	{
		Node* subL = parent->_left;
		Node* subLR = parent->_right;

		//旋转之前保存subLR的平衡因子，旋转完成后，需要根据该平衡因子调整其他节点的平衡因子
		int bf = subLR->_bf;

		//先对30进行左单旋
		RatateL(parent->_left)

		//再对90进行右单旋
		RatateR(parent);

		if (bf == 1)
			subL->_bf = -1;
		else if (bf == -1)
			parent->_bf = 1;
	}
	void RotateRL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = parent->_left;

		//旋转之前保存subLR的平衡因子，旋转完成后，需要根据该平衡因子调整其他节点的平衡因子
		int bf = subRL->_bf;
		//以90为中心进行右旋
		RotateR(parent->_right);
		//以30为中心进行左旋
		RotateL(parent);

		if (bf == 1)
		{
			subRL->_bf = 0;
			parent->_bf = -1；
				subR->_bf = 0;
		}
		else if (bf == -1)
		{
			subRL->_bf = 0;
			parent->_bf = 0；
				subR->_bf = 1;
		}
		else if (bf == 0)
		{
			subRL->_bf = 0;
			parent->_bf = 0；
			subR->_bf = 0;
		}
	}

	int Height(Node *root)
	{
		if (root == nullptr)
			return 0;

		 int leftHeight = Height(root->_left);
		 int rightHeight = Height(root->_right);

		 return (leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1);
	}
	bool _IsBalance(Node *root)
	{
		if (root == nullptr)
			return true;
		int leftHeight = Height(root->_left);
		int rightHeight = Height(root->_right);

		return (abs(leftHeight - rightHeight) < 2
			&& _IsBalance(root->_left)
			&& _IsBalance(root->_right));
	}
	bool IsBalance()
	{
		return _IsBalance(_root);
	}
private:
	Node* _root = nullptr;
};
int main()
{
	system("pause");
	return 0;
}