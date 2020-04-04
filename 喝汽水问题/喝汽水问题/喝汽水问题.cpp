#include <iostream>
#include <stdlib.h>
using namespace std;
int Drink(int n)
{
	int sum = 0;
	int shang = 0;
	int yushu = 0;
	while (n >= 3)
	{
		yushu = n % 3;
     	shang = n / 3;
		sum += shang;
		n = shang + yushu;
	}
	if (n == 2)
	{
		sum += 1;
	}
	else
	{
		sum += 0;
	}
	return sum;
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int ret = Drink(n);
		cout << ret << endl;
	}
	
	system("pause");
	return 0;
}