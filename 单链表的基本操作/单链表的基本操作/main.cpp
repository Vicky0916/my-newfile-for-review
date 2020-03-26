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
	cout << "Í·²å£º" << endl;
	SlistPrintf(&s);
	//SlistDestroy(&s); //µ¥Á´±íµÄÏú»Ù
	//cout << "Í·É¾£º" << endl;
	//SListPopFront(&s);//Í·É¾
	//SlistPrintf(&s);
	//cout << "Î²²å£º" << endl;
	//SListPushBack(&s, 8);//Î²²å
	//SlistPrintf(&s);
	//cout<< "¿ÕÁ´±íÎ²²å£º"<<endl;
	//SListPushBack(&s, 1);
	//SListPushBack(&s, 2);
	//SListPushBack(&s, 3);
	//SListPushBack(&s, 4);
	//SListPushBack(&s, 5);
	//SlistPrintf(&s);
	//cout << "Î²É¾£º"<<endl;
	//SlistPopBack(&s);
	//SlistPrintf(&s);
	//cout << "²éÕÒ:"<<endl;
	//SListFind(&s, 8);
	//cout << "Î»ÖÃ²åÈë£º" << endl;
	//SListInsert(&s, NULL, 8);
	//SlistPrintf(&s);
	//cout << "Ä³Ò»Î»ÖÃµÄÉ¾³ý£º" << endl;
	//SListErase(&s, NULL);
	//SlistPrintf(&s);
	system("pause");
	return 0;
}

