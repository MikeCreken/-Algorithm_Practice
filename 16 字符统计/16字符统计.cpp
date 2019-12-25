/*题目描述
如果统计的个数相同，则按照ASCII码由小到大排序输出 。如果有其他字符，则对这些字符不用进行统计。

实现以下接口：
输入一个字符串，对字符中的各个英文字符，数字，空格进行统计（可反复调用）
按照统计个数由多到少输出统计结果，如果统计的个数相同，则按照ASII码由小到大排序输出
清空目前的统计结果，重新统计
调用者会保证：
输入的字符串以‘\0’结尾。

输入描述 :
输入一串字符。

输出描述 :
对字符中的
各个英文字符（大小写分开统计），数字，空格进行统计，并按照统计个数由多到少输出, 如果统计的个数相同，则按照ASII码由小到大排序输出 。如果有其他字符，则对这些字符不用进行统计。

示例1
输入
复制
aadddccddc
输出
复制
dca*/


#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


bool isBigger(const pair<char, int>&lhs, const pair<char, int> &rhs)
{
	return lhs.second > rhs.second;
}
int main()
{
	string str;
	
	while (getline(cin, str))
	{
		map<char, int>mp;
		//先统计所有字符的个数
		for (int i = 0; i < str.size(); i++)
		{
			mp[str[i]]++;
		}
		//将map中元素 成对存放于vector中
		vector<pair<char, int>>pr(mp.begin(), mp.end());
		//按照个数排序 按照从多到少输出 
		stable_sort(pr.begin(), pr.end(), isBigger);

		int vecsize = pr.size();
		for (int i = 0; i < vecsize; i++)
		{
			cout << pr[i].first;
		}
		cout << endl;
	}
	return 1;
}