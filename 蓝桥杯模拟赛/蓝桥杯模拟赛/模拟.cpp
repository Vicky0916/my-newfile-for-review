
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
int m, n;
int count = 0;
void find(int a, int i, int jo)
{
	if (jo == 1)
	{
		if (i == m - 1)
			count += a - 1;
	}
}
int main()
{
	cin >> m >> n;
	for (int i = 2; i <= n; i++)
		find(i, 1, 1);
	cout << count % 10000 << endl;
	system("pause");
	return 0;
}
//int x[50], y[50], r[50], res, n;
//bool str[50];
//bool check(int p)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i == p || !str[i])
//			continue;
//		if((x[i]-x[p])*(x[i]-x[p])+
//			return false;
//	}
//	void dfs(int p, int sum)
//	{
//		if (p == n)
//		{
//			ans=max(ans,sum);
//				return ;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (!s[i])
//			{
//				p++;
//				st[i] = true;
//			}
//		}
//	}
//
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> x[i] >> y[i] >> r[i];
//	dfs(0, 0);
//
//	system("pause");
//	return 0;
//}
//序列
//int main()
//{
//	int n, m;
//	cin >> m >> n;  //序列个数和最大序列数
//	for (int i = 1; i < n; i++)
//	{
//
//	}
//
//	system("pause");
//	return 0;
//}
//int store[1005][1005];
//int main() {
//	// n为行数，m列数
//	// r为输出的行，c为输出的列
//	int n, m, r, c;
//	cin >> n >> m >> r >> c;
//	
//	// 所有置为0
//	memset(store, 0, sizeof(store));
//	// 总数
//	int sum = n * m;
//	int row = 0, col = 0, cnt = 1;
//	store[row][col] = 1;
//	while (cnt < sum)
//	{
//		// 向右走，直到走到头或者下一个已经走过
//		while (col + 1 < m && !store[row][col + 1])
//			store[row][++col] = ++cnt;
//		// 向下走，直到走到头或者下一个已经走过
//		while (row + 1 < n && !store[row + 1][col])
//			store[++row][col] = ++cnt;
//		// 向左走，直到走到头或者下一个已经走过
//		while (col - 1 >= 0 && !store[row][col - 1])
//			store[row][--col] = ++cnt;
//		// 向上走，直到走到头或者下一个已经走过
//		while (row - 1 >= 0 && !store[row - 1][col])
//			store[--row][col] = ++cnt;
//	}
//	cout << store[r - 1][c - 1];
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <string>
//using namespace std;
////顺时针打印矩阵
//int main()
//{
//	int n, m, r, c;
//	cin >> n >> m >> r >> c;
//	int store[1005][1005];
//	memset(store, 0, sizeof(store));
//	int sum = n * m;
//	int row = 0, col = 0;
//	int res = 1;
//	store[row][col] = 1;
//	while (res < sum)
//	{
//		while (col + 1 < m && !store[row][col + 1])
//			store[row][++col] = ++res;
//		while (row + 1 < n && !store[row + 1][col])
//			store[++row][col] = ++res;
//		while (col - 1 >= 0 && !store[row][col - 1])
//			store[row][--col] = ++res;
//		while (row - 1 >= 0 && !store[row-1][col])
//			store[--row][col] = ++res;
//	}
//	cout << store[r - 1][c - 1];
//	system("pause");
//	return 0;
//}
//摆动序列
//void Function(int m, int n)
//{
//
//}
//int main()
//{
//	system("pause");
//	return 0;
//}
//char Change(char c)
//{
//	if (int(c) <= 122 && int(c) >= 97)
//		return char(97 + ((int(c) - 97 + 3) % 26));
//	else if (int(c) <= 65 && int(c) >= 90)
//		return char(65 + ((int(c) - 97 + 3) % 26));
//	else
//		return c;
//}
//
//求凯撒密码
//int main()
//{
//	string str;
//	getline(cin, str);
//	int i = 0;
//	for ( i=0; i < str.size(); i++)
//	{
//		str[i] = Change(str[i]);
//	}
//	cout << str << endl;
//	system("pause");
//	return 0;
//}

//1、求反倍数

//int main()
//{
//	int number;
//	int a, b, c;
//	cin >> number >> a >> b >> c;
//	for (int i = 1; i < number; i++)
//	{
//		if ((i%a != 0) && (i%b != 0) && (i%c != 0))
//			cout << i << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}