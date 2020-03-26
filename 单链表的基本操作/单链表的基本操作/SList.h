#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;
typedef int Elemtype;

typedef struct Slist
{
	Elemtype data;
	struct Slist* _next;
}Node;

//typedef struct Head_Slist
//{
//	Node* _head;
//}node;

void SListInit(Node* sl); //单链表的初始化
void SlistDestroy(Node* sl);  //单链表的销毁
void SlistPrintf(Node* sl);  //单链表的打印
Node* BuySlistNode(Elemtype x);  //给新节点开辟一个空间
void SListPushFront(Node* sl, Elemtype val); //头插


//void SListInit(node* sl); //单链表的初始化
//void SlistDestroy(node* sl);  //单链表的销毁
//void SlistPrintf(node* sl);  //单链表的打印
//Node* BuySlistNode(Elemtype x);  //给新节点开辟一个空间
//void SListPushFront(node* sl, Elemtype val); //头插
//void SListPopFront(node* s1);//头删
//void SListPushBack(node* sl, Elemtype val);//尾插
//void SlistPopBack(node* s1); //尾删
//void SListFind(node* sl, Elemtype val); //查找
//void SListInsert(node *sl, Node* pos, Elemtype val); //插入
//void SListErase(node *sl, Node* pos); //删除
//

