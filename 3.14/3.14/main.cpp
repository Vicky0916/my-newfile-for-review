#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
//int main()
//{
//		string str;
//		while (getline(cin, str))
//		{
//			for (int i = 0; i < str.size(); i++)
//			{
//				if (str[i] >= '0'&&str[i] <= '9')
//					cout << str[i];
//			}
//			cout << endl;
//		}
//	system("pause");
//	return 0;
//}
int main()
{
	string s;
	getline(cin, s);
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
		{
			++end;
		}
		reverse(start, end);
		if (end != s.end())
		{
			start = end;
		}
		else
		{
			start = end + 1;
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}
