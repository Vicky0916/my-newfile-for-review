//
//#include<iostream>
//using namespace std;
//#include <string>
//#include <stdlib.h>
//#include <algorithm>
//string s; 
//int main()
//{    
//	int vis[256]={0};    
//	int l=0,r = -1;//s[l-r]滑动窗口维护该区间    
//	int res = 0;   
//	cin>>s;    
//	int s_size = s.size();    
//	while(l<s_size)
//	{        
//		if(r+1 <s_size && vis[s[r+1]]==0)//下一个结点有没有visit        
//		{            
//  			r++;            
//			vis[s[r]]++;        
//		}
//		else
//		{            
//			vis[s[l]]--;            
//			l++;        
//		}        
//		res = max(res, r-l+1);   
//	}   
//	cout<<res; 
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include <string>
//#include <stdlib.h>
//#include <algorithm>
//#include <unordered_map>
//int main()
//{
//	string s;
//	cin >> s;
//	unordered_map<int,int> map;
//	int res = 0;
//	int len = s.size();
//	int end = 0, begin = 0;
//	for(int i=0;i<len;i++)
//	{
//		if (map[s[end]])  //找到第二次出现该数字的位置
//		{
//			begin = max(map[s[end]], begin);
//		}
//		map[s[end]] = end + 1;
//		res = max(res, end - begin + 1);
//	}
//	cout << res << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{    
//	string A;    
//	while(cin >> A)
//	{        
//		int size = A.length();        
//		int res = 0;       
//		unordered_map<int, int> map;        
//		for(int start = 0, end = 0; end < size; end++)
//		{            
//			if(map.count(A[end]))
//			{                
//				start = max(start, map[A[end]]);            
//			}            
//			map[A[end]] = end+1;            
// 			res = max(res, end - start + 1);        
//		}        
//		cout << res << endl;    
//	}    
//	return 0;
//}

int main()
{
	
	if (left < right)
	{
		int begin = 0;
		int end = size() - 1;
		int key=a[left]
		while (begin < end)
		{
			if (begin < right&&a[right] < key)
				right--;
			if (begin<right&&a[left] > key)
				left++;
			swap(a[begin], a[end]);
		}
		swap(a[left], a[begin]);
	}
}