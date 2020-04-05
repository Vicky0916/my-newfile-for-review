#include  <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
vector<string> Splict(string str, string s)
{
	str += s;
	vector<string> v;

	int pos = str.find(s);
	while (pos!= string::npos)
	{
		string ret = str.substr(0, pos);
		v.push_back(ret);
		str = str.substr(pos + 1);  //str为pos+1后面的字符串
		pos = str.find(s);
	}
	return v;
}
int main()
{
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	vector<string> v1;
	v1=Splict(str1, " ");
	vector<string> v2;
	v2 = Splict(str2, " ");
	int flag = 0;
	for (int i = 0, j = 0; i < v1.size();)
	{
		for (int k = 0; k < 4; k++)
		{
			cout << v1[i++] << " ";

			if (i >= v1.size())
			{
				flag = 1;  //说明v1已经输出完了
				break;
			}
		}
		if (j >= v2.size())  //判断v2是不是比v1先输出完成,否则会发生断错误
		{
			for (; i < v1.size();)
			{
				cout << v1[i++] << " ";
			}
			break;
		}

		if (flag)  //v1已经输出完了，判断v2是否已经输出结束
		{
			for (;j < v2.size();)
			{
				cout << v2[j++] << " ";
			}
		}
		else
			cout << v2[j++] << " ";
	}
	system("pause");
	return 0;
}
//int main()
//{
//	string str1;
//	string str2;
//	while (1)
//	{
//		getline(cin, str1);
//		getline(cin, str2);
//		vector<char> v;
//		int k = 0, j = 0;
//		// 1 2 3 4 5 6 7  a b c     -> 1 2 3 4 a 5 6 7 b c
//		for (int i = 0; i < str1.size(); i++)
//		{
//			if (k == 8 && j < str2.size())
//			{
//				v.push_back(str2[j]);
//				j++;
//				k = 0;
//			}
//			else
//			{
//				v.push_back(str1[i]);
//				k++;
//			}
//		}
//		if (j < str2.size())
//		{
//			for (int i = j; i < str2.size(); i++)
//			{
//				v.push_back(str2[i]);
//			}
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i];
//		}
//		cout << endl;
//		
//	}
//	system("pause");
//	return 0;
//}