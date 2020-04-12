#include <iostream>
#include <stdlib.h>
using namespace std;
int Print(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else if (n % 2 == 1)
	{
		return 2;//奇数行第二个是偶数
	}
	else if (n % 4 == 0)   //改行是4的倍数
	{
		return 3;
	}
	else
	{
		return 4;//是偶数，但不是4的倍数，例如6，那么第四个就是偶数
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		int ret = Print(n);
		cout << ret<<endl;
		ret = 0;
	}
}