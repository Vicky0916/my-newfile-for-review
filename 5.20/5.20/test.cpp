#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int function()
{
	vector<int> v;
	int temp;
	int sum = 0;
	int max = INT_MIN;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i; j < v.size(); j++)
		{
			sum += v[j];
			if (sum > max)
				max = sum;
		}
		sum = 0;
	}
	return max;
}
int main()
{
	int res = function();
	cout << res << endl;
	system("pause");
	return 0;
}