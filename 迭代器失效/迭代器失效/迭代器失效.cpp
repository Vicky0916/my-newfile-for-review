//#include <iostream>
//#include <stdlib.h>
//#include <map>
//using namespace std;
//typedef map<int,int> _map;
//typedef map<int, int> ::iterator it;
//
//void print(_map& m)
//{
//	it _it;
//	for (_it = m.begin(); _it != m.end(); _it++)
//	{
//		cout << _it->first << ":" << _it->second << " ";
//	}
//	cout << endl;
//}
////void Delete(_map& m, int n)  //ɾ�����Ա�n��������
////{
////	it _it;
////	for (_it = m.begin(); _it != m.end(); _it++)
////	{
////		if (_it->second % n == 0)
////		{
////			m.erase(_it);
////		}
////	}
////}
//
//void Delete(_map& m, int n)  //ɾ�����Ա�n��������
//{
//	it _it;
//	for (_it = m.begin(); _it != m.end();)
//	{
//		if (_it->second % n == 0)
//		{
//			m.erase(_it++);
//		}
//		else
//			_it++;
//	}
//}
//int main()
//{
//	_map m;
//	for (int i = 0; i < 20; i++)
//	{
//		m[i] = i;
//	}
//	cout << "map��ԭ�������ǣ�" << endl;
//	print(m);
//	cout << "ɾ����5���������ǣ�" << endl;
//	Delete(m, 5);//ɾ����5��������
//	print(m);
//	system("pause");
//	return 0;
//}