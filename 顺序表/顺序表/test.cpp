
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
	SeqListPushFront(&s, 8); //ͷ�����Ԫ��
	SeqListPushFront(&s, 6); //ͷ�����Ԫ��
	SeqListPrintf(&s);
	cout << endl;
	SeqListPopFront(&s); //ɾ��ͷ��Ԫ��
	SeqListPrintf(&s);
	cout << endl;
	system("pause");
	return 0;
}