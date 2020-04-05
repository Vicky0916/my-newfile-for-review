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
	//出口条件：两个串都走到最后，或者(abc* abc)
	if (*src == '\0' && *input == '\0')
		return true;
	if (*src == '*' && *(src + 1) == '\0' && *input == '\0')
		return true;

	if (*src == '\0' || *input == '\0')
		return false;

	//?匹配一个，继续匹配下一对
	if (*src == '?')
	{
		return is_match(src + 1, input + 1);
	}

	//*可以不匹配(0匹配)，匹配一个，匹配多个
	//(0匹配匹配上就不进行1匹配，1匹配匹配上就不进行多匹配)
	else if (*src == '*')
	{
		return is_match(src + 1, input)
			|| is_match(src + 1, input + 1)
			|| is_match(src, input + 1);
	}

	else if (*src == *input)
	{
		//递归下一对字符
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
