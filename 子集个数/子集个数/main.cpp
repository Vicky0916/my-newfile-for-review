#include <iostream>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

//int main()
//{
//	while (1)
//	{
//		int person;
//		int n;
//		int count=0;
//		vector<int> v;
//		int max;
//		int p0=1;
//		int compare=0;
//		cin >> person >> n;
//		for (int i = 0; i < person; i++)
//		{
//			int temp;
//			cin >> temp;
//			v.push_back(temp);
//		}
//		max = v[0];
//		while (compare != n)
//		{
//			if (max > v[p0])
//			{
//				compare++;
//				count++;
//			}
//			else
//			{
//				compare = 1;
//				v.push_back(max);
//				max = v[p0];
//				count++;
//				p0++;
//			}	
//		}
//		cout << count << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

//Çó×Ó¼¯
//vector<vector<int>> subsets(vector<int>& nums)
//{
//	vector<vector<int>> res(1);
//	for (int i = 0; i < nums.size(); i++)
//	{
//		int size = res.size();
//		for (int j = 0; j <size; j++)
//		{
//			vector<int> tmp = res[j];
//			tmp.push_back(nums[i]);
//			res.push_back(tmp);
//		}
//	}
//	return res;
//}
////

void dfs(vector<vector<int>>& res, int start, vector<int>& nums, vector<int> &v)
{
	res.push_back(v);
	for (int i = start; i < nums.size(); i++)
	{
		v.push_back(nums[i]);
 		dfs(res, start + 1, nums, v);
		v.pop_back();
	}
}
vector<vector<int>> subsets(vector<int>& nums)
{
	vector<vector<int>> res;
	vector<int> v;
	dfs(res, 0, nums, v);
	return res;
}

int main()
{
	vector<vector<int>> res;
	vector<int> v = { 1,2,3 };
	subsets(v);
	system("pause");
	return 0;
}