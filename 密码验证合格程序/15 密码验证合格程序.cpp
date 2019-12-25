/*题目描述
密码要求 :
1.长度超过8位
2.包括大小写字母.数字.其它符号, 以上四种至少三种

3.不能有相同长度超2的子串重复

说明:长度超过2的子串
输入描述 :
一组或多组长度超过2的子符串。每组占一行

输出描述 :
如果符合要求输出：OK，否则输出NG
示例1
输入
复制
021Abc9000
021Abc9Abc1
021ABC9000
021$bc9000
输出
复制
OK
NG
NG
OK*/


#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;


//长度判断
bool Check_str_lenth(string str)
{
	int len = str.length();
	if (len > 8)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//符号至少三种以上
bool Three_Check(string str)
{
	int num= 0;//数字
	int Big_Zimu = 0;//字母
	int other = 0;//其他字符
	int Small_Zimu = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] > 'a'&&str[i] < 'z')
		{

			Small_Zimu=1;
		}
		else if (str[i] > 'A'&&str[i] < 'Z')
		{
			Big_Zimu = 1;
		}
		else if (str[i] > '0'&&str[i] < '9')
		{
			num = 1;
		}
		else
		{
			other = 1;

		}
	}
	if (Small_Zimu + Big_Zimu + num + other >= 3)
	{
		return true;
	}
	return false;
}

//子串判断 不能有相同长度超2的自串重复
bool Sub_Check(string str)
{
	string extract;
	for (int i = 0; i + 3 < str.size(); ++i){
		extract = str.substr(i, 3);
		if (str.find(extract, i + 3) == -1){      //若在后面的字符串中没有找到，就i+1继续找
		}
		else
			return false;          //否则就是在后面的字符串中找到了
	}
	return true;
}
int main()
{

	string str;
	while (getline(cin, str))
	{
		if (Check_str_lenth(str) && Three_Check(str) && Sub_Check(str))
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << "NG" << endl;
		}
	}
	return 1;
}
