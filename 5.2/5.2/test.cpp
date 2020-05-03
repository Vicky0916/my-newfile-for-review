class Solution
{
private:
	vector<string> v;
public:
	vector<string> Permutation(string str)
	{
		permutation(str, 0, str.size() - 1);
		return v;
	}
	bool ISswap(string str, int begin, int end)
	{
		for (int i = begin; i < end; i++)
		{
			if (str[i] == str[end])
				return false;
		}
		return true;
	}
	void permutation(string str, int begin, int end)
	{
		if (begin == end)
		{
			v.push_back(str);
			return;
		}
		else
		{
			for (int i = begin; i <= end; i++)
			{
				if (ISswap(str, begin, i))
				{
					swap(str[begin], str[i]);
					permutation(str, begin + 1, end);
					swap(str[i], str[begin]);
				}
			}
		}
	}
};


class Solution
{
private:
	vector<string> v;
public:
	vector<string> Permutation(string str)
	{
		permutation(str, 0, str.size() - 1);
		sort(v.begin(), v.end());
		return v;
	}
	/*bool ISswap(string str,int begin,int end)
	{
		for(int i=begin;i<end;i++)
		{
			if(str[i]==str[end])
				return false;
		}
		return true;
	}*/
	void permutation(string str, int begin, int end)
	{
		if (begin == end)
		{
			if (find(v.begin(), v.end(), str) == v.end())
			{
				v.push_back(str);
				return;
			}
		}
		else
		{
			for (int i = begin; i <= end; i++)
			{
				//if(ISswap(str,begin,i))
				 //{
				swap(str[begin], str[i]);
				permutation(str, begin + 1, end);
				swap(str[i], str[begin]);
				//}
			}
		}
	}
};