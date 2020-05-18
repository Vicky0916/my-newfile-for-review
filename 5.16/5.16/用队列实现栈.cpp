#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

class my_stack
{
public:
	
	void push(int x)
	{
		q1.push(x);
	}
	void pop()
	{
		for (int i = 0; i < q1.size(); i++)
		{
			 
		}
	}
	void peek()
	{
		for (int i = 0; i < q1.size(); i++)
		{
			q2.push(q1.front());
			q1.pop();
		}
		q2.front();
	}

private:
	queue<int> q1;
	queue<int> q2;
};
int main()
{
	
	system("pause");
	return 0;
}