#include <iostream>
#include <stdlib.h>
using namespace std;
class Car
{
public:
	virtual void Drive() = 0;//���麯��
};
class Benz :public Car
{
public:
	virtual void Drive()
	{
		cout << "Benz-����" << endl;
	}
};
class BMW :public Car
{
public:
	virtual void Drive()
	{
		cout << "BMW-�ٿ�" << endl;
	}
};
int main()
{
	Car* pBenz = new Benz;
	pBenz->Drive();
	Car* pBMW = new BMW;
	pBMW->Drive();
	system("pause");
	return 0;
}

//
//class animal 
//{
//public:
//	virtual void sleep()
//	{
//		cout << "animal sleep......" << endl;
//	}
//	virtual void eat() = 0;   //����Ϊ���麯��
//};
//class fish :public animal
//{
//	void sleep()
//	{
//		cout << "fish sleep......" << endl;
//	}
//	void eat()
//	{
//		cout << "fish eat......" << endl;
//	}
//};
//int main()
//{
//	fish fh;
//	//animal *ani = &fh;
//	//ani->sleep();
//	system("pause");
//	return 0;
//}