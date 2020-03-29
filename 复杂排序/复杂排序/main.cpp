//#include <iostream>
//#include <stdlib.h>
//#include <algorithm>
//using namespace std;
//
//��������

//int main()
//{
//	int a[6] = { 1,5,3,2,4,8 };
//	QuickSort(a,0,5);
//	for (int i = 0; i < 6; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <stdlib.h>
#include <stack>
#include <algorithm>
#include <assert.h>
using namespace std;

void QuickSort(int* a, int begin, int end)
{
	if (begin < end)
	{
		int left = begin;
		int right = end-1;
		int temp = a[left];
		while (left != right)
		{
			while (left < right&&a[right] >= temp)
				right--;
			if (a[right] < temp)
			{
				swap(a[right], a[left]);
			}
	
			while (left < right&&a[left] <= temp)
				left++;
			if (a[left] > temp)
			{
				swap(a[left], a[right]);
			}
		}
		a[left] = temp;
		QuickSort(a, begin, left);
		QuickSort(a, left + 1, end);
	}
}

//ϣ������
void ShellSort(int* array,int length)
{
	for (int gap = length / 2; gap >= 1; gap /= 2)
	{
		for (int k = gap; k < length; k++)  
		{
			int j = k - gap;  //j�Ƿ����Ԫ��
			int ret = array[k];   //ret����gap������
			while (j >= 0 && ret < array[j])
			{
				array[k] = array[j];   //
				k = j;
				j -= gap;
			}
			//˵����retС
			array[j + gap] = ret;
		}
	}
}


void merge1(int* a, int begin, int mid, int end)
{
	int *data = new int[end-begin+1];
	int p1 = begin, p2 = mid + 1, p = 0;
	while (p1 <= mid && p2 <= end)
	{
		if (a[p1] <= a[p2])
		{
			data[p++] = a[p1++];
		}
		else
			data[p++] = a[p2++];
	}

	//���С���ϻ���ʣ�࣬���η���󼯺�β��
	while (p1 <= mid)
	{
		data[p++] = a[p1++];
	}

	//�Ҳ�С���ϻ���ʣ�࣬���η���󼯺�β��
	while (p2 <= end)
	{
		data[p++] = a[p2++];
	}
	int size = sizeof(a) / sizeof(a[0]);
	//���󼯺ϵ�Ԫ��ȫ�������ƻ�ԭ����
	for (int i = 0; i < size; i++)
	{
		a[i+begin] = data[i];
	}
}
void mergeSort(int *a, int begin, int end)
{
	if (begin < end)
	{
		int mid = (begin + end) / 2;
		mergeSort(a, begin, mid - 1);
		mergeSort(a, mid + 1, end);
		merge1(a, begin, mid, end);
	}
}
void prit(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	//int a[9] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int a[6] = { 1,5,3,2,4,8 };
	cout << "ԭ�����ǣ�" << endl;
	prit(a, 6);
	cout << "�ݹ���������" << endl;
	QuickSort(a, 0, 6);
	prit(a, 6);
	cout << "ϣ������Ľ���ǣ�" << endl;
	ShellSort(a, 6);
	prit(a, 6);
	cout << "�鲢����Ľ���ǣ�" << endl;
	mergeSort(a, 0, 5);
	prit(a, 6);
	system("pause");
	return 0;
}

//void QuickSort1(int *a, int left, int right)
//{
//	if (left < right)
//	{
//		int low = left;
//		int high = right;
//		int temp = a[low];
//		while (low != high)
//		{
//			while (low < high&&a[high] >= temp)
//				high--;
//			if (a[high] < temp)
//			{
//				int ret = a[high];
//				a[high] = a[low];
//				a[low] = ret;
//			}
//			while (low < high&&a[low] <= temp)
//				low++;
//			if (a[low] > temp)
//			{
//				int ret = a[high];
//				a[high] = a[low];
//				a[low] = ret;
//			}
//		}
//		a[low] = temp;
//		QuickSort1(a, left, low - 1);
//		QuickSort1(a, low + 1, right);
//	}
//}
