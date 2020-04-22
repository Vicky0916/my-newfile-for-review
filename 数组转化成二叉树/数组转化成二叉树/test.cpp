#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct Node
{
	int data;
	Node* left;
	Node* right;
}node;
void BuildTree(node* bitTree,int *a,int begin, int end)
{
	if (begin > end)
		return;
	int mid = (begin + end) / 2;
	if (bitTree == NULL)
	{
		bitTree = (Node*)malloc(sizeof(Node));
		bitTree->data = a[mid];
		bitTree->left = NULL;
		bitTree->right = NULL;
	}
	BuildTree(bitTree->left, a, begin, mid - 1);
	BuildTree(bitTree->right, a, mid+1, end);
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	node* bitTree=NULL;
	BuildTree(bitTree, a, 0, 9);
	system("pause");
	return 0;
}