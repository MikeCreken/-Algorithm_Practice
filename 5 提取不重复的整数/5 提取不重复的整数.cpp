//题目描述
//输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
//
//输入描述 :
//输入一个int型整数
//
//输出描述 :
//按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

#include <iostream>
#include <set>
#include<string>
using namespace std;

/*
int main()
{
string str;
set<char>s;
while (getline(cin,str))
{
int len = str.length();
for (int i = len - 1; i >= 0; i--)
{
s.insert(str[i]);//这里需要注意了  插入的时候会改变原始的顺序 输出结果将是36789

}

std::set<char>::iterator iter;//
/*for (iter = s.begin(); iter != s.end(); iter++)
{
cout << *iter << endl;
}
for (auto i : s)
{
cout << i << ' ';
}
}
return 1;
}*/

/*#include <map>
int main()
{
string str;
while (getline(cin, str))
{
int len = str.length();
map<char, int>mp;//map默认去重
for (int i = len - 1; i >=0; i--)
{

if (mp[str[i]] == 0)
{
mp.insert(pair<char,int>(str[i],1));
mp[str[i]]++;
}

//cout << mp[str[i]] << endl;

}
std::map<char, int>::iterator it = mp.begin();
for (it; it != mp.end(); ++it)
{
std::cout << it->first << " => " << it->second << '\n';
}

}
return 1;
}*/

//老老实实用数组
int main()
{



	string str;
	while (getline(cin, str))
	{
		int len = str.length();

		int arr[100] = { 0 };

		for (int i = len - 1; i >= 0; i--)
		{
			if (arr[str[i] - '0'] == 0)
			{
				cout << str[i];
				arr[str[i] - '0']++;

}
		}
	}
	return 1;
}



