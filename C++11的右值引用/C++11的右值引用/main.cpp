#include <iostream>
#include <stdlib.h>
using namespace std;
class Test
{
public:
	Test() :_a(new int[100]{0})
	{
		cout << "调用构造函数" << endl;
	}
	Test(const Test&rhs)
	{
		cout << "调用拷贝构造函数" << endl;
		_a = new int[100];
		memcpy(_a, rhs._a, 100 * sizeof(int));
	}
private:
	int *_a{ nullptr };
};
Test Function()
{
	return Test();
}
int main()
{
	Test t(Function());
	system("pause");
	return 0;
}
//int g_a = 10;
//
//int& F()
//{
//	return g_a;
//}

//int main()
//{
//	int a = 10;
//	//在右边的一定是右值吗？不一定，例如下面的表达式a
//	int b = a;
//	//左值通常是：可以被修改的对象
//	//右值通常是：常量，表达式的返回值
//	//左值引用可以引用左值:
//	int &c = a;
//	//左值引用可以引用右值吗？不可以，但是const左值可以，如下：
//	const int& d = 10;
//	//右值引用引用右值:
//	int &&e = 10;
//	//右值引用可以引用左值吗？不可以，但是用move将左值换成右值就可以，如下：
//	int &&f = move(a);
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//a和b都是左值，b既可以在=的左侧，也可以在右侧,如下：
//	a = b;
//	b = a;
//	//说明:左值既可以放在=的左侧，也可以放在=的右侧
//
//	const int c = 30;
//	c = a;  //编译报错，c为const 常量，只允许读不允许修改
//	 //因为可以对c取地址，因此c严格的来说不算是左值，如下：
//	cout << &c << endl;
//
//	//编译失败，因为b+1的结果是一个临时变量，没有具体名称，不能取地址，因此为右值，如下：
//	b + 1 = 20;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	普通类型只能引用左值，不能引用右值，如下：
//	int& ra1 = a;   //ral为a的别名
//	int& ra2 = 10;  //编译失败，因为10是右值
//
//	const引用既可以引用左值，也可以引用右值，如下：
//	const int&ra3 = 10;
//	const int&ra4 = a;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//10本来是纯右值，本来是一个符号，没有具体空间
//	//右值引用变量r1在定义过程中，编译器产生了一个临时变量，r1实际引用的是临时变量
//	int &&r1 = 10;
//	r1 = 100;
//
//	int a = 10;
//	int&& r2 = a;  //编译失败，因为右值引用不能引用左值
//
//	return 0;
//}
