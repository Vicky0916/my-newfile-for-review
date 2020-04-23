#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
//
////int main()
////{
////	string str;
////	while (1)
////	{
////		cin >> str;
////		string res="";
////		bool flag = true;
////		auto begin = str.begin();
////	    if (str[0] == '-')
////		{
////			res += '($';
////			flag = false;
////			begin++;
////		}
////		else
////			res += '$';    
////		int k = 0;
////		while (begin != str.end())
////		{
////			while (k<3)
////			{
////				res += *begin;
////				begin++;
////				k++;
////				if (begin != str.end() && k == 3)
////				{
////					res += ',';
////					k = 0;
////				}
////				else if (*begin = '.')
////				{
////					continue;
////				}
////				if (begin == str.end())
////					break;
////			}
////			if (*begin == '.')
////			{
////				k = 2;
////				while (k--)
////				{
////					if (begin == str.end())
////						res += '0';
////					else
////					{
////						res += *begin;
////						begin++;
////					}	
////				}
////				break;
////			}
////			if (begin == str.end())
////				break;
////			if (flag = false)
////				res += ')';
////		}
////		cout << res << endl;
////		
////	}
////	system("pause");
////	return 0;
////}

vector<int> Binary(int n)
{
	int m = 0;
	vector<int> v;
	vector<int> v2;
	while (n > 0)
	{
		m = n % 2;
		n /= 2;
		v.push_back(m);
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		for (int j = 0; j < v.size() - 1; j++)
		{
			v2[j] = v[i];
		}
	}
	return v2;
}
int main()
{
 	while (1)
	{
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		for (int i = 0; i < v.size(); i++)
		{
			int j = 0;
			while (j < v.size())
			{
				vector<int> v= Binary(v[i]);
				vector<int> v2= Binary(v[j]);
				if (i == j)
					j++;
				for(int i=0;i<v.size();i++)
					for (int j = 0; j < v2.size(); j++)
					{
						if (v[i] & v[j]!=0)
							break;
					}
				if (i < v.size() && j < v2.size())
				{
					cout << -1 << " ";
					break;
				}
				else
					j++;
			}
			cout << 1 << " ";
		}
	}
	system("pause");
	return 0;
}