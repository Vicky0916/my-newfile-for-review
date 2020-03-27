class PalindromeList {
public:
	ListNode* getMid(ListNode* head)
	{
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast->next&&fast->next->next)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		return slow;
	}
	bool chkPalindrome(ListNode* A)
	{
		ListNode* left = A;
		ListNode* right = getMid(A)->next;
		stack<int> s;
		while (right)
		{
			s.push(right->val);
			right = right->next;
		}
		while (s.empty())
		{
			if (left->val != s.top())
			{
				return false;
			}
			else {
				s.pop();
				left = left->next;
			}
		}
		return true;
	}
};
//回文链表
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A)
	{
		ListNode* p = A;
		stack<int> list;
		while (p)
		{
			list.push(p->val);
			p = p->next;
		}
		p = A;
		while (p)
		{
			if (list.top() != p->val)
			{
				return false;
			}
			else {
				list.pop();
				p = p->next;
			}
		}
		return true;
	}
};


//相交链表

class Solution
{
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
	{
		ListNode* meet = NULL;
		ListNode* A = headA;
		ListNode* B = headB;
		int lenA = 0;
		int lenB = 0;
		while (A&&A->next)
		{
			lenA++;
			A = A->next;
		}
		while (B&&B->next)
		{
			lenB++;
			B = B->next;
		}
		if (A != B)
		{
			return NULL;
		}

		else
		{
			A = headA;
			B = headB;
			if (lenA > lenB)
			{
				int gap = lenA - lenB;
				while (gap--)
				{
					A = A->next;
				}
			}
			else
			{
				int gap = lenB - lenA;
				while (gap--)
				{
					B = B->next;
				}
			}
		}
		while (A&&B)
		{
			if (A == B)
			{
				meet = A;
				break;
			}
			A = A->next;
			B = B->next;
		}
		return meet;
	}
};