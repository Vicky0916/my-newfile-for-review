#include "SList.h"
void SListInit(Node* sl) //������ĳ�ʼ��
{
	assert(sl);
	//sl->_head = NULL;
	sl = (Node*)malloc(sizeof(Node));
	sl->_next = NULL;
	/*sl->data=*/
}
//void SlistDestroy(node* sl)  //�����������
//{
//	assert(sl);
//	Node* cur = sl->_head;
//	while (cur)
//	{
//		Node* next = cur->_next;
//		free(cur);
//		cur = next;
//	}
//}
void SlistPrintf(Node* sl)  //������Ĵ�ӡ
{
	assert(sl);
	if (sl == NULL || sl->_next == NULL)
	{
		cout << "!!" << endl;
	}
	Node* cur = sl;
	while (cur->_next)
	{
		cur = cur->_next;
		cout << cur->data << " ";
	}
		cout << endl;
}
void SListPushFront(Node* sl, Elemtype val) //ͷ��
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = val;
	newNode->_next = sl->_next;
	sl->_next = newNode;
}
Node* BuySlistNode(Elemtype x)  //���½ڵ㿪��һ���ռ�
{
	Node* pnode = (Node*)malloc(sizeof(Node));
	pnode->data = x;
	pnode->_next = NULL;
	return pnode; 
}
//void SListPopFront(node* s1)//ͷɾ
//{
//	assert(s1);
//	Node* next = s1->_head;
//	Node* newnext = next->_next;
//	free(s1->_head);
//	s1->_head = newnext;;
//}
//void SListPushBack(node* sl, Elemtype val)//β��
//{
//	Node* cur = sl->_head;
//	if (sl->_head == NULL)
//	{
//		cur = BuySlistNode(val);
//		cur->_next = NULL;
//		sl->_head = cur;
//	}
//	else
//	{
//		Node* prev = cur;
//		while (cur)
//		{
//			prev = cur;
//			cur = cur->_next;
//		}
//		cur = BuySlistNode(val);
//		prev->_next = cur;
//	}
//	
//}
//void SlistPopBack(node* s1) //βɾ
//{
//	assert(s1);
//	Node* cur = s1->_head;
//	if (cur->_next == NULL)
//	{
//		free(cur);
//		s1->_head = NULL;
//	}
//	else
//	{
//		while (cur->_next->_next)
//		{
//			cur = cur->_next;
//		}
//		free(cur->_next);
//		cur->_next = NULL;
//	}
//}
// void SListFind(node* sl, Elemtype val) //����
//{
//	Node* cur = sl->_head;
//	while (cur)
//	{
//		if (cur->data == val)
//		{
//			cout << "Yes" << endl;
//			break;
//		}
//		else
//		{
//			cur = cur->_next;
//		}
//	}
//	if (cur == NULL)
//	{
//		cout << "No" << endl;
//	}
//}
// void SListInsert(node *sl, Node* pos, Elemtype val) //����
//{
//	 assert(sl);
//	 Node* newnode = BuySlistNode(val);
//	 Node* cur = sl->_head;
//	 if (pos==sl->_head)
//	 {
//		 SListPushFront(sl,val);
//		 return;
//	 }
//	  while (cur ->_next!= pos)
//	 {
//		  cur = cur->_next;
//	  }
//	  newnode->_next = cur->_next;
//	  cur->_next = newnode;
//}
// void SListErase(node *sl, Node* pos) //ɾ��
// {
//	 assert(sl);
//	 Node* cur = sl->_head;
//	 if (pos == sl->_head)
//	 {
//		 SListPopFront(sl);
//		 return;
//	 }
//	 while (cur->_next != pos)
//	 {
//		 cur = cur->_next;
//	 }
//	 cur->_next = pos->_next;
//	 free(pos);
//	 pos->_next = NULL;
//}
//