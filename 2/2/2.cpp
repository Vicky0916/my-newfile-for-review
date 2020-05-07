#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int num[10] = { 2,7,11,15 };
	int n = 9;
	int ret1 = 0;
	int ret2 = 0;
	for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
	{
		for (int j = i + 1; j < sizeof(num) / sizeof(num[0]); j++)
		{
			if (num[i] + num[j] == n)
			{
				ret1 = i;
				ret2 = j;
				break;
			}
		}	
	}
	cout << ret1 << endl;
	cout << ret2 << endl;
	system("pause");
	return 0;
}