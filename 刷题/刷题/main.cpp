//二叉树的层次遍历
class Solution {
public:
	//二叉树的层序遍历
	vector<int> PrintFromTopToBottom(TreeNode* root)
	{
		vector<int> v;
		queue<TreeNode*> q;
		if (root == NULL)
			return v;
		q.push(root);
		while (!q.empty())
		{
			TreeNode* ret = q.front();
			q.pop();
			if (ret)
			{
				v.push_back(ret->val);
				q.push(ret->left);
				q.push(ret->right);
			}
		}
		return v;
	}
};
//和为某一值得路径
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution
{
	vector<int> v;
	vector<vector<int>> res;
	void Find(TreeNode* root, int expectNumber)
	{
		if (root == NULL)
			return;
		v.push_back(root->val);
		if (!root->left && !root->right&&root->val == expectNumber)
			res.push_back(v);
		else
		{
			if (root->left)
				Find(root->left, expectNumber - root->val);
			if (root->right)
				Find(root->right, expectNumber - root->val);
		}
		v.pop_back();
	}
public:
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber)
	{
		Find(root, expectNumber);
		return res;
	}
};

