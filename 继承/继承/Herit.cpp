//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;

//class A
//{
//public:
//	void test(int i);
//	void test(double i); //重载
//	void test(int i, double j); //重载
//	int test(int i); //不是重载，因为重载不关心返回值类型
//};

//class A
//{
//public:
//	void fun(double, int)
//	{
//		cout << "父类：fun(double,int)" << endl;
//	}
//};
//class B:public  A
//{
//public:
//	void fun(int)
//	{
//		cout << "子类：fun(int)" << endl;
//	}
//};
//int main()
//{
//	B b;
//	b.fun(1);
//	b.fun(10.1, 1);  //错误，函数不接受两个形参
//	system("pause");
//	return 0;
//}

class A
{
public:
	virtual void fun(int i)
	{
		cout << "基类：fun()" << endl;
	}
};
class B :public A
{
public:
	virtual void fun(int i)
	{
		cout << "派生类：fun()" << endl;
	}
};
int main()
{
	A a;
	A* a1 = new B();
	a1->fun(3);  //输出：派生类：fun();
	system("pause");
	return 0;
}
//class person
//{
//public:
//	friend void display(const person&p, const student&s);
//	friend void function(person p);
//private:
//	string name;
//};
//class student :public person
//{
//protected:
//	int sno;
//};
//void display( const person&p, const student&s)
//{
//	cout << p.name << endl;//报错了，基类友元不能访问子类私有和保护成员
//	cout << s.sno << endl;  //报错
//}
//void function(person p)  //因为function声明为person的友元，所以可以访问类中的所有成员
//{
//	cout << p.name << endl;
//}
//class person
//{
//protected:
//	string name = "Lucy";
//	int age = 21;
//};
//class student :public person
//{
//public:
//	void print()
//	{
//		cout << "name:" << name << endl;
//		cout << "person:age:" << person::age << endl;  //表明要显示父类的age
//		cout << "student:age:" << age << endl;
//	}
//private:
//	int age = 20;
//};
//class person
//{
//private:
//	int age;
//	string name;
//};
//class student:public person
//{
//private:
//	int sno;
//};
//void test()
//{
//	student s;
//	//1、子类的对象可以赋值给派生类的对象，指针或者引用
//	person p1 = s;
//	person *p2 = &s;
//	person &p3 = s;
//	//2、父类对象不能赋值给子类的对象
//	person p4;
//	s = p4; //报错，不能这样写
//	//3、父类的指针可以通过强制类型转换赋值给子类的对象
//	person *p5 = &s;
//	student* s1 = (student*)p5;
//
//}
int main()
{
	//test();
	system("pause");
	return 0;
}