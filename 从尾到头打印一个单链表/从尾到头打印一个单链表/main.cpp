//��β��ͷ��ӡ������
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		ListNode *s1 = head;
		vector<int> v;
		stack<int> s;
		while (s1)
		{
			s.push(s1->val);
			s1 = s1->next;
		}
		while (!s.empty())
		{
			v.push_back(s.top());
			s.pop();
		}
		return v;
	}
};

class Solution
{
public:
	void push(int node)  //ջ���Ƚ����   //���У��Ƚ��ȳ�
	{
		stack1.push(node);
	}

	int pop()
	{
		if (stack2.empty())
		{
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
		int ret = stack2.top();
		stack2.pop();
		return ret;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};