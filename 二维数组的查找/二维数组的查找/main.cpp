//1、二维数组中数字的查找
class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int rows = array.size();  //行
		int col = array[0].size();  //列
		int i = rows - 1;
		int j = 0;
		while (i >= 0 && j < col)
		{
			if (target > array[i][j])
				j++;
			else if (target < array[i][j])
				i--;
			else
				return true;
		}
		return false;
	}
};
//字符串替换
class Solution {
public:
	void replaceSpace(char *str, int length)
	{
		string s(str);
		int pos = 0;
		while ((pos = s.find(' ', pos)) > -1)
		{
			s.erase(pos, 1);
			s.insert(pos, "%20");
		}
		auto res = s.c_str();
		strcpy(str, res);
	}
};