#include <iostream>
#include <stdlib.h>
using namespace std;

void Bubblesort(int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void Selectsort(int *a, int n)  //选择排序  不断选出每一躺中最小的元素
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		temp = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[temp])
			{
				temp = j;
			}
		}
		int ret = a[i];
		a[i] = a[temp];
		a[temp] = ret;
	}
}

void InsertSort(int *a, int n)   //像是打牌一样，不断的前插
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{						//  j      i
			if (a[i] < a[j])   // 7 9   -> 5
			{
				a[j--] = a[i];
			}
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void QuickSort(int* a, int begin,int end)
{
	//4 5 2 1 8 7 3
	if (begin < end)
	{
		int left = begin;
		int right = end;
		int temp = a[left];
		while (left != right)
		{
			while (left < right&&a[right] >= temp)
				right--;
			if (a[right] < temp)
			{
				swap(&a[right], &temp);
			}

			while (left < right&&a[left] <= temp)
				left++;
			if (a[left] > temp)
			{
				swap(&a[left], &temp);
			}
		}
		a[left] = temp;
		QuickSort(a, begin, left - 1);
		QuickSort(a, left + 1, end);
	}
}

void HeapAjustUp(int* a,int i,int n)  //升序需要向上调堆,最后得出的堆是大顶堆
{  //n表示的是堆的大小,i表示开始从i这个位置开始调堆
	int parent = i;
	int child = 2 * i + 1;

	while (child < n)
	{
		if (a[child] < a[child + 1] && child + 1 < n)
			child++;

		if (a[parent] < a[child])
		{
			swap(&a[parent], &a[child]);
			parent = child;
		}
		child = child * 2 + 1;
	}
}

void BuidHeap(int *a,int heapsize)
{
	for (int i = heapsize / 2 - 1; i >= 0; i--)
	{
		HeapAjustUp(a, i, heapsize);
	}
}
void HeapSort(int *a, int heapsize)
{
	BuidHeap(a, heapsize);
	for (int i = heapsize-1; i > 0; i--)
	{
		swap(&a[0], &a[i]);
		HeapAjustUp(a,0,i);
	}

}
void print(int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int a[8] = { 8,7,9,5,4,3,1,6 };
	cout << "原数组为：" << endl;
	print(a, 8);

	cout << "冒泡排序：" << endl;
	Bubblesort(a, 8);
	print(a, 8);

	cout << "选择排序：" << endl;
	Selectsort(a, 8);
	print(a, 8);

	cout << "插入排序：" << endl;
	InsertSort(a, 8);
	print(a, 8);

	cout << "快速排序：" << endl;
	QuickSort(a,0,7);
	print(a, 8);

	cout << "堆排序：" << endl;
	HeapSort(a, 8);
	print(a, 8);

	system("pause");
	return 0;
}