int foo()
{
	static int i = 1;
	i += 1;
	return i;
}

satic int n;  //定义静态全局变量

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

//文件1
#include <iostream>
#include <stdlib.h>
using namespace std;
static int n;  //定义静态全局变量

int main()
{
	n = 20;
	cout << n << endl;
	system("pause");
	return 0;
}

//文件2
#include<iostream>
#include <stdlib.h>
using namespace std;

extern int n;  //定义相同名字的变量n

void fn()
{
	n++;
	cout << n << endl;
	system("pause");
}