// 出现次数超过数组一半长度
//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//int MoreThanHalfNum_Solution(vector<int> numbers)
//{
//	map<int, int> m;
//	for (auto e : numbers)
//	{
//		m[e]++;
//	}
//	for (int i = 0; i < m.size(); i++)
//	{
//		if (m[i] >= numbers.size() / 2)
//		{
//			return i;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		vector<int> numbers;
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			int num;
//			cin >> num;
//			numbers.push_back(num);
//		}
//		int ret = MoreThanHalfNum_Solution(numbers);
//		cout << ret << endl;
//	}
//	
//	system("pause");
//	return 0;
//
//}
//void MoreThanHalfNum_Solution(vector<int> numbers)
//{
//	int count[100] = { 0 };
//	
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		count[numbers[i]]++;
//	}
//	int size = sizeof(count) / sizeof(count[0]);
//	for (int i = 0; i < size;i++)
//	{
//		if (count[i] > numbers.size() / 2)
//		{
//			cout<<2<<endl;
//				break;
//		}
//		if (i == size)
//		{
//			cout<<0<<endl;
//		}
//	}
//
//}


//int main()
//{
//	while (1)
//	{
//		vector<int> a;
//		int num;
//		int count = 0;
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num;
//			a.push_back(num);
//		}
//		sort(a.begin(), a.end());
//		int mid = a.size() / 2;
//		for (int i = 0; i < a.size(); i++)
//		{
//			if (a[i] == a[mid])
//				count++;
//		}
//		if (count > mid)
//		{
//			cout << 2 << endl;
//		}
//		else
//		{
//			cout << 0 << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}