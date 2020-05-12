#include  <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
void InsertSort(vector<int> &a)
{
	for (int i = 1; i < a.size(); i++)
	{
		int temp = a[i];
		int j = i - 1;
		for ( j = i - 1; j >= 0; j--)
		{
			if (temp < a[j])
			{
				a[j+1] = a[j];
			}
			else
				break;
		}
		a[j + 1] = temp;
	}
}
void BuBleSort(vector<int> &a)
{
	for (int i = 0; i < a.size()-1; i++)
	{
		for (int j = 0; j < a.size() - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void QuickSort1(vector<int> &a,int begin,int end)  //前后指针法
{
	if (begin < end)
	{
		int left = begin;
		int right = end;
		int key = a[left];
		while (left != right)
		{
			while (left < right&&a[right] >= key)
				right--;
			while (left < right&&a[left] <= key)
				left++;
			swap(a[left], a[right]);
		}
		swap(a[left], a[begin]);
		QuickSort1(a, begin, left - 1);
		QuickSort1(a, left + 1, end);
	}
}

void QuickSort2(vector<int> &a,int begin,int end)  //挖坑法
{
	if (begin < end)
	{
		int left = begin;
		int right = end;
		int key = a[left];
		while (left != right)
		{
			while (left < right&&a[left] < key)
				left++;
			if (left < right)
				a[right] = a[left];
			while (left<right&&a[right]>key)
				right--;
			if (left < right)
				a[left] = a[right];
		}
		a[left] = key;
		QuickSort2(a, begin, left - 1);
		QuickSort2(a, left + 1, right);   //时间复杂度O(n^2)  空间复杂度O(1)
	}
}

void Adjust(vector<int> &a, int pos, int Heapsize)
{
		int parent = pos;
		int child = pos * 2 + 1;
		while (child < Heapsize)
		{
			if (child + 1 < Heapsize&&a[child] < a[child + 1])
				child++;
			if (a[child] > a[parent])
			{
				swap(a[child], a[parent]);
				parent = child;
			}
			child = child * 2 + 1;
		}

	}

void HeapSort(vector<int> &a, int Heapsize)
{ 
	for (int i = Heapsize / 2 - 1; i >= 0; i--)
	{
		Adjust(a, i, Heapsize); //建堆
	}
	for (int i = Heapsize - 1; i > 0; i--)
	{
		swap(a[0], a[i]);
		Adjust(a, 0,i);
	}
	
}

void SelectSort(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		int k = i;
		for (int j = i; j < a.size(); j++)
		{
			if (a[j] < a[k])
			{
				k = j;
			}
		}
		swap(a[k], a[i]);
	}
}
void ShellSort(vector<int> &a)
{
	for (int step = a.size() / 2; step > 0; step /= 2)
	{
		for (int i = step; i < a.size(); i++)
		{
			int j = i;
			int temp = a[j];
			while (j - step >= 0&&a[j-step]>temp)
			{
				a[j] = a[j - step];
				j = j - step;
			}
			a[j] = temp;
		}
	}
}
int main()
{
	while (1)
	{
		vector<int> a;
		int temp = 0;
		for (int i = 0; i < 5; i++)
		{
			cin >> temp;
			a.push_back(temp);
		}
		//ShellSort(a);
		//InsertSort(a);
		//SelectSort(a);
		//BuBleSort(a);
		QuickSort1(a, 0, 4);
		for (int i = 0; i < 5; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		
	}
	system("pause");
	return 0;
}
//void TheSame(vector<int> a, vector<int> b)
//{
//	for (int i = 0; i < a.size(); i++)
//	{
//		for (int j = 0; j < b.size(); j++)
//		{
//			if (a[i] == a[j])
//				cout << a[i] << " ";
//		}
//	}
//}
//int main()
//{
//	
//	system("pause");
//	return 0;
//}