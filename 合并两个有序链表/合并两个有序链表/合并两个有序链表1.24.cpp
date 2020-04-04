//struct ListNode * mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	ListNode* l = NULL;
//	if (l1 == NULL)
//	{
//		return l2;
//	}
//	if (l2 == NULL)
//	{
//		return l1;
//	}
//
//	if (l1->val < l2->val)
//	{
//		l = l1;
//		l1 = l1 -> next;
//	}
//	else
//	{
//		l = l2;
//		l2 = l2->next;
//	}
//
//	ListNode* tail = l;
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->val < l2->val)
//		{
//			tail->next = l1;
//			tail = l1;
//			l1 = l1->next;
//		}
//		else
//		{
//			tail->next = l2;
//			tail = l2;
//
//			l2 = l2->next;
//		}
//	}
//	if (l1 != NULL)
//		tail->next = l1;
//	else
//		tail->next = l2;
//	return l;
//}

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int a;
	int b;
	//scanf_s("%d %d", &a, &b);
	cout << "请输入任意两个数:" << endl;
	while (cin >> a >> b)
	{
		cout << "你输入这两个数的和是：" << a + b << endl;
	}

	system("pause");
	return 0;
}