//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//using namespace std;
//int NumberRoot(int n)
//{
//	int sum=0;
//	while (n)
//	{
//		sum += n % 10;
//		n = n / 10;
//	}
//	if (sum < 10)
//	{
//		return sum;
//	}
//	else
//	{
//		NumberRoot(sum);
//	}
//}
//int main()
//{
//	int n=0,i=0;
//	vector<string> a;
//	string s;
//	while (cin >> s)
//	{
//		a.push_back(s);
//	}
//	for (i = 0; i < a.size(); i++)
//	{
//		n += (a[i] - '0');
//	}
//	cout << NumberRoot(n) << endl;
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int F(int n)
{
	int a1 = 1;
	int a2 = 2;
	int sum = 0;
	while (--n)
	{
		sum = a1 + a2;
		a1 = a2;
		a2 = sum;
	}
	return a1;
}
int main()
{
	int n;
	vector<int> a;
	cin >> n;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		printf("%04d", F(temp) % 10000);
		//a.push_back(temp);
	}
	/*for (int i = 0; i < a.size(); i++)
	{
		int ret = F(a[i] % 10000);
		printf("%04d", ret);
	}*/
	system("pause");
	return 0;
}