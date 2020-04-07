#include <iostream>
#include <stdlib.h>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int n;
	
	while (cin >> n)
	{
		queue<char> q;
		char c;
		for (int i = 0; i < n; i++)
		{
			cin >> c;
			q.push(c);
		}
		stack<char> s;
		for (int j = 0; j < q.size(); j++)
		{
			if (q.front() >= '0'&&q.front() <= '9')
			{
				s.push(q.front());
				q.pop();
			}
			else
			{
				char a = s.top();
				s.pop();
				char b = s.top();
				s.pop();
				char res;
				switch (q.front())
				{
					case '+': res = (a - '0') + (b - '0'); break;
					case '-': res = (a - '0') - (b - '0'); break;
					case '*': res = (a - '0') * (b - '0'); break;
					case '/': res = (a - '0') / (b - '0'); break;
				}
				s.push(res);
				q.pop();
			}
		}
		cout << s.top() << endl;
	 }
	system("pause");
	return 0;
}
