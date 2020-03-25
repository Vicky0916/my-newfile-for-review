
#include "test.h"
int main()
{
	SeqList s;
	SeqListInit(&s, 3);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPrintf(&s);
	cout << endl;
	SeqListPopBack(&s);
	SeqListPrintf(&s);
	cout << endl;
	SeqListPushFront(&s, 8); //头部添加元素
	SeqListPushFront(&s, 6); //头部添加元素
	SeqListPrintf(&s);
	cout << endl;
	SeqListPopFront(&s); //删除头部元素
	SeqListPrintf(&s);
	cout << endl;
	system("pause");
	return 0;
}