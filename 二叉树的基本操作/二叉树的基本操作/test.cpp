//#include <iostream>
//#include <stdlib.h>
//#include <algorithm>
//using namespace std;
//typedef struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():left(NULL), right(NULL) {} //无参的构造函数
//	TreeNode(int data, TreeNode* lchild, TreeNode* rchild)  //有参的构造函数
//	{
//		val = data;
//		left = lchild;
//		right = rchild;
//	}
//	TreeNode(double& e):val(e)
//	{
//		left = NULL;
//		right = NULL;
//	}
//}TreeNode;
//
////节点类
//typedef struct Node
//{
//	TreeNode* data;  //数据域
//	Node* next; //指针域
//	Node()
//	{
//		next = NULL;
//	}
//	Node(TreeNode* item, Node* link)
//	{
//		data = item;
//		next = link;
//	}
//};
//class BinaryTree
//{
//private:
//	TreeNode* root;
//public:
//	BinaryTree();
//	BinaryTree(double &e);
//	virtual ~BinaryTree();
//	void InsertLeftChild(TreeNode* cur, double& e);
//	void InsertRightChild(TreeNode* cur, double& e);
//	int Height() const;
//
//};
//BinaryTree::BinaryTree()
//{
//	root = NULL;
//}
//BinaryTree::BinaryTree(double &e)
//{
//	root = new TreeNode(e);
//}
//
//void BinaryTree::InsertLeftChild(TreeNode* cur, double& e)
//{
//	if (cur == NULL)
//	{
//		return;
//	}
//	else
//	{
//		TreeNode* newnode = new TreeNode(e);
//		if (cur->left != NULL)
//		{
//			newnode->left = cur->left;
//		}
//		else
//			cur->left = newnode;
//	}
//	return;
//}
//void BinaryTree::InsertRightChild(TreeNode* cur, double& e)
//{
//	if (cur == NULL)
//	{
//		return;
//	}
//	else
//	{
//		TreeNode* newnode = new TreeNode(e);
//		if (cur->right != NULL)
//		{
//			newnode->right = cur->right;
//		}
//		else
//			cur->right = newnode;
//	}
//	return;
//}
//int main()
//{
//	system("pause");
//	return 0;
//}

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode* right;
	TreeNode(int x):val(x),left(NULL),right(NULL)
	{}
};

//先序遍历
//递归版本
void PreTraversal(vector<int> &v, TreeNode* root)
{
	if (!root)
		return;
	v.push_back(root);
	PreTraversal(v, root->left);
	PreTraversal(v, root->right);
}
//非递归版本
void PreTraversal(vector<int> &v, TreeNode* root)
{
	stack<TreeNode*> s;
	s.push(root);
	while (!s.empty())
	{
		TreeNode *cur = s.top();
		s.pop();
		if (temp)
		{
			v.push_back(cur->val);
			s.push(root->right);
			s.push(root->left);
		}
	}
}

//中序遍历  //左根右
void InorderTraversal(vector<int> &v, TreeNode* root)
{
	if (!root) return;
	InorderTraversal(v, root->left);
	v.push(root->val);
	InorderTraversal(v, root->right);
}

//非递归遍历
void InorderTraversal(vector<int> &v, TreeNode* root)
{
	TreeNode* cur = root;
	stack<TreeNode*> s;
	while (root||!s.empty())
	{
		while (root)
		{
			s.push(root);
			root = root->left;
		}
		TreeNode* cur = s.top();
		s.pop();
		v.push_back(cur->val);
		root = cur->right;
	}
}
//后序遍历
void PostorderTraversal(vector<int> &v, TreeNode* root)
{
	if (!root) return;
	PostorderTraversal(v, root->left);
	PostorderTraversal(v, root->right);
	v.push(root->val);
}
//非递归版本
void postOrderTraversal(vector<int> &store, TreeNode *root) {
	stack<TreeNode *> S;
	S.push(root);
	while (!S.empty()) {
		TreeNode *curr_node = S.top();
		S.pop();
		if (curr_node) {
			store.push_back(curr_node->val);
			S.push(curr_node->left);    //右孩子优先，所以左孩子先入栈
			S.push(curr_node->right);
		}
	}
	std::reverse(store.begin(), store.end());   //逆序列即为所求
	return;
}

//层次遍历
void LevelOrderTraversal(vector<int> &v, TreeNode *root)
{
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty())
	{
		TreeNode* ret = q->front();
		q.pop();
		if (ret)
		{
			v.push_back(ret->val);
			q.push(ret->_left);
			q.push(ret->right);
		}
	}
}

//二叉树的深度
int TreeDeepTh(TreeNode* root)
{
	//递归法
	return root ? 1 + max(TreeDeepth(root->left), TreeDeepth(root->right)):0;
}
//迭代法  用到层次遍历，层次就是我们的深度
int TreeDeepTh(TreeNode* root)
{
	if (!root)
	{
		return 0;
	}
	int depth = 0;
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty())
	{
		int length = q.size();
		++depth;
		while (length--)
		{
			TreeNode* ret = q->front();
			q.pop();
			if (ret)
			{
				v.push_back(ret->val);
				q.push(ret->_left);
				q.push(ret->right);
				length++;
			}
		}
		
	}
	return length;
}

//判断一棵树是否为平衡二叉树:平衡二叉树是指：它是一颗空树
//或者左右子树的高度差不超过1，并且左右子树都是一颗平衡二叉树
bool IsbalancedRtree(TreeNode * root)
{
	

}



