#include <iostream>
#include <stdlib.h>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main()
{
	vector<int> v;
	vector<int> v2;
	for (int i = 0; i < 8; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++)
		for(int j=0;j<v.size();j++)
	{
			if (i % 2 == 0)
			{
				v2[j] = v[i] - 30;
			}
			else
			{
				v2[j] = v[i] + 30;
			}
			
	}
	vector<int> v3;
	for (int i = 0; i < v2.size; i++)
		for(int j=i+1;j<v2.size();j++)
	{
			if(v2[i])
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
//	//�������,�����������ʼλ��
//	if (fast == slow)
//	{
//		return fast;
//	}
//}
//int  GetCircleLen(struct List* head)  //���ػ��ĳ���
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