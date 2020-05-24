#include <iostream>
#include <stdlib.h>
using namespace std;

class singleton  //实现单例模式的类
{
private:
	singleton() //私有的构造函数,这样就不能再其他地方创建该实例
	{

	}
	static singleton* instance;  //定义一个唯一指向实例的指针，并且是私有的
	static int b;

	class Delete
	{
	public:
		~Delete()
		{
			if (singleton::instance)
			{
				delete singleton::instance;
				cout << "delete successful!" << endl;
			}
		}
	};

	static Delete del;
public:
	static singleton* GetInstance()  //定义一个公有函数，可以获取这个唯一实例
	{
		if (instance == NULL)  //判断是不是第一次使用
			instance = new singleton;
		return instance;
	}
	static void show()
	{
		cout << b << endl;
	}
};
int singleton::b = 10; //静态成员变量在类外进行初始化，它是整个类的一部分并不属于某个类
singleton* singleton::instance = NULL;
singleton::Delete singleton::del;
int main()
{
	singleton* a1 = singleton::GetInstance();
	cout << a1 << endl;
	a1->show();

	singleton* a2 = singleton::GetInstance();
	cout << a2 << endl;
	a2->show();
	system("pause");
	return 0;
}