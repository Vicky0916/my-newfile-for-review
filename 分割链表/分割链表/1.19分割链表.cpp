// 1 3 5 5 4 7 6 3
//1 3 4 3 5 5 7 6
ListNode* parition(ListNode* pHead, int x)
{
	ListNode* l = pHead;
	ListNode* less,lessTail;
	ListNode* greater,greaterTail;
	less = lessTail = (ListNode*)malloc(sizeof(ListNode));
	greater = greaterTail = (ListNode*)malloc(sizeof(ListNode));
	
	while (l != NULL)
	{
		if (l->val < x)
		{
			lessTail->next = l;
			lessTail = l;
			l = l->next;
		}
		else
		{
			greaterTail->next = l;
			greaterTail = l;
			l = l->next;
		}
	}
	
	lessTail->next = greater->next;
	ListNode* list = less->next;
	free(less);
	free(greater);
	return less;	
}