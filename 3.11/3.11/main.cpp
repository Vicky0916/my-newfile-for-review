#include <iostream>
#include <stdlib.h>
using namespace std;
int m, n;
char a[20][20];
int sum = 0;
void F(int x, int y)
{
	if (x < 0 || y < 0 || x == m || y == n||a[x][y]=='#')
	{
		return;
	}
	sum++;
	a[x][y] = '#';
	F(x, y - 1);  //��
	F(x, y + 1); //��
	F(x-1, y);  //��
	F(x + 1, y); //��
}
int main()
{
	
	while (cin >> m >> n)
	{
		int x, y;
		getchar();
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == '@')
				{
					m = i;
					n = j;
					break;
				}
			}
		}
		F(x, y);
		cout << sum << endl;
	}
	system("pause");
	return 0;
}