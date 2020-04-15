class Solution {
private:
	vector<vector<int>> vv;
public:
	vector<vector<int> > FindContinuousSequence(int sum)
	{
		vector<int> v;
		dfs(0, v, sum);
		return vv;
	}

	void dfs(int begin, vector<int> v, int sum)
	{
		if (sum == 0)
			vv.push_back(v);
		else
		{
			for (int i = begin; i < sum; i++)
			{
				if (i <= sum)
				{
					v.push_back(i);
					dfs(i + 1, v, sum - i);
					v.pop_back();
				}
				else
					break;
			}
		}
	}
};