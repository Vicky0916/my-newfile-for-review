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
	int _bf; //ƽ������

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
		//����ƽ������
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
				//parents->_bf=2/-2  ��Ҫ��ת����
				if (parent->_bf == -2 && cur->_bf == -1)  //��Ҫ����
				{
					RotateR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == 1) //��Ҫ����
				{
					RotateL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == 1)
				{
					RotateLR(parent); //����˫��
				}
				else if (parent->_bf == -2 && cur->_bf == -1)
				{
					RotateRL(parent);  //����˫��
				}
				else  //���������������������Ǿ����������ֳ�����
				{
					assert(false);
				}
				break;
			}
		}
		return make_pair(newnode, true);
	}
	//����
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

	//����
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

		//��ת֮ǰ����subLR��ƽ�����ӣ���ת��ɺ���Ҫ���ݸ�ƽ�����ӵ��������ڵ��ƽ������
		int bf = subLR->_bf;

		//�ȶ�30��������
		RatateL(parent->_left)

		//�ٶ�90�����ҵ���
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

		//��ת֮ǰ����subLR��ƽ�����ӣ���ת��ɺ���Ҫ���ݸ�ƽ�����ӵ��������ڵ��ƽ������
		int bf = subRL->_bf;
		//��90Ϊ���Ľ�������
		RotateR(parent->_right);
		//��30Ϊ���Ľ�������
		RotateL(parent);

		if (bf == 1)
		{
			subRL->_bf = 0;
			parent->_bf = -1��
				subR->_bf = 0;
		}
		else if (bf == -1)
		{
			subRL->_bf = 0;
			parent->_bf = 0��
				subR->_bf = 1;
		}
		else if (bf == 0)
		{
			subRL->_bf = 0;
			parent->_bf = 0��
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