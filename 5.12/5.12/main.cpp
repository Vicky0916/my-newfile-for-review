#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int tmp(string str1, string str2)
{
	string nstr1 = str1 + str2;
	string nstr2 = str2 + str2;
	return nstr1 < nstr2;
}
void find(int* arr, int len)
{
	string* str = new string[len];
	//将数组转化成字符串
	for (int i = 0; i < len; i++)
	{
		stringstream s;
		s << arr[i];
		s >> str[i]; 
	}
	//每两个进行合并后，比较大小
	sort(str, str + len, tmp);
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
}


int main()
{
	system("pause");
	return 0;
}