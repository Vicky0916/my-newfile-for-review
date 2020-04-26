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
//void partSort(int* arr, int left, int right)
//{
//	if (left < right)
//	{
//		int begin = left;
//		int end = right;
//		int temp = arr[end];  //三数取中
//
//		while (begin != end)
//		{
//			while (begin < end&&arr[begin] <= temp)
//				begin++;
//			if (begin < end)
//				arr[end] = arr[begin];  //begin成为新坑 
//			while (begin < end&&arr[end] >= temp)
//				end--;
//			if (begin < end)
//				arr[begin] = arr[end];
//		}
// 		arr[begin] = temp;
//		partSort(arr, left, begin-1);
//		partSort(arr, begin + 1, right);
//	}
//	
//}
////前后指针法
//void PartSort3(int* a, int begin, int end)
//{
//	if (begin <= end)
//	{
//		int temp = a[end];
//		int cur = begin;
//		int prev = begin - 1;
//		while (cur < end)
//		{
//			if (a[cur] < temp&&++prev != cur)
//			{
//				swap(a[cur], a[prev]);
//			}
//			++cur;
//		}
//		prev++;
//		swap(a[cur], a[prev]);
//		PartSort3(a, begin, prev - 1);
//		PartSort3(a, prev+1, end);
//	}
//}
void QuickSort(int* a, int begin, int end)
{
	if (begin < end)
	{
		int left = begin;
		int right = end;
		int temp = a[left];
		while (left != right)
		{
			while (left < right&&a[right] >= temp)
				right--;
			while (left < right&&a[left] <= temp)
				left++;
			swap(a[left], a[right]); 
		}
		swap(a[left], a[begin]);
		QuickSort(a, begin, left-1);
		QuickSort(a, left + 1, end);
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
	int a[6] = { 9,5,7,6,8,0 };
	//insertSort(a, 0, 6);
	//print(a);
	/*cout << "挖坑法的快速排序:" << endl;
	partSort(a, 0, 5);*/
	/*cout << "前后指针法：" << endl;*/
	cout << "左右指针法：" << endl;
	QuickSort(a, 0, 5);

	print(a);
	system("pause");
	return 0;
}