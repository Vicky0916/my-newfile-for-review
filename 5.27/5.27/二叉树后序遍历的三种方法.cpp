/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
	/**
	 *
	 * @param root TreeNode类
	 * @return int整型vector
	 */
	vector<int> postorderTraversal(TreeNode* root)
	{
		// write code here
		vector<int> v;
		if (!root)
			return v;
		stack<TreeNode*> res;
		res.push(root);
		while (res.size())
		{
			TreeNode* tmp = res.top();
			res.pop();
			v.push_back(tmp->val);
			if (tmp->left)
				res.push(tmp->left);
			if (tmp->right)
				res.push(tmp->right);
		}
		reverse(v.begin(), v.end());
		return v;
	}
};



class Solution {
public:
	/**
	 *
	 * @param root TreeNode类
	 * @return int整型vector
	 */
	vector<int> postorderTraversal(TreeNode* root)
	{
		vector<int> v;
		if (!root)
			return v;
		stack<TreeNode*> s;
		TreeNode* tmp = NULL;
		s.push(root);
		while (s.size())
		{
			tmp = s.top();
			if (tmp->left == NULL && tmp->right == NULL)
			{
				v.push_back(tmp->val);
				s.pop();
			}
			else
			{
				if (tmp->right != NULL)
				{
					s.push(tmp->right);
					tmp->right = NULL;
				}
				if (tmp->left != NULL)
				{
					s.push(tmp->left);
					tmp->left = NULL;
				}
			}
		}
		return v;
	}
}