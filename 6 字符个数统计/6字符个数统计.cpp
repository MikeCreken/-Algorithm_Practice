/*题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。

输入描述 :
输入N个字符，字符在ACSII码范围内。

输出描述 :
输出范围在(0~127)字符的个数。
*/


#include <iostream>
#include <string>
#include <set>
using namespace std;


int main()
{
	
	
	string str;
	while (getline(cin, str))
	{
		int count = 0;
		set<char>s;
		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			s.insert(str[i]);
		}
		cout << s.size() << endl;

	}
	return 1;
}