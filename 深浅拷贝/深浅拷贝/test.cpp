
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
//		if (this != &s) //防止自己给自己赋值
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
//	String(const String& s)  //深拷贝的拷贝构造自己开空间自己拷贝数据
//	{
//		_str = new char[strlen(s._str) + 1];
//		strcpy(_str, s._str);
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s) //防止自己给自己赋值
//		{
//			delete[] _str;//先释放掉原来的空间
//			_str = NULL;
//			_str = new char[strlen(s._str) + 1];  //开空间拷数据
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

////拷贝构造的现代写法
//String(const String& s):_str(NULL)
//{
//	String tmp(s._str);  //调用构造函数
//	swap(_str, tmp_str);  //交换
//}
//String& operator=(const String& s)
//{
//	if (this != &s)
//	{
//		String tmp(s._str);  //调用构造函数
//		swap(_str, tmp_str);  //交换
//	}
//	return *this;
//}

//写时拷贝的写法1
class String
{
public:
	String(const char* str) //构造函数 
		:_str(new char[strlen(str)+1]), _refCount(new int(1))
	{
		strcpy(_str, str);
	}
	String(const String& s)  //拷贝构造
		:_str(s._str),_refCount(s._refCount)
	{
		++_refCount[0];
	}
	String& operator=(const String& s)
	{
		if (this != &s)
		{
			if (--_refCount[0] == 0) //旧的计数减1，如果是最后一个引用对象则释放对象
			{
				delete[] _str;
				delete[] _refCount;
			}
			//如果不是最后一个引用对象
			_str = s._str;
			_refCount = s._refCount;
			++_refCount[0];
		}
		return *this;

	}
private:
	char* _str;
	int* _refCount;
};
int main()
{
	String s1("hello");
	String s2(s1);
	String s3 ("world");
	system("pause");
	return 0;
}