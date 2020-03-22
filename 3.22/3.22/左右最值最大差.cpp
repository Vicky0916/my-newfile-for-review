#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
int findMaxGap(vector<int> A, int n)
{
	int max = A[0], tmp = 0; int res = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			tmp = i;
		}
	}
	if (tmp == 0)  // 如果最大值就是第一个
	{
		res = A[0] - A[n - 1];
	}

	else
	{
		if (tmp == n - 1)  //如果最大值就是最后一个
		{
			res = max - A[0];
		}
		else
		{
			res = A[0] > A[n - 1] ? max - A[n - 1] : max - A[0];
		}
	}
	return res;
}

int main()
{
	while (1)
	{
		int n;
		cin >> n;
		int ret;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> ret;
			v.push_back(ret);
		}
		int s = findMaxGap(v, n);
		cout << s << endl;
	}
	system("pause");
	return 0;
}