/*��Ŀ����
д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������磺
�������� :
����N���ַ�

������� :
������ַ�����ת����ַ���*/


//����һ
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

