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

void SListInit(Node* sl); //������ĳ�ʼ��
void SlistDestroy(Node* sl);  //�����������
void SlistPrintf(Node* sl);  //������Ĵ�ӡ
Node* BuySlistNode(Elemtype x);  //���½ڵ㿪��һ���ռ�
void SListPushFront(Node* sl, Elemtype val); //ͷ��


//void SListInit(node* sl); //������ĳ�ʼ��
//void SlistDestroy(node* sl);  //�����������
//void SlistPrintf(node* sl);  //������Ĵ�ӡ
//Node* BuySlistNode(Elemtype x);  //���½ڵ㿪��һ���ռ�
//void SListPushFront(node* sl, Elemtype val); //ͷ��
//void SListPopFront(node* s1);//ͷɾ
//void SListPushBack(node* sl, Elemtype val);//β��
//void SlistPopBack(node* s1); //βɾ
//void SListFind(node* sl, Elemtype val); //����
//void SListInsert(node *sl, Node* pos, Elemtype val); //����
//void SListErase(node *sl, Node* pos); //ɾ��
//

