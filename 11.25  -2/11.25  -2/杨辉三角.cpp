#include <iostream>
#include <stdlib.h>
using namespace std;
int Print(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else if (n % 2 == 1)
	{
		return 2;//�����еڶ�����ż��
	}
	else if (n % 4 == 0)   //������4�ı���
	{
		return 3;
	}
	else
	{
		return 4;//��ż����������4�ı���������6����ô���ĸ�����ż��
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