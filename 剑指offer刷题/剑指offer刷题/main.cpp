#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

//简化Uinx风格的路径
int main()
{
	string str;
	while (cin>>str)
	{
		int i = 0;
		int j = 0;
		string ret;
		vector<string> s;
		vector<string> ::iterator it;
		for (i = 0; i < str.size(); i++)
		{
			if (str[i] == '/')
			{
				j = i + 1;
				while (j<str.size()&&str[j] != '/')
				{
					j++;
				}
				if (i + 1 < str.size())
				{
					ret = str.substr(i + 1, j - i - 1);
					if (ret == "..") //出栈前判断是否为空
					{
						if (!s.empty())
						{
							s.pop_back();
						}
					}
					else if (ret == ".")
					{
						; //什么也不做
					}
					else if (!ret.empty())  //入栈之前看其截取的是否为空
					{
						s.push_back(ret);
					}
				}
				
			}
			i = j - 1;
		}
		if (s.empty())  //如果是空的就输出"/"
		{
			cout << "/" << endl;
		}
		else
		{
			for (it = s.begin(); it != s.end(); ++it)
			{
				cout << "/" << *it << endl;
			}
		}
	}
	system("pause");
	return 0;
}

//bool IsSushu(int n)
//{
//	int i = 2;
//	while (i <= n / 2)
//	{
//		if (n%i == 0)
//			return false;
//		i++;
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		
//		int ret = 0;
//		int j = n;
//		int i = n;
//		if (n == 2)
//			ret = 3;
//		else
//		{
//			while (i--)
//			{
//				if (IsSushu(i))
//					break;
//			}
//			while (j++)
//			{
//				if (IsSushu(j))
//					break;
//			}
//			ret = n - i <= abs(n - j) ? i : j;
//		}
//		
//		cout << ret << endl;
//	}
//	system("pause");
//	return 0;
//}