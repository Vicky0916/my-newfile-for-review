//#include <iostream>
//#include <stdlib.h>
//#include <string>
//using namespace std;

//class A
//{
//public:
//	void test(int i);
//	void test(double i); //����
//	void test(int i, double j); //����
//	int test(int i); //�������أ���Ϊ���ز����ķ���ֵ����
//};

//class A
//{
//public:
//	void fun(double, int)
//	{
//		cout << "���ࣺfun(double,int)" << endl;
//	}
//};
//class B:public  A
//{
//public:
//	void fun(int)
//	{
//		cout << "���ࣺfun(int)" << endl;
//	}
//};
//int main()
//{
//	B b;
//	b.fun(1);
//	b.fun(10.1, 1);  //���󣬺��������������β�
//	system("pause");
//	return 0;
//}

class A
{
public:
	virtual void fun(int i)
	{
		cout << "���ࣺfun()" << endl;
	}
};
class B :public A
{
public:
	virtual void fun(int i)
	{
		cout << "�����ࣺfun()" << endl;
	}
};
int main()
{
	A a;
	A* a1 = new B();
	a1->fun(3);  //����������ࣺfun();
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
//	cout << p.name << endl;//�����ˣ�������Ԫ���ܷ�������˽�кͱ�����Ա
//	cout << s.sno << endl;  //����
//}
//void function(person p)  //��Ϊfunction����Ϊperson����Ԫ�����Կ��Է������е����г�Ա
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
//		cout << "person:age:" << person::age << endl;  //����Ҫ��ʾ�����age
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
//	//1������Ķ�����Ը�ֵ��������Ķ���ָ���������
//	person p1 = s;
//	person *p2 = &s;
//	person &p3 = s;
//	//2����������ܸ�ֵ������Ķ���
//	person p4;
//	s = p4; //������������д
//	//3�������ָ�����ͨ��ǿ������ת����ֵ������Ķ���
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