//#include <iostream>
//#include <stdlib.h>
//#include <algorithm>
//using namespace std;
//typedef struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():left(NULL), right(NULL) {} //�޲εĹ��캯��
//	TreeNode(int data, TreeNode* lchild, TreeNode* rchild)  //�вεĹ��캯��
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
////�ڵ���
//typedef struct Node
//{
//	TreeNode* data;  //������
//	Node* next; //ָ����
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

//�������
//�ݹ�汾
void PreTraversal(vector<int> &v, TreeNode* root)
{
	if (!root)
		return;
	v.push_back(root);
	PreTraversal(v, root->left);
	PreTraversal(v, root->right);
}
//�ǵݹ�汾
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

//�������  //�����
void InorderTraversal(vector<int> &v, TreeNode* root)
{
	if (!root) return;
	InorderTraversal(v, root->left);
	v.push(root->val);
	InorderTraversal(v, root->right);
}

//�ǵݹ����
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
//�������
void PostorderTraversal(vector<int> &v, TreeNode* root)
{
	if (!root) return;
	PostorderTraversal(v, root->left);
	PostorderTraversal(v, root->right);
	v.push(root->val);
}
//�ǵݹ�汾
void postOrderTraversal(vector<int> &store, TreeNode *root) {
	stack<TreeNode *> S;
	S.push(root);
	while (!S.empty()) {
		TreeNode *curr_node = S.top();
		S.pop();
		if (curr_node) {
			store.push_back(curr_node->val);
			S.push(curr_node->left);    //�Һ������ȣ�������������ջ
			S.push(curr_node->right);
		}
	}
	std::reverse(store.begin(), store.end());   //�����м�Ϊ����
	return;
}

//��α���
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

//�����������
int TreeDeepTh(TreeNode* root)
{
	//�ݹ鷨
	return root ? 1 + max(TreeDeepth(root->left), TreeDeepth(root->right)):0;
}
//������  �õ���α�������ξ������ǵ����
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

//�ж�һ�����Ƿ�Ϊƽ�������:ƽ���������ָ������һ�ſ���
//�������������ĸ߶Ȳ����1������������������һ��ƽ�������
bool IsbalancedRtree(TreeNode * root)
{
	

}



