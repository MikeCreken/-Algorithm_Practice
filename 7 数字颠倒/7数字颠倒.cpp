/*题目描述
题目描述
描述：

输入一个整数，将这个整数以字符串的形式逆序输出

程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001


输入描述:
输入一个int整数

输出描述:
将这个整数以字符串的形式逆序输出
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

//方法1
/*int main()
{


	string str;
	while (getline(cin, str))
	{
		int count = 0;
		vector<char>s;
		int len = str.length();
		for (int i = 0; i <len ; i++)
		{
			s.push_back(str[i]);
		}

		for (int i = len - 1; i >= 0; i--)
		{
			cout << str[i];
		}
		//cout << s.size() << endl;

	}
	return 1;
}*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string str = to_string(n);
	reverse(str.begin(), str.end());
	cout << str;
	return 0;
}