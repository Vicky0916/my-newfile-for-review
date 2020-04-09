#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
typedef vector<int> v;
typedef vector<int> ::iterator it;

void print(v& _v)
{
	it _it;
	for (_it = _v.begin(); _it != _v.end(); _it++)
	{
		cout << *_it << " ";
	}
	cout << endl;
}
void Delete(v& _v, int n)  //删除可以被n整除的数
{
	it _it;
	for (_it = _v.begin(); _it != _v.end(); _it++)
	{
		if (*_it % n == 0)
		{
			_v.erase(_it);
		}
	}
}
//
////void Delete(v& _v, int n)  //删除可以被n整除的数
//{
//	it _it;
//	for (_it = _v.begin(); _it != _v.end();)
//	{
//		if (*_it% n == 0)
//		{
//			_it=_v.erase(_it);  //vector元素自动向前挪动了，map不会向前挪动，所以不能把_it++
//		}
//		else
//			_it++;
//	}
//}
int main()
{
	v _v;
	for (int i = 0; i < 20; i++)
	{
		_v.push_back(i);
	}
	cout << "vector中原来的数是：" << endl;
	print(_v);
	cout << "删除被5整除的数是：" << endl;
	Delete(_v, 5);//删除被5整除的数
	print(_v);
	system("pause");
	return 0;
}