#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;
//int FB(int n)
//{
//	assert(n >= 1);
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//		return (FB(n-1) + FB(n - 2));
//}
//
////int FB2(int n)
////{
////	int a1 = 1, a2 = 1;
////	int a3 = 2;
////	for (int i = 1; i <= n; i++)
////	{
////		a1 = a2;
////		a2 = a3;
////		a3 = a1 + a2;
////	}
////	return a3;
////}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int ret1 = FB(n);
//		//int ret2 = FB(n);
//		cout << ret1 << endl;
//		//cout << ret2 << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

bool is_match(const char* src, const char* input)
{
	//�������������������ߵ���󣬻���(abc* abc)
	if (*src == '\0' && *input == '\0')
		return true;
	if (*src == '*' && *(src + 1) == '\0' && *input == '\0')
		return true;

	if (*src == '\0' || *input == '\0')
		return false;

	//?ƥ��һ��������ƥ����һ��
	if (*src == '?')
	{
		return is_match(src + 1, input + 1);
	}

	//*���Բ�ƥ��(0ƥ��)��ƥ��һ����ƥ����
	//(0ƥ��ƥ���ϾͲ�����1ƥ�䣬1ƥ��ƥ���ϾͲ����ж�ƥ��)
	else if (*src == '*')
	{
		return is_match(src + 1, input)
			|| is_match(src + 1, input + 1)
			|| is_match(src, input + 1);
	}

	else if (*src == *input)
	{
		//�ݹ���һ���ַ�
		return is_match(src + 1, input + 1);
	}

	else
	{
		return false;
	}
}
int main()
{
	char str1, str2;
	cin >> str1;
	cin >> str2;
	char ret=is_match(&str1, &str2);
	cout << ret << endl;
}
