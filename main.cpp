int foo()
{
	static int i = 1;
	i += 1;
	return i;
}

satic int n;  //���徲̬ȫ�ֱ���

void Function()
{
	n++;
	cout << n << endl;
}
int main()
{
	n = 20;
	cout << n << endl;
	Function();
	return 0;
}

//�ļ�1
#include <iostream>
#include <stdlib.h>
using namespace std;
static int n;  //���徲̬ȫ�ֱ���

int main()
{
	n = 20;
	cout << n << endl;
	system("pause");
	return 0;
}

//�ļ�2
#include<iostream>
#include <stdlib.h>
using namespace std;

extern int n;  //������ͬ���ֵı���n

void fn()
{
	n++;
	cout << n << endl;
	system("pause");
}