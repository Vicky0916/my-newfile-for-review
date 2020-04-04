#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;
/*int LongestSameStrLength(char *str1,string str2)*/
int main()
{
	/*string str;
	while (cin >> str)
	{
		reverse(str.begin(),str.end());
		cout << str << endl;
	}*/
	string str1, str2;
	while (1)
	{
		string temp;
		int max = 0;
		string str_m;
		cin >> str1 >> str2;
		if (str1.size() > str2.size())
		{
			swap(str1, str2);
		}
		for (int i = 0; i < str1.size();i++)
		{
			for (int j = i; j < str1.size(); j++)
			{
				temp = str1.substr(i, j - i + 1);
				if ((int)str2.find(temp) < 0)
					break;
				else if (temp.size() > str_m.size())
				{
					str_m = temp;
				}
			}
		}
		cout << str_m.size() << endl;
	}
	system("pause");
	return 0;
}