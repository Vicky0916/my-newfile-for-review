//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
////求1-2019中9的个数
//bool Function(int n)
//{
//	while (n)
//	{
//		if (n % 10 == 9)
//		{
//			return true;
//		}
//		n /= 10;
//	}
//	return false;
//}
//int main()
//{
//		int count = 0;
//		for (int i = 1; i <= 2019; i++)
//		{
//			if (Function(i))
//			{
//				count++;
//			}
//		}
//	
//	
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
//
////单链表倒数第k个结点
///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};*/
//class Solution {
//public:
//	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
//	{
//		if (pListHead == NULL || k == 0)
//		{
//			return NULL;
//		}
//		ListNode* slow = pListHead;
//		ListNode* fast = pListHead;
//		while (k > 1)
//		{
//			if (fast->next != NULL)
//			{
//				fast = fast->next;
//				k--;
//			}
//			else
//				return NULL;
//		}
//		while (fast->next != NULL)
//		{
//			slow = slow->next;
//			fast = fast->next;
//		}
//		return slow;
//
//	}
//};
//
////判断一颗二叉树是否为其他树的子树
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};*/
//class Solution
//{
//public:
//	bool IsSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == NULL)//第一棵树遍历完，但是第二棵树没有遍历完返回假的 
//			return false;
//		if (pRoot2 == NULL)//第二棵树遍历完，但是第一棵树没有遍历完返回真的
//			return true;
//		if (pRoot2->val == pRoot1->val)
//		{
//			return IsSubtree(pRoot1->left, pRoot2->left)
//				&& IsSubtree(pRoot1->right, pRoot2->right);
//		}
//		else    return false;
//	}
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//		return   IsSubtree(pRoot1, pRoot2)
//			|| HasSubtree(pRoot1->left, pRoot2)
//			|| HasSubtree(pRoot1->right, pRoot2);
//	}
//};
//
////二叉树的镜像
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};*/
//class Solution {
//public:
//	void Mirror(TreeNode *pRoot)
//	{
//		if (pRoot == NULL)
//			return;
//		if (pRoot->left == NULL && pRoot->right == NULL)
//			return;
//		TreeNode *tmp = pRoot->left;
//		pRoot->left = pRoot->right;
//		pRoot->right = tmp;
//		if (pRoot->left != NULL)
//			Mirror(pRoot->left);
//		if (pRoot->right != NULL)
//			Mirror(pRoot->right);
//	}
//};
//
////顺时针打印矩阵
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix)
//	{
//		vector<int> temp;
//		int col = matrix[0].size();  //列
//		int row = matrix.size(); //行
//		if (row == 0 || col == 0)
//			return temp;
//		int top = 0;
//		int right = col - 1;
//		int left = 0;
//		int bottom = row - 1;
//		while (top <= bottom && left <= right)
//		{
//			//右
//			for (int i = left; i <= right; i++)
//			{
//				temp.push_back(matrix[top][i]);
//			}
//			//下
//			for (int i = top + 1; i <= bottom; i++)
//			{
//				temp.push_back(matrix[i][right]);
//			}
//			//左
//			for (int i = right - 1; i >= left && top < bottom; i--)
//			{
//				temp.push_back(matrix[bottom][i]);
//			}
//			//上
//			for (int i = bottom - 1; i > top&&right > left; i--)
//			{
//				temp.push_back(matrix[i][top]);
//			}
//			bottom--; right--; left++; top++;
//		}
//		return temp;
//	}
//};

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
using namespace std;

bool Sushu(int n)
{
	int i = 2;
	while (i <= n / 2)
	{
		if (n%i == 0)
			return false;
		else
			i++;
	}
	return true;
}
int main()
{
	int n;
	while (cin >> n)
	{
		int res = INT_MAX;
		int min = INT_MAX;
		//vector<int> v;
		for (int i = 2; i < n+2; i++)
		{
			if (i!=n && Sushu(i) && abs(n - i) < min)
			{
				min = n - i;
				res = i; 
			}
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}