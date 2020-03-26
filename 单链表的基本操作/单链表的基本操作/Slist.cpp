#include "SList.h"
void SListInit(Node* sl) //单链表的初始化
{
	assert(sl);
	//sl->_head = NULL;
	sl = (Node*)malloc(sizeof(Node));
	sl->_next = NULL;
	/*sl->data=*/
}
//void SlistDestroy(node* sl)  //单链表的销毁
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
void SlistPrintf(Node* sl)  //单链表的打印
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
void SListPushFront(Node* sl, Elemtype val) //头插
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = val;
	newNode->_next = sl->_next;
	sl->_next = newNode;
}
Node* BuySlistNode(Elemtype x)  //给新节点开辟一个空间
{
	Node* pnode = (Node*)malloc(sizeof(Node));
	pnode->data = x;
	pnode->_next = NULL;
	return pnode; 
}
//void SListPopFront(node* s1)//头删
//{
//	assert(s1);
//	Node* next = s1->_head;
//	Node* newnext = next->_next;
//	free(s1->_head);
//	s1->_head = newnext;;
//}
//void SListPushBack(node* sl, Elemtype val)//尾插
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
//void SlistPopBack(node* s1) //尾删
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
// void SListFind(node* sl, Elemtype val) //查找
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
// void SListInsert(node *sl, Node* pos, Elemtype val) //插入
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
// void SListErase(node *sl, Node* pos) //删除
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