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
	cout << p.name << endl;//������Ԫ���ܷ�������˽�кͱ�����Ա
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