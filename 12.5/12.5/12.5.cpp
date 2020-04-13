#include  <iostream>
#include <stdlib.h>
using namespace std;
void Sushu(int n)
{
	int flag = 1;
	int j = 2;
	for (int i = 2; i < n; i++)  //获取n以内的数字
	{
		for (j = 2; j < i; j++)   //
		{
			if (i%j == 0)
			    break;
		}
		if (i == j && i % 10 == 1)
		{
			flag = 0;
			cout << i << " ";
		}
	}
	cout << endl;
	if (flag)
	{
		cout << -1 << endl;
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		Sushu(n);
	}
	system("pause");
	return 0;
}