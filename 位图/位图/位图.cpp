#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
class bitmap 
{
public:
	bitmap(size_t range)  //range表示数的集合大小
	{
		_bit_table.resize((range >> 5) + 1);   //这里表示40亿个数要开多大的空间存储
	}

	void setbit(size_t x)
	{
		size_t index = x >> 5;  //算出x在第几个整型位
		size_t n = x % 32;  //在某个整型位的具体位置

		_bit_table[index] |= (1 << n);   //将该具体位置为1，其他位不变
	}
	void removebit(size_t x)
	{
		size_t index = x >> 5;//算出x在第几个整型位
		size_t n = x % 32; //在某个整型位的具体位置

		_bit_table[index] &=~(1 << n);  //将该位置为0，其余位置为1
	}
	int find(size_t x)
	{
		size_t index = x >> 5;//算出x在第几个整型位
		size_t n = x % 32; //在某个整型位的具体位置

		return _bit_table[index] & (1 << n);   //返回0或者1
	}
private:
	vector<int> _bit_table;
};
int main()
{
	system("pause");
	return 0;
}
