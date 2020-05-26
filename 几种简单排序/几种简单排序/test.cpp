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

void Selectsort(int *a, int n)  //ѡ������  ����ѡ��ÿһ������С��Ԫ��
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

void InsertSort(int *a, int n)   //���Ǵ���һ�������ϵ�ǰ��
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

void HeapAjustUp(int* a,int i,int n)  //������Ҫ���ϵ���,���ó��Ķ��Ǵ󶥶�
{  //n��ʾ���ǶѵĴ�С,i��ʾ��ʼ��i���λ�ÿ�ʼ����
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
	cout << "ԭ����Ϊ��" << endl;
	print(a, 8);

	cout << "ð������" << endl;
	Bubblesort(a, 8);
	print(a, 8);

	cout << "ѡ������" << endl;
	Selectsort(a, 8);
	print(a, 8);

	cout << "��������" << endl;
	InsertSort(a, 8);
	print(a, 8);

	cout << "��������" << endl;
	QuickSort(a,0,7);
	print(a, 8);

	cout << "������" << endl;
	HeapSort(a, 8);
	print(a, 8);

	system("pause");
	return 0;
}