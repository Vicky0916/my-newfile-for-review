#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int QuickSort(int* a, int begin, int end,int k)
{
	if (begin < end)
	{
		int left = begin, right = end;
		int temp = a[left];
		while (left != right)
		{
			while (left<right&&a[right]>=temp)
			{
				right--;
			}
			if (a[right] > temp)
			{
				swap(a[right], a[left]);
			}
			while (left<right&&a[left]<=temp)
			{
				left++;
			}
			if (a[left] > a[right])
			{
				swap(a[right], a[left]);
			}
		}
		a[left] = temp;
		if (k == right - left + 1)
			return a[left];
		else if (k - right - left - 1 > 0)
			return QuickSort(a, begin, right - 1, k - right - left - 1);
		else
			return QuickSort(a, left+1, end, k );
	}
}

int main()
{
	int a[5] = { 1,6,7,4,0 };
	int ret = QuickSort(a, 0, 4, 5);
	cout << ret << endl;
	system("pause");
	return 0;
}