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

void SeqListInit(Seq* ps, size_t capacity);  //初始化
void SeqListDestroy(Seq* ps);  //销毁
void CheckCapacity(Seq* ps); //检查
void SeqListPushBack(Seq* ps, SqlistType val);  //尾部添加元素
void SeqListPopBack(Seq* ps); //尾部删除元素
void SeqListPrintf(Seq* ps);  //打印顺序表的元素
void SeqListPushFront(Seq* ps, SqlistType val);  //头部添加元素
void SeqListPopFront(Seq* ps); //头部删除元素
int  SeqListFind(Seq* ps, SqlistType val);  //查找元素
void SeqListPush(Seq* ps, size_t pos, SqlistType val);  //向某一位置添加元素
void Erase(Seq* ps, size_t pos);//删除某一位置的值
void SeqListModify(Seq* ps, size_t pos, SqlistType val);//修改某一位置的值
void SeqListBubbleSort(Seq* ps);  //顺序表的排序
void SeqListRemoveAll(Seq* ps, SqlistType val);  //删除某个值





