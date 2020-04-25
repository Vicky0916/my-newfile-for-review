#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
void insertSort(int *a, int begin, int end)
{
	for (int i = 1; i < end; i++)
	{
		int temp = a[i];
		int j = i - 1;
		for (; j >= 0; j--)
		{
			if (temp < a[j])
			{
				a[j + 1] = a[j];
			}
			else
				break;
		}
		a[j + 1] = temp;
	}
}
//void HeapAdJust(int *a,int max,int size)
//{
//	int tmp, j;
//	tmp = a[max];
//	for (j = 2 * max; j < size; j++)
//	{
//		if (j < size&&a[j] < a[j + 1])
//			++j;
//		if (j < size&&a[max] > a[j])
//			break;
//		a[max] = a[j];
//		max = j;
//	}
//	a[max] = tmp;
//}
//
//void HeapSort(int *a, int pos, int size)
//{
//	int i;
//	for ((i = size - 1) / 2; i > 0; --i)  //向上调堆
//	{
//		HeapAdJust(a, i, size);
//	}
//	for (int i = size - 1; i > 0; i--)
//	{
//		swap(a[i], a[1]);
//		HeapAdJust(a, i, i-1);
//	}
//}

//挖坑法的快排
void partSort(int* arr, int left, int right)
{
	if (left < right)
	{
		int begin = left;
		int end = right;
		int temp = arr[end];  //三数取中

		while (begin != end)
		{

			while (begin < end&&arr[begin] <= temp)
				begin++;
			if (begin < end)
				arr[end] = arr[begin];  //begin成为新坑 
			while (begin < end&&arr[end] >= temp)
				end--;
			if (begin < end)
				arr[begin] = arr[end];
		}
 		arr[begin] = temp;
		partSort(arr, left, begin-1);
		partSort(arr, begin + 1, right);
	}
	
}
void print(int* a)
{
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int a[6] = { 2,5,1,6,8,0 };
	//insertSort(a, 0, 6);
	//print(a);
	cout << "挖坑法的快速排序:" << endl;
	partSort(a, 0, 5);
	print(a);
	system("pause");
	return 0;
}