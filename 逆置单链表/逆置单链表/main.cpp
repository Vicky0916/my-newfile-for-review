
//1�������������
node* Reverse(node* s1)
{
	Node* head = s1;
	Node* cur = head->next;
	head->_next = NULL;
	while (cur)
	{
		Node* prev = cur;
		cur = cur->_next;
		prev->_next = head;
		prev = head;
	}
}

//2���Ƴ������Ԫ��
//���룺1->2->6->3->4->5->6  val=6
//�����1->2->3->4->5
node* removeElements(node* head, int val)
{
	Node* cur = head;
	Node* prev = NULL;
	Node* next = cur->_next;
	while (cur)
	{
		Node* next = cur->_next;
		if (cur->data == val)
		{
			if (prev == NULL)
			{
				head = next;
			}
			else
			{
				prev->_next = next;
			}
			free(cur);
			cur = next;
		}
			prev = cur;
			cur = next;
	}
	return head;
}

//3������������м�ڵ�   //1->2->6->3->4->5->6
node* MiddleNode(node* head)//��һ������һ�飬���м�Ԫ��
{
	node* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->_next;
	}
	cur = head;
	count = count / 2;
	while (count--)
	{
		cur = cur->_next;
	}
	return cur;
}
node* MiddleNode(node* head)  //����������ָ�뷨
{
	node* fast = head;
	node* slow = head;
	while (fast&&fast->_next)
	{
		fast = fast->_next->next;
		slow = slow->_next;
	}
	return slow;
}

//4���ϲ�������������
//���룺1->2->4��1->3->4
//�����1->1->2->3->4->4
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) 
{
	if (l1 == NULL)
	{
		return l2;
	}
	if (l1 != NULL)
	{
		return l1;
	}
	struct ListNode* head;
	struct ListNode* tail;
	if (l1->data < l2->data)
	{
		head = l1;
		l1 = l1->_next;
	}
	else
	{
		head = l2;
		l2 = l2->_next;
	}
	tail = head;
	while (l1&&l2)
	{
		if (l1->data < l2->data)
		{
			tail->_next = l1;
			tail = tail->_next;
			l1 = l1->next;
		}
		else
		{
			tail->_next = l2;
			tail = tail->_next;
			l2 = l2->next;
		}
	}
	if (l1)
	{
		tail->_next = l1;
	}
	else
	{
		tail->_next = l2;
	}
	return head;
}

//5������ָ�
//��д���룬�Ը���ֵxΪ��׼������ָ���������֣�����С��x�Ľ������
//���ڻ��ߵ���x�Ľ��֮ǰ������һ�������ͷָ��ListNode* phead
//�뷵���������к�������ͷָ�롣ע�⣺�ָ�󱣳�ԭ��������˳�򲻱�
ListNode* partition(ListNode* pHead, int x)
{
	ListNode* greattail=(ListNode*)malloc(sizeof(ListNode*));
	ListNode* lesshead=(ListNode*)malloc(sizeof(ListNode*));
	ListNode* greathead=greattail;
	ListNode* lesstail=lesshead;
	while (cur)
	{
		if (cur->data < x)
		{
			lesstail->_next = cur;
			lesstail = lesstail->_next;
		}
		else
		{
			greattail->_next = cur;
			greattail = greatertail->_next;
		}
		cur = cur->next;
	}
	//�ϲ�������������
	lesstail->_next = greathead->next;
	greattail->next = NULL;
	phead = lesshead->next;
	return phead;
}













