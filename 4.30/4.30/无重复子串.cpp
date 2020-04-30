
#include<iostream>
using namespace std;
#include <string>
#include <stdlib.h>
#include <algorithm>
string s; 
int main()
{    
	int vis[256]={0};    
	int l=0,r = -1;//s[l-r]滑动窗口维护该区间    
	int res = 0;   
	cin>>s;    
	int s_size = s.size();    
	while(l<s_size)
	{        
		if(r+1 <s_size && vis[s[r+1]]==0)//下一个结点有没有visit        
		{            
			r++;            
			vis[s[r]]++;        
		}
		else
		{            
			vis[s[l]]--;            
			l++;        
		}        
		res = max(res, r-l+1);   
	}   
	cout<<res; 
	system("pause");
	return 0;
}