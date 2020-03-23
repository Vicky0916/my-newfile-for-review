#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
class bitmap 
{
public:
	bitmap(size_t range)  //range��ʾ���ļ��ϴ�С
	{
		_bit_table.resize((range >> 5) + 1);   //�����ʾ40�ڸ���Ҫ�����Ŀռ�洢
	}

	void setbit(size_t x)
	{
		size_t index = x >> 5;  //���x�ڵڼ�������λ
		size_t n = x % 32;  //��ĳ������λ�ľ���λ��

		_bit_table[index] |= (1 << n);   //���þ���λ��Ϊ1������λ����
	}
	void removebit(size_t x)
	{
		size_t index = x >> 5;//���x�ڵڼ�������λ
		size_t n = x % 32; //��ĳ������λ�ľ���λ��

		_bit_table[index] &=~(1 << n);  //����λ��Ϊ0������λ��Ϊ1
	}
	int find(size_t x)
	{
		size_t index = x >> 5;//���x�ڵڼ�������λ
		size_t n = x % 32; //��ĳ������λ�ľ���λ��

		return _bit_table[index] & (1 << n);   //����0����1
	}
private:
	vector<int> _bit_table;
};
int main()
{
	system("pause");
	return 0;
}
