#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
	while (1)
	{
		int n, m;
		cin >> n >> m;
		if (n % 2 == 0) //��ż��
		{
			for (int i = 1; i <= m / 2; i++)
			{
				for (int j = 1; j < n; j++)
				{
					if (i + j == m)
					{
						cout << i << " " << j << endl;
					}
				}
			}

		}
		else  //������
		{
			for (int i = 1; i <= m / 2 + 1; i++)
			{
				for (int j = 1; j < n; j++)
				{
					if (i + j == m)
					{
						cout << i << " " << j << endl;
					}
				}
			}
		}
		cout << m << endl;
	}
	
	system("pause");
	return 0;
}