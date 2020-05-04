#include <iostream>
#include <stdlib.h>
using namespace std;

#define Max_size 100

typedef struct sta
{
	int top;   //ջ��Ԫ��
	int data[Max_size];  
	int size;  //ջ�Ĵ�С
}stack;

	stack InitStack()   //ջ�ĳ�ʼ��
	{
		stack s;
		s.size = Max_size;
		s.top = -1;
		return s;
	}

	//�ж�ջ�Ƿ�Ϊ��
	bool StackEmpty(stack s)
	{
		if (s.top == -1)
		{
			return true;
		}
		else
			return false;
	}
	//�ж�ջ�Ƿ�����
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
			cout << "ջ������������ջ"<<endl;
	    }
		s.top++;
		s.data[s.top] = data;
	}

	void pop(stack* s)
	{
		if (StackEmpty(*s) == true)
		{
			cout << "��ջ�������޷���ջ" << endl;
		}
		else
		{
			int x = (*s).data[(*s).top];
			cout << "��ջԪ��Ϊ��" <<x<< endl;
			(*s).top--;
		}
	}
	
   //����ջ�е�Ԫ��
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
	cout << "��ջԪ��Ϊ��" << endl;
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