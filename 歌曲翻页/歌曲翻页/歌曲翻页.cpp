#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//int MP3TurnPages()
//{
//	int n;
//	int now = 4;
//	int point1 = 1;
//	cin >> n;
//	string str;
//	cin >> str;
//	if (n <= 4)
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			switch (str[i])
//			{
//			case 'U':
//				if (point1 == 1)
//				{
//					point1 = 4;
//				}
//				else
//				{
//					point1--;
//				}
//				break;
//			case 'D':
//				if (point1 == 4)
//				{
//					point1 = 1;
//				}
//				else
//				{
//					point1++;
//				}
//				break;
//			}
//		}
//		cout << 1 << " " << 2 << " " << 3 << " " << 4 << endl;
//		cout << point1 << endl;
//	}
//	else  //歌曲数大于4
//	{
//		for (int i = 0; i < str.size(); i++)
//		{
//			switch (str[i])
//			{
//			case 'U':
//				if (point1 = 1)
//				{
//					point1 = n;
//				}
//				else
//				{
//					point1--;
//					now--;
//				}
//				break;
//			case 'D':
//				if (point1 == n)
//				{
//					point1 = 1;
//				}
//				else
//				{
//					point1++;
//					now++;
//				}
//				break;
//			}
//			if (n % 4 == 0)   //歌曲数是4的倍数
//			{
//				if (point1 % 4 == 1)
//					cout << point1 << " " << point1 + 1 << " " << point1 + 2 << " " << point1 + 3 << endl;
//				if (point1 % 4 == 2)
//					cout << point1 - 1 << " " << point1 << " " << point1 + 1 << " " << point1 + 2 << endl;
//				if (point1 % 4 == 3)
//					cout << point1 - 2 << " " << point1 - 1 << " " << point1 << " " << point1 + 1 << endl;
//				if (point1 % 4 == 0)
//					cout << point1 - 3 << " " << point1 - 2 << " " << point1 - 1 << " " << point1 << endl;
//			}
//			else    //歌曲数不是4的倍数
//			{
//				if (now != 0)
//				{
//					if (point1 % 4 == 1)
//						cout << point1 << " " << point1 + 1 << " " << point1 + 2 << " " << point1 + 3 << endl;
//					if (point1 % 4 == 2)
//						cout << point1 - 1 << " " << point1 << " " << point1 + 1 << " " << point1 + 2 << endl;
//					if (point1 % 4 == 3)
//						cout << point1 - 2 << " " << point1 - 1 << " " << point1 << " " << point1 + 1 << endl;
//					if (point1 % 4 == 0)
//						cout << point1 - 3 << " " << point1 - 2 << " " << point1 - 1 << " " << point1 << endl;
//				}
//			}
//		}
//		
//		if()
//	}
//	return point1;
//	cout << point1 << endl;
//}
int main()
{
	//int ret=MP3TurnPages();
	//cout << ret;
#include <iostream>
#include <cstring>
	using namespace std;
	int main() {
		int n;
		string s;
		while (cin >> n >> s) {
			int point = 1;
			int now = 1;
			if (n <= 3) {
				for (int i = 1; i < n; i++) {
					cout << i << " ";
				}
				cout << n << endl;
				for (int i = 0; i < s.length(); i++) {
					if (s[i] == 'U') {
						if (point == 1) {
							point = n;
						}
						else {
							point--;
						}
					}
					else if (s[i] == 'D') {
						if (point == n) {
							point = 1;
						}
						else {
							point++;
						}
					}
				}
				cout << point << endl;
			}
			else {
				for (int i = 0; i < s.length(); i++) {
					if (s[i] == 'U') {
						if (point == 1) {
							point = n;
							now = 4;
						}
						else {
							if (now != 1) {
								point--;
								now--;
							}
							else {
								point--;
							}
						}
					}
					else if (s[i] == 'D') {
						if (point == n) {
							point = 1;
							now = 1;
						}
						else {
							if (now != 4) {
								point++;
								now++;
							}
							else {
								point++;
							}
						}
					}
				}
				switch (now) {
				case 1:cout << point << " " << point + 1 << " " << point + 2 << " " << point + 3 << endl << point << endl; break;
				case 2:cout << point - 1 << " " << point << " " << point + 1 << " " << point + 2 << endl << point << endl; break;
				case 3:cout << point - 2 << " " << point - 1 << " " << point << " " << point + 1 << endl << point << endl; break;
				case 4:cout << point - 3 << " " << point - 2 << " " << point - 1 << " " << point << endl << point << endl; break;
				}
			}
		}
		return 0;
	}
	system("pause");
	return 0;
}