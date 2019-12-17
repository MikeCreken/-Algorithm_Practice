/*题目描述
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。例如：
输入描述 :
输入N个字符

输出描述 :
输出该字符串反转后的字符串*/


//方法一
#include <iostream>
#include <string>
#include <algorithm>

/*using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		reverse(str.begin(), str.end());
		cout << str;
	}
	
	
	return 1;
}*/

#include<iostream>
#include<stack>
using namespace std;
int main(void)
{
	char ch;
	stack<char> ch_stack;
	while (cin >> ch)
	{
		ch_stack.push(ch);
	}
	while (!ch_stack.empty())
	{
		cout << ch_stack.top();
		ch_stack.pop();
	}
	return 0;
}

