//包含重复元素
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

bool IsSwap(vector<int>& a, int start, int end)
{
	for (int i = start; i < end; i++)
		if (a[i] == a[end])
			return false;
	return true;
}
void swap(vector<int>&a, int i, int j)
{
	int temp;
	temp = a[j];
	a[j] = a[i];
	a[i] = temp;
}

void prem(vector<int>&a, int start, int end, vector<vector<int>>&ret)
{
	if (start == end)
	{
		vector<int>::iterator iter;
		for (iter = a.begin(); iter < a.end(); iter++)
		{
			cout << (*iter) << "   ";
		}
		cout << endl;

		ret.push_back(a);
		return;
	}
	else
	{
		for (int i = start; i <= end; i++)
		{
			if (IsSwap(a, start, i))
			{
				swap(a, start, i);
				prem(a, start + 1, end, ret);  //每次选择子后一个元素为开始第一个元素
				swap(a, i, start);
			}
 			
		}
	}
}

int main()
{
	vector<int> v = { 2,2,3,4};
	vector<vector<int>> ret;
	int start = 0, end = v.size()-1;
	prem(v, start, end, ret);
	vector<vector<int>>::iterator iter;
	cout << endl;
	system("pause");
	return 0;
}