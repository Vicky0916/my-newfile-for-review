#include <iostream>
#include <stdlib.h>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main()
{
	while (1)
	{
		vector<int> v;
		for (int i = 0; i < 8; i++)
		{
			int num;
			cin >> num;
			v.push_back(num);
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (i % 2 == 0)
			{
				v[i] = v[i] - 30;
			}
			else
			{
				v[i] = v[i] + 30;
			}
		}
		int j = 1;
		int k = j + 1;
		vector<int> v2;
		v2.push_back(v[0]);
		while (j < v.size() && k < v.size())
		{
			if (j < v.size() && k < v.size() && v[k] - v[j] > 60)
			{
				v2.push_back(v[j]);
				v2.push_back(v[k]);
				j += 2;
				k += 2;
			}
			else if (j > v.size() || k > v.size())
			{
				break;
			}
			else
			{
				j += 2;
				k += 2;
			}
		}
		v2.push_back(v[v.size() - 1]);
		for (int i = 0; i < v2.size(); i++)
		{
			cout << v2[i] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

//struct List
//{
//	int val;
//	struct List* next;
//};
//struct List* insert(struct List *head, int v)
//{
//	if (head)
//	{
//		head->next = insert(head->next, v);
//	}
//	else
//	{
//		head = new struct List;
//		head->val = v;
//		head->next=0;
//	}
//	return head;
//}
//struct List *IsCircleList(struct List* head)
//{
//	struct List* fast = head;
//	struct List* slow = head;
//	if (head == NULL||head->next==NULL)
//	{
//		return NULL;
//	}
//	else
//	{
//		while (fast&&fast->next)
//		{
//			  fast = fast->next->next;
//			  slow = slow->next;
//		}
//	}
//	//如果存在,返回链表的起始位置
//	if (fast == slow)
//	{
//		return fast;
//	}
//}
//int  GetCircleLen(struct List* head)  //返回环的长度
//{
//	int count = 0;
//	struct List* l = IsCircleList(head);
//	if (l == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		while (l->next != l)
//		{
//			count++;
//			l = l->next;
//		}
//	}
//	return count;
//}
//int main()
//{
//	vector<map<int,int>> v1;
//	map<int, int> m;
//	int n1, n2;
//	cin >> n1 >> n2;
//	m.insert(make_pair(n1, n2));
//	v1.push_back(m);
//	system("pause");
//	return 0;
//}