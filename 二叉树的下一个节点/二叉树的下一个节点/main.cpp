/*
struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left;
	struct TreeLinkNode *right;
	struct TreeLinkNode *next;
	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

	}
};
*/
class Solution {
public:
	TreeLinkNode* GetNext(TreeLinkNode* pNode)
	{
		if (pNode == NULL)
			return NULL;
		if (pNode->right != NULL)  //������Ϊ�գ������������Ӿ���������һ���
		{
			pNode = pNode->right;
			if (pNode->left != NULL)
				pNode = pNode->left;
			return pNode;
		}
		while (pNode->next)
		{
			TreeLinkNode* parent = pNode->next;
			if (parent->left == pNode)
				return parent;
			pNode = pNode->next;
		}
		return NULL;
	}
};