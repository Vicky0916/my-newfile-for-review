

class Solution {
public:    int StrToInt(string str) {
	if (str.empty())            return 0;        int symbol = 1;        if (str[0] == &#39; -&#39;) { symbol = -1;            str[0] = &#39; 0 & #39;; }
	else if (str[0] == &#39; +&#39;) { symbol = 1;            str[0] = &#39; 0 & #39;; }        long long sum = 0;        for (int i = 0; i < str.size(); ++i) {
		if (str[i] < &#39; 0 & #39; || str[i] > &#39; 9 & #39;) { sum = 0;                break; }            sum = sum * 10 + str[i] - &#39; 0 & #39;;//字符串数字乘10才转成数字结果，减去空字符‘0’        }        if(symbol*sum >= -2147483648 && symbol*sum <= 2147483647){ //int [-2^31,2^31-1]            return symbol*sum;        }else{            return 0;        }    }};



		class Solution
		{
		public:
			int StrToInt(string str)
			{
				int flag = 1;
				int res = 0;
				if (str[0] == '+')
				{
					flag = 1;
					str[0] = '0';
				}
				else if (str[0] == '-')
				{
					flag = -1;
					str[0] = '0';
				}
				for (int i = 0; i < str.size(); i++)
				{
					if (str[i]<'0' || str[i]>'9')
					{
						res = 0;
						break;
					}
					res = res * 10 + (str[i] - '0');
				}
				if (flag*res >= -2147483648 && flag*res <= 2147483647)
					return flag * res;
				else
					return 0;
			}
		};