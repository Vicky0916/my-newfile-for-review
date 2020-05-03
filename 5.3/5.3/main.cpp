//第n个只出现第一次的字符
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int count[128] = { 0 };
	int res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		count[s[i]]++;
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (count[s[i]] == 1)
		{
			res++;
		}
		if (res == 2)
		{
			cout << s[i] << endl;
			break;
		}
	}
	system("pause");
	return 0;
}