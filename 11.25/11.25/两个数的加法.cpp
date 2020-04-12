#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
void AddLongInteger(string addend, string augend)
{
	int len1 = addend.size();
	int len2 = augend.size();
	int temp = 0;
	int carry = 0;
	/*if (len1 < len2)
	{
		swap(addend, augend);
		swap(len1, len2);
	}*/
	while (len2 < len1)
	{
		augend = "0" + augend;
	}
	while (len1 < len2)
	{
		addend = "0" + addend;
	}
	//int x1 = 0;   //操作数1的每一位
	//int x2 = 0;    //操作数2的每一位
	//int flag = 0;  //进位
	//int cur = 0;   //保存相加后的结果
	//string ret;
	//while (len1 > 0 || len2 > 0)
	//{ 
	//	//将字符串转成数字
	//	if (len1 > 0)
	//	{
	//		x1 = addend[len1] - '0';
	//		len1--;
	//	}
	//	if (len2 > 0)
	//	{
	//		x2 = augend[len2] - '0';
	//		len2--;
	//	}
	//	cur = x1 + x2+flag;
	//	if (cur >= 10)
	//	{
	//		cur -= 10;
	//		flag = 1;
	//	}
	//	ret += cur + '0';
	//}
	//if (flag == 1)
	//{
	//	ret += '1';
	//}
	//reverse(ret.begin(), ret.end());
	//return ret;
	for (int i = addend.size() - 1; i >= 0; i--)
	{
		temp = addend[i] - '0' + augend[i] - '0' + carry;
		addend[i] = temp % 10 + '0';
		if (temp / 10)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		
	}
	if (carry)
	{
		addend = "1" + addend;
	}
	cout << addend << endl;

}
int main()
{
	string m,n;
	while (cin >> m >> n)
	{
		 AddLongInteger(m, n);
	}
	
	system("pause");
	return 0;
}