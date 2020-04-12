#include <iostream>
#include <stdlib.h>
using namespace std;
int getnumber(int n)
{
	int flag = 0;
	while (n != 0)
	{
		n = n & (n - 1);
		flag++;
	}
	return flag;
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<getnumber(n)<<endl;
	}
	
	system("pause");
	return 0;
}