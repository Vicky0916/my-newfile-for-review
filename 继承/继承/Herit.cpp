#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class person
{
public:
	friend void display(const person&p, const student&s);
private:
	string name;
};
class student :public person
{
protected:
	int sno;
};
void display(const person&p, const student&s)
{
	cout << p.name << endl;//基类友元不能访问子类私有和保护成员
	cout << s.sno << endl;
}
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