/*题目描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
输入描述 :
将一个英文语句以单词为单位逆序排放。

输出描述 :
得到逆序的句子*/


//这里会用到第一个题目中的cin>>S  它会按照空格拆分

#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> s_stack;
	string s;
	while (cin >> s)
	{
		s_stack.push(s);

	}
	while (!s_stack.empty())
	{
		cout << s_stack.top();
		s_stack.pop();
		if (!s_stack.empty())
		{
			cout << " ";
		}
	}
	return 1;
}


