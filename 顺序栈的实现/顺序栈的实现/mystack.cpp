#include <iostream>
#include <stdlib.h>
using namespace std;

#define Max_size 100

typedef struct sta
{
	int top;   //栈顶元素
	int data[Max_size];  
	int size;  //栈的大小
}stack;

	stack InitStack()   //栈的初始化
	{
		stack s;
		s.size = Max_size;
		s.top = -1;
		return s;
	}

	//判断栈是否为空
	bool StackEmpty(stack s)
	{
		if (s.top == -1)
		{
			return true;
		}
		else
			return false;
	}
	//判断栈是否已满
	bool StackFull(stack s)
	{
		if (s.top == Max_size-1)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	void push(stack &s,int data)
	{
		if(StackFull(s)==true)
		{
			cout << "栈已满，不可入栈"<<endl;
	    }
		s.top++;
		s.data[s.top] = data;
	}

	void pop(stack* s)
	{
		if (StackEmpty(*s) == true)
		{
			cout << "空栈！！！无法出栈" << endl;
		}
		else
		{
			int x = (*s).data[(*s).top];
			cout << "出栈元素为：" <<x<< endl;
			(*s).top--;
		}
	}
	
   //遍历栈中的元素
	void display(stack s)
	{
			while (s.top!=-1)
			{
				cout << s.data[s.top] << " ";
				s.top--;
			}
		        cout << endl;
	}

int main()
{
	stack p;
    p=InitStack();
	cout << "入栈元素为：" << endl;
	push(p,1);
	push(p,2);
	push(p,3);
	push(p,4);
	display(p);

	pop(&p);
	display(p);

	system("pause");
	return 0;
}