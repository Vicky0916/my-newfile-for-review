#include <iostream>
#include <stdlib.h>
using namespace std;
int FB(int n)
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 0;
	for (int i = 2; i < n; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}
int main()
{
	int n;
	cout << "请输入台阶的阶数：" << endl;
	cin >> n;
	int ret;
	ret = FB(n);
	cout << ret << endl;
	system("pause");
	return 0;
}