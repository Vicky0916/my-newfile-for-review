#include "SList.h"
int main()
{
	Node s;
	SListInit(&s);
	SListPushFront(&s, 1);
	SListPushFront(&s, 2);
	SListPushFront(&s, 3);
	SListPushFront(&s, 4);
	SListPushFront(&s, 5);
	cout << "ͷ�壺" << endl;
	SlistPrintf(&s);
	//SlistDestroy(&s); //�����������
	//cout << "ͷɾ��" << endl;
	//SListPopFront(&s);//ͷɾ
	//SlistPrintf(&s);
	//cout << "β�壺" << endl;
	//SListPushBack(&s, 8);//β��
	//SlistPrintf(&s);
	//cout<< "������β�壺"<<endl;
	//SListPushBack(&s, 1);
	//SListPushBack(&s, 2);
	//SListPushBack(&s, 3);
	//SListPushBack(&s, 4);
	//SListPushBack(&s, 5);
	//SlistPrintf(&s);
	//cout << "βɾ��"<<endl;
	//SlistPopBack(&s);
	//SlistPrintf(&s);
	//cout << "����:"<<endl;
	//SListFind(&s, 8);
	//cout << "λ�ò��룺" << endl;
	//SListInsert(&s, NULL, 8);
	//SlistPrintf(&s);
	//cout << "ĳһλ�õ�ɾ����" << endl;
	//SListErase(&s, NULL);
	//SlistPrintf(&s);
	system("pause");
	return 0;
}

