#include <iostream>

/*
题目描述
计算字符串最后一个单词的长度，单词以空格隔开。
输入描述 :
一行字符串，非空，长度小于5000。

输出描述 :
整数N，最后一个单词的长度。
*/
using namespace std;
#include <string>
int main()
{
	string str;
	

	//cin>>str 如果输入为字符串 默认按照空格一个单词一个单词读 比如hello word 那么下面的len就是5和5
	//所以在这里需要改为getline(cin,str);
	while (getline(cin,str))
	{
		//const char* buf = str.c_str();
		//int len = str.size();
		int len = str.length();
		int count = 0;//最后一个单词的计数
		int flag = 1;//代表末尾是空格
		for (int i = len-1; i > 0; i--)
		{
			// 注意 排除末尾就是空格的情况
			if (str[i] == ' '&&flag)
			{
				continue;
			}
			else if (str[i] != ' ')
			{
				flag = 0;
				++count;
			}
			else
			{
				break;
			}
			
		}
		printf("最后一个单词的长度为%d\n", count);
	}
	
	
	return 1;
}


