
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;
//class String
//{
//public:
//	String(const char* str):_str(new char[strlen(str)+1])
//	{
//		strcpy(_str,str);
//	}
//	String(const String& s)
//	{
//		_str = s._str;
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s) //��ֹ�Լ����Լ���ֵ
//		{
//			_str = s._str;
//		}
//		return *this;
//	}
//	~String()
//	{
//		if (_str)
//		{
//			delete[] _str;
//		}
//		_str = NULL;
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//class String
//{
//public:
//	/*String(const char* str) :_str(new char[strlen(str) + 1])
//	{
//		strcpy(_str, str);
//	}*/
//	String(const String& s)  //����Ŀ��������Լ����ռ��Լ���������
//	{
//		_str = new char[strlen(s._str) + 1];
//		strcpy(_str, s._str);
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s) //��ֹ�Լ����Լ���ֵ
//		{
//			delete[] _str;//���ͷŵ�ԭ���Ŀռ�
//			_str = NULL;
//			_str = new char[strlen(s._str) + 1];  //���ռ俽����
//			strcpy(_str, s._str);
//		}
//		return *this;
//	}
//	~String()
//	{
//		if (_str)
//		{
//			delete[] _str;
//		}
//		_str = NULL;
//	}
//private:
//	char* _str;
//};
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//	system("pause");
//	return 0;
//}

////����������ִ�д��
//String(const String& s):_str(NULL)
//{
//	String tmp(s._str);  //���ù��캯��
//	swap(_str, tmp_str);  //����
//}
//String& operator=(const String& s)
//{
//	if (this != &s)
//	{
//		String tmp(s._str);  //���ù��캯��
//		swap(_str, tmp_str);  //����
//	}
//	return *this;
//}

//дʱ������д��1
//class String
//{
//public:
//	String(const char* str) //���캯�� 
//		:_str(new char[strlen(str)+1]), _refCount(new int(1))
//	{
//		strcpy(_str, str);
//	}
//	String(const String& s)  //��������
//		:_str(s._str),_refCount(s._refCount)
//	{
//		++_refCount[0];
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s)
//		{
//			if (--_refCount[0] == 0) //�ɵļ�����1����������һ�����ö������ͷŶ���
//			{
//				delete[] _str;
//				delete[] _refCount;
//			}
//			//����������һ�����ö���
//			_str = s._str;
//			_refCount = s._refCount;
//			++_refCount[0];
//		}
//		return *this;
//
//	}
//private:
//	char* _str;
//	int* _refCount;
//};
//int main()
//{
//	String s1("hello");
//	String s2(s1);
//	String s3 ("world");
//	system("pause");
//	return 0;
//}

	int StrToInt(string str)
	{
		long long res = 0;
		int flag = 0;
		int n = 0;
		if (str == "")
			return 0;
		for (int i = str.size() - 1; i > 0; i--)
		{
			if (!(str[i] >= '0'&&str[i] <= '9'))
				return 0;
			else
			{
				res += ((str[i] - '0')*pow(10, n));
				n++;
			}
		}
		if (str[0] == '+')
		{
			flag = 1;
			if (res*flag > INT_MAX)
				return 0;
			else
				return res;
		}
		else if (str[0] == '-')
		{
			flag = -1;
			if (res*flag < INT_MIN)
				return 0;
			else
				return res * flag;
		}
		else if (str[0] >= '0'&&str[0] <= '9')
		{
			res += ((str[0] - '0')*pow(10, n));
			if (res < INT_MAX)
				return res;
			else
				return 0;
		}
		else
			return 0;
	}
	int main()
{
		int res = StrToInt("-2147483649");
		system("pause");
		return 0;
}