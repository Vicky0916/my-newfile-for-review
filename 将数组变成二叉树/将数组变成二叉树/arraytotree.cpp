//将有序数组创建成一棵二叉树

#include <iostream>
#include<stdlib.h>
#include <malloc.h>
using namespace std;

struct Node
{
	int data;
	Node* _left;
	Node* _right;
}node;

typedef Node* bitree;
void BuildTree(bitree &T, int*a, int begin, int end)
{
	if (begin > end)
		return;
	int mid = (begin + end) / 2;
	if (T == NULL)  //为当前树的根结点申请空间
	{
		T = (Node*)malloc(sizeof(Node));
		T->data = a[mid];
		T->_left = NULL;
		T->_right = NULL;
	}
	BuildTree(T->_left, a, begin, mid - 1);
	BuildTree(T->_right, a, mid+1, end);
}


void travel(bitree T)
{
	if (T != NULL)
	{
		travel(T->_left);
		cout << "中序遍历的跟节点是：" << T->data << " ";
		travel(T->_right);
	}
	cout << endl;

	/*if (T != NULL)
	{
		cout << "先序遍历的跟节点是：" << T->data << " ";
		travel(T->_left);
		travel(T->_right);
	}

	if (T != NULL)
	{
		cout << "后序遍历的跟节点是：" << T->data << " ";
		travel(T->_right);
		travel(T->_left);
	}*/

}

int main()
{
	int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "原数组是：" << endl;
	for (int i=0;i<9;i++)
	{
		cout << a[i]<< " ";
	}
	cout << endl;

	bitree root = NULL;
	int begin = 0; int end = 8;
	BuildTree(root, a, begin, end);
	travel(root);
	system("pause");
	return 0;
}