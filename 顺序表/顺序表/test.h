#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;
typedef int SqlistType;

typedef struct SeqList
{
	SqlistType* array;
	size_t size;
	size_t capacity;
}Seq;

void SeqListInit(Seq* ps, size_t capacity);  //��ʼ��
void SeqListDestroy(Seq* ps);  //����
void CheckCapacity(Seq* ps); //���
void SeqListPushBack(Seq* ps, SqlistType val);  //β�����Ԫ��
void SeqListPopBack(Seq* ps); //β��ɾ��Ԫ��
void SeqListPrintf(Seq* ps);  //��ӡ˳����Ԫ��
void SeqListPushFront(Seq* ps, SqlistType val);  //ͷ�����Ԫ��
void SeqListPopFront(Seq* ps); //ͷ��ɾ��Ԫ��
int  SeqListFind(Seq* ps, SqlistType val);  //����Ԫ��
void SeqListPush(Seq* ps, size_t pos, SqlistType val);  //��ĳһλ�����Ԫ��
void Erase(Seq* ps, size_t pos);//ɾ��ĳһλ�õ�ֵ
void SeqListModify(Seq* ps, size_t pos, SqlistType val);//�޸�ĳһλ�õ�ֵ
void SeqListBubbleSort(Seq* ps);  //˳��������
void SeqListRemoveAll(Seq* ps, SqlistType val);  //ɾ��ĳ��ֵ





