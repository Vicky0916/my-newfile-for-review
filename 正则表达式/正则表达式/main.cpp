class Solution {
public:
	bool match(char* str, char* pattern)
	{
		char *p1 = str;
		char *p2 = pattern;
		if (*str == NULL && *pattern == NULL)
			return true;
		else if (*p1 == NULL && *p2 != NULL)
		{
			p2++;
			if (p2&&*p2 == '*')
			{
				p2++;
				if (*p2 == NULL)
					return true;
				else
					return false;
			}
			return false;
		}

		else if (*p1 == *p2 || *p2 == '.')
		{
			p1++;
			p2++;
			if (*p1 == NULL && *p2 != NULL)
			{

				if (*p2 == '*')
				{
					p2++;
					if (*p2 == NULL)
						return true;
					else
						return false;
				}
			}
			else if (*p1 == NULL && *p2 == NULL)
				return true;
			else if (*p1 != NULL && *p2 != NULL)
			{
				while (*p1&&*p2)
				{
					if ((*p1 == *p2) || (*p2 == '.'))
					{
						char c = *p1;
						p1++;
						p2++;
						while (*p1&&*p2&&*p1 == c && *p2 == '*')
						{
							p1++;
						}
						if (*p1&&*p2&&*p1 != c)
						{
							p1++;
							p2++;
						}
						else if (!(*p1))
						{
							return true;
						}
						else
							return false;
					}
					else if (*p1&&*p2&&*p1 != *p2&&*p2 != '.')
					{
						p2++;
						if (*p2&&*p2 == '*')
						{
							p1++;
							p2++;
						}
						else
							return false;
					}
				}
			}
			if (!p1 && !p2)
				return true;
			else
				return false;
		}
		else
			return false;
	}
};