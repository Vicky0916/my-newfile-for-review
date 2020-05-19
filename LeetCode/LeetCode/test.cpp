//逆波兰表达式
#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;
//int main()
//{
//	stack<int> s;
//	s.push(1);
//	system("pause");
//	return 0;
//}

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
	int maxPoints(vector<Point> &points)
	{
		int count = 0;
		int max = 0;
		for (int i = 0; i < points.size(); i++)
		{
			int res = (points[i].x) / (points[i].y);
			for (int j = i + 1; j < points.size(); j++)
			{
				if (res == (points[j].x) / (points[j].y))
					count++;
			}
			if (count > max)
			{
				max = count;
				count = 0;
			}
			count = 0;
		}
		return max;
	}
};

//对单链表排序
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode *sortList(ListNode *head)
	{
		if (head == NULL)
			return NULL;
		vector<int> v;
		ListNode* cur = head;
		while (cur)
		{
			v.push_back(cur->val);
		}
		sort(v.begin(), v.end());
		ListNode* head2;
		ListNode* tail = head2;
		for (int i = 0; i < v.size(); i++)
		{
			ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
			newnode->val = v[i];
			newnode->next = NULL;
			tail->next = newnode;
			tail = newnode;
		}
		return head2;
	}
};