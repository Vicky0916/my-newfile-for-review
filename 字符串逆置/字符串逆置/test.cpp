#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//�����������
//void ReverseLinklist(LinkList* l)
//{
//	l->next = NULL;
//	Linklist* s ,cur;
//	//l 1 2 3 4 5
//
//	Linklist *cur = l->next;
//	while (cur)
//	{
//		s = cur;
//		cur = cur->next;
//
//		s->next = l->next;
//		l->next = s;
//	}
//
//}

//�ҳ�һ���������е��Ӽ�
//������������ͼ
vector<int> righView(TreeNode root)
{
	vector<int> res;
	if (root == NULL)
		return res;
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty())
	{
		res.push_back(q.back()->val);
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			//�����Һ��Ӵ���ȥ��q.push()
			TreeNode* p = q.front(); q.pop();
			if (p->left)
			{
				q.push(p->left);
			}
			if (p->right)
			{
				q.push(p->right);
			}
		}
	}
	
	return res;
}
int main()
{
	/*string str;
	char temp;
	cout << "������һ���ַ�����" << endl;
	cin >>str;
	int left = 0;
	int right = str.size()-1;
	while (left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		++left;
		--right;
	}
	cout << "�ַ������ã�" << endl;
	for (int i = 0; i < str.size(); ++i)
	{
		cout << str[i];
	}
	cout << endl;
*/
	/*for (int i = 1; i <=9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i <<"="<< i * j << " ";
		}
		cout << endl;
	}*/
	/*int a[] = { 2,4,6,8,10 };
	int *p, **k;
	p = a;
	k = &p;
	cout << *(p++) << " " << **k;*/
	/*short i = 65537;
	int j = i + 1;
	cout << i << " " << j;*/
	system("pause");
	return 0;
}