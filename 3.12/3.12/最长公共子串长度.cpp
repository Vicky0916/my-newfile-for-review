#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
//int TheSameLen(string s1, string s2)
//{
//	
//	int j = 0;
//	int size = 0;
//	int k = 0;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		string ret;
//		for ( k = j; k < s2.size(); k++)
//		{
//			if (s1[i] == s2[k])
//			{
//				ret += s1[i];
//				k+=1;
//				j = k;
//				continue;
//			}
//		}
//		if (k == s2.size())
//		{
//			k = j = 0;
//		}
//		if (ret.size() > size)
//			size = ret.size();
//	}
//	
//	return size;
//}
//int TheSameLen(string s1, string s2)
//{
//	//abbbcd bba
//	
//	int max = 0;
//	int points1 = 0;
//	int symbol = 0;
//	for (int k = 0; k < s1.size(); k++)
//	{
//		int flag = 0;
//		string ret;
//		for (int i = k; i < s1.size(); i++)
//		{
//			for (int j = flag; j < s2.size(); j++)
//			{
//				if (s1[i] == s2[j])
//				{
//					flag = j+1;
//					ret += s1[i];
//					break;
//				}
//			}
//		}
//		if (ret.size() > max)
//			max = ret.size();
//	}
//	return max;
//}
int TheMaxLength(vector<int> a)  //最长公共不连续序列
{
	int max = 0;
	vector<int> ret;
	for (int i = 0; i < a.size(); i++)
	{
		int max1 = i;
		for (int j = i + 1; j < a.size(); j++)
		{
			ret.push_back(a[i]);
			if (a[j] > a[i])
			{
				max1 = j;
				ret.push_back(a[j]);
			}
			for (int k = max1+1; k < a.size(); k++)
			{
				if (a[k] > a[max1])
				{
					max1 = k;
					ret.push_back(a[k]);
				}
			}
			if (ret.size() > max)
				max = ret.size();
			ret.clear();
		}
		
	}
	return max;
}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> a;
//		int temp;
//		int ret;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> temp;
//			a.push_back(temp);
//		}
//		ret = TheMaxLength(a);
//		cout << ret << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{ 
//		int ret = TheSameLen(s1, s2);
//		cout << ret << endl;
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	long long res[21] = { 0,0,1 };
	for (int i = 3; i < 21; i++)
	{
		res[i] = (i - 1)*(res[i - 1] + res[i - 2]);
	}
	int n;
	while (cin >> n)
	{
		cout << res[n] << endl;
	}
	system("pause");
	return 0;
}