//void MeregeArray(int* array1,int m, int* array2,int n,int* res)
//{
//	int pos1 = 0, pos2 = 0,pos=0;
//	while (pos1 < m&&pos2 < n)
//	{
//		if (array1[pos1] > array2[pos2])
//			res[pos++] = array2[pos2++];
//		if (array1[pos1] < array2[pos2])
//			res[pos++] = array1[pos1++];
//	}
//	
//	while (pos1 < m)
//		res[pos1++] = array1[pos1++];
//	while (pos2 < n)
//		res[pos2++] = array2[pos2++];
//}

//void MergeArray(int* array,int first,int last,int mid, int* temp)
//{
//	int i = first, j = mid+1;
//	int m = mid, int n = last;
//	int k = 0;
//	while (i <= m && n <= j)
//	{
//		if (array[i] <= array[j])
//			temp[k++] = array[i++];
//		if (array[j] <= array[i])
//			temp[k++] = array[j++];
//	}
//	while (i <= m)
//		temp[k++] = array[i++];
//	while (j <= n)
//		temp[k++] = array[j++];
//}
//void MergeSort(int*array, int first, int last, int* temp)
//{
//	if (first < last)
//	{
//		int mid = (first + last) / 2;
//		MergeSort(array, first, mid, temp);
//		MergeSort(array, mid + 1, last, temp);
//		MergeArray(array, first, last,mid, temp);
//	}
//}



//ListNode dumy = new ListNode(Integer.MIN_VALUE);        
//ListNode cur = head;        
//ListNode pre = dumy;        
//while (cur != null) {            
//	//保存当前节点下一个节点            
//	ListNode next = cur.next;            
//	pre = dumy;            //寻找当前节点正确位置的一个节点           
//	while (pre.next != null && pre.next.val < cur.val) 
//	{                
//		pre = pre.next;            
//	}            //将当前节点加入新链表中            
//	cur.next = pre.next;            
//	pre.next = cur;            //处理下一个节点            
//	cur = next;        
//}        
//return dumy.next;
//
//ListNode* cur = head;
//ListNode* temp = (ListNode*)malloc(sizeof(ListNode) * 100);
//ListNode* prev = temp;
//while (cur != NULL)
//{
//	ListNode* next = cur->next;
//	prev = temp;
//	while (prev->next != NULL && prev->next->val < cur->val)
//	{
//		prev = prev->next;
//	}
//	prev->next = cur->next;
//	prev->next = cur;
//	cur = next;
//}
//return temp;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//	ListNode *insertionSortList(ListNode *head)
//	{
//		ListNode* cur = head;
//		ListNode* temp = new ListNode(100);
//		ListNode* prev = temp;
//		while (cur != NULL)
//		{
//			ListNode* next = cur->next;
//			prev = temp;
//			while (prev->next != NULL && prev->next->val < cur->val)
//			{
//				prev = prev->next;
//			}
//			cur->next = prev->next;
//			prev->next = cur;
//			cur = next;
//		}
//		return temp->next;
//	}
//};

#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	unordered_map<int, int> m;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	vector<int>::reverse_iterator it;
	for (it = v.rbegin(); it != v.rend(); it++)
	{
		m[*it]++;
	}
	v.clear();
	for (auto e : m)
	{
		cout << e.first << " ";
	}
	system("pause");
	return 0;
}