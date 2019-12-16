//题目描述
//写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
//
//输入描述 :
//第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。
//
//输出描述 :
//输出输入字符串中含有该字符的个数。
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str;


	//cin>>str 如果输入为字符串 默认按照空格一个单词一个单词读 比如hello word 那么下面的len就是5和5
	//所以在这里需要改为getline(cin,str);
	while (getline(cin, str))
	{
		char c;
		cin >> c;

		int len = str.length();
		int count = 0;//最后一个单词的计数
		for (int i = len - 1; i > 0; i--)
		{
			// 注意 排除末尾就是空格的情况
			if (str[i] == c)
			{
				++count;;
			}
			

		}
		//printf("字符串%s中包含字符%c\t%d个\n", str,c,count);
		cout << "字符串" << str << "中包含" << c << "有" << count << "个" << endl;
	}


	return 1;
}
