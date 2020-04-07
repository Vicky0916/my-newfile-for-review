#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
bool Isbrother(string str, string s)
{
	if (str.size() == s.size())
	{
		if (str == s)
		{
			return false;
		}
		sort(str.begin(), str.end());
		sort(s.begin(), s.end());
		if (str == s)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int num;
	while (cin >> num)
	{
		string ret, s, Symbolword;
		int index;
		vector<string> v;

		for (int i = 0; i < num; i++)
		{
			cin >> ret;
			v.push_back(ret);
		}
		sort(v.begin(), v.end());
		cin >> Symbolword;
		cin >> index;
		int counts = 0;
		for (int i = 0; i < num; i++)
		{
			if (Isbrother(Symbolword, v[i]))
			{
				counts++;
			}
			if (counts == index)
			{
				s = v[i];
			}
		}

		if (!v.empty())
		{
			cout << counts << " ";
		}
		if (counts >= index)
		{
			cout << s << endl;
		}
	}
	system("pause");
	return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isBrother(string str, string s) {
	if (str.size() == s.size()) {
		if (str == s)
			return false;
		sort(str.begin(), str.end());
		sort(s.begin(), s.end());
		if (str == s)
			return true;
	}
	return false;
}
int main() {
	int num;
	while (cin >> num) {
		string str;
		string word, s;
		int index;
		vector<string> vs;
		for (int i = 0; i < num; ++i) {
			cin >> str;
			vs.push_back(str);
		}
		sort(vs.begin(), vs.end());  // 因为是字典，一定要排序！！
		cin >> word;
		cin >> index;
		int counts = 0;

		for (int i = 0; i < num; ++i) {
			if (isBrother(word, vs[i])) {
				counts++;
				if (counts == index)
					s = vs[i];
			}
		}
		if (!vs.empty())
			cout << counts << endl;
		if (counts >= index)
			cout << s << endl;

	}
	return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool Isbrother(string str, string s)
{
	if (str.size() == s.size())
	{
		if (str == s)
			return false;
		sort(str.begin(), str.end());
		sort(s.begin(), s.end());
		if (str == s)
			return true;
	}
	return false;
}
int main()
{
	int num;
	while (cin >> num)
	{
		string ret;
		string s, Symbolword;
		int index;
		vector<string> v;

		for (int i = 0; i < num; ++i)
		{
			cin >> ret;
			v.push_back(ret);
		}
		sort(v.begin(), v.end());
		cin >> Symbolword;
		cin >> index;
		int counts = 0;
		for (int i = 0; i < num; ++i)
		{
			if (Isbrother(Symbolword, v[i]))
			{
					counts++;
				if (counts == index)
					s = v[i];
			}
				
		}
		if (!v.empty())
			cout << counts << endl;
		if (counts >= index)
			cout << s << endl;
	}
	system("pause");
	return 0;
}
//int main()
//{
//	while (1)
//	{
//		string str;
//		cin >> str;
//		int start = 0;
//		vector<string> v;
//		while (start != str.size())
//		{
//			int end = start;
//			while (end != str.size() && str[end] != '_')
//			{
//				if (end == str.size())
//				{
//					continue;
//				}
//				++end;
//			}
//			if (start == 0)
//			{
//				v.push_back(str.substr(start, end - start));
//				start = end + 1;
//			}
//			else
//			{
//				str[start] = str[start] - 32;
//				v.push_back(str.substr(start, end - start));
//				if (end == str.size())
//				{
//					start = end;
//				}
//				else
//				{
//					start = end + 1;
//				}
//			}
//
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i];
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	
//		string s="";
//
//		while (cin >> s)
//		{
//			for (int i = 0; i < s.length(); i++)
//			{
//				if (s[i] == '_')
//				{
//					s.erase(i, 1);
//					s[i] = s[i] - 32;
//				}
//			}
//			cout << s << endl;
//		}
//	system("pause");
//	return 0;
//}
