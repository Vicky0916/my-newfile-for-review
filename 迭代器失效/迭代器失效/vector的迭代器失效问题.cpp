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
void Delete(v& _v, int n)  //ɾ�����Ա�n��������
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
////void Delete(v& _v, int n)  //ɾ�����Ա�n��������
//{
//	it _it;
//	for (_it = _v.begin(); _it != _v.end();)
//	{
//		if (*_it% n == 0)
//		{
//			_it=_v.erase(_it);  //vectorԪ���Զ���ǰŲ���ˣ�map������ǰŲ�������Բ��ܰ�_it++
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
	cout << "vector��ԭ�������ǣ�" << endl;
	print(_v);
	cout << "ɾ����5���������ǣ�" << endl;
	Delete(_v, 5);//ɾ����5��������
	print(_v);
	system("pause");
	return 0;
}