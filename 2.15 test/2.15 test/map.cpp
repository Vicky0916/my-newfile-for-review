//for (auto str:strs)
//{
//	if (countmap.find(strs[i])&&str!=strs.end())
//	{
//		str[i].second++;
//		++str;
//	}
//	else
//	{
//		countmap.insert(pair<string, int>(strs[i]), 1);
//	}
//}



#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <malloc.h>
using namespace std;
//bool Compare(pair<string, int>&l, pair<string, int>&r)
//{
//	return l.second > r.second;
//}
//
//void test_map1()
//{
//	string strs[] = { "ƻ��","�㽶","�㽶","ƻ��","�㽶","ƻ��","�㽶","�㽶","��ݮ" };
//	map<string, int> countmap;
//	for (auto str : strs)
//	{
//		auto ret = countmap.find(str);
//		if (ret != countmap.end())
//		{
//			ret->second++;
//		}
//		else
//		{
//			countmap.insert(pair<string, int>(str, 1));
//		}
//	}
//}
//
//void test_map2()
//{
//	string strs[] = { "ƻ��","�㽶","�㽶","ƻ��","�㽶","ƻ��","�㽶","�㽶","��ݮ" };
//	map<string, int> countmap;
//	for (auto str : strs)
//	{
//		//pair<map<string, int>::iterator, bool> ret = countmap.insert(pair<string, int>(str, 1));
//		auto ret = countmap.insert(pair<string, int>(str, 1));  //������ʲôˮ�������в���
//		if (ret.second == false)
//		{
//			ret.first->second++;
//		}
//	}
//}
//struct compare
//{
//	bool operater()(const pair<string, int>&l, const pair < string, int)&r)
//	{
//	return l.second > r.second;
//	}
//};
//void test_map3()
//{
//	string strs[] = { "ƻ��","�㽶","�㽶","ƻ��","�㽶","ƻ��","�㽶","�㽶","��ݮ" };
//	map<string, int> countmap;
//	for (auto str : strs)
//	{
//		countmap[str]++;
//	}
//	vector<pair<string, int>> v;
//	for (auto &e : countmap)
//	{
//		v.push_back(e);
//	}
//	sort(v.begin(), b.end(), Compare());
//
//	for (size_t i = 0; i < k; i++)
//	{
//		cout << v[i].first << ":" << v[i].second << endl;
//	}
//}
////����opertator[]����ʵ�鵽�ֲᣬ���ĺ�����������ӵ�
////mapped_type& operator[] (const key_type&k)
////{
////	return (*((this->insert(make_pair(k, mapped_type()))).first)).second;
////}
//
//void GetFavoriteFruit(const vector<string>&fruits,size_t k)
//{
//	//����ͳ�Ƴ�ÿ��ˮ���Ĵ���
//	map<string, int> Count;
//	for (auto & e : fruits)
//	{
//		Count[e]++;
//	}
//	//�ҳ�ǰk�ֳ��ִ�������ˮ��
//	vector<pair<string, int>> v;
//	for (auto & e : fruits)
//	{
//		v.push_back(e);
//	}
//	sort(v.begin(), v.end(), Compare);
//	for (size_t i = 0; i < k; i++)
//	{
//		cout << v[i].first << ":" << v[i].second << endl;
//	}
//
//}
//
////�������ȼ����н��
//void GetFavoriteFruit(const vector<string>&fruits, size_t k)
//{
//	//����ͳ��ÿ��ˮ���Ĵ���
//	map<string, int> countmap;
//	for (auto &e : fruits)
//	{
//		countmap[e]++;
//	}
//
//	priority_queue < pair<string, int>, vector<pair<string, int>, compare>> pq;
//	size_t i = 0;
//	for (auto e : countmap)
//	{
//		if (i < k)
//		{
//			pq.push(e);
//			++i;
//		}
//		else
//		{
//			if (e.second > pq.top().second)
//			{
//				pq.pop();
//				pq.push(e);
//			}
//		}
//	}
//	
//}

//���õ�����
typedef struct node
{
	int data;
	struct node* next;
}node; 

node* creat()  //����һ��������
{
	node* p, *q, *head;
	char ch;  //���뵥����Ľ�����
	head = (node*)malloc(sizeof(node));
	q = head;
	ch = '*';  //�Ƚ��г�ʼ��
	int temp = 0;
	cout << "�����뵥����Ľ�㣬��'?'������" << endl;
	while (ch!='N')
	{
		cin >> temp;
		p=(node*)malloc(sizeof(node));
		p->data = temp;
		q->next = p;
		q = p;
		ch = getchar();
	}
	q->next = NULL;
	return head;
}

//���õ�����
void ReverseLinklist(node* l)
{
	node* p;
	node* q;
	p = l->next;
	l->next = NULL;
	while (p != NULL)
	{
		q = p;
		p = p->next;

		q->next = l->next;
		l->next = q;
	}
}

void prit(node* l)
{
	l = l->next;
	while (l != NULL)
	{
		cout << l->data << "->";
		l = l->next;
	}
	cout << endl;
}

int main()
{
	node *a;
	a = creat();
	cout << "��ӡ���������" << endl;
	prit(a);
	ReverseLinklist(a);
	cout << "���õ�����Ϊ��" << endl;
	prit(a);
	system("pause");
	return 0;
}
