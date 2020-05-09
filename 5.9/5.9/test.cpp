#include  <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
//void ShellSort(vector<int> a)
//{
//	for (int step = a.size() / 2; step > 0; step /= 2)
//	{
//		for (int i = step; i < a.size(); i++)
//		{
//			int j = i;
//			int temp = a[j];
//			while (j - step >= 0&&a[j-step]>temp)
//			{
//				a[j] = a[j - step];
//				j = j - step;
//			}
//			a[j] = temp;
//		}
//	}
//}
//int main()
//{
//	while (1)
//	{
//		vector<int> a;
//		int temp = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> temp;
//			a.push_back(temp);
//		}
//		ShellSort(a);
//		for (int i = 0; i < 5; i++)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
void TheSame(vector<int> a, vector<int> b)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i] == a[j])
				cout << a[i] << " ";
		}
	}
}
int main()
{
	
	system("pause");
	return 0;
}