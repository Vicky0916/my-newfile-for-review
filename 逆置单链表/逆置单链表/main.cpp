
//�����������
Node* Reverse(node* s1)
{
	Node* head = s1->_head;
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
//�������Ƿ���ڻ�