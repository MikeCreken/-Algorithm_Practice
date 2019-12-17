/*题目描述
数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

输入描述 :
先输入键值对的个数
然后输入成对的index和value值，以空格隔开

输出描述 :
输出合并后的键值对（多行）*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{


	int Input = 0;
	cin >> Input;
	int index;
	int value;
	map<int, int>mp;
	for (int i = 0; i < Input; i++)
	{
		cin >> index >> value;
		mp[index] += value;
	}
	for (auto iter = mp.begin(); iter != mp.end(); ++iter){
		cout << iter->first << " " << iter->second << endl;
	}
	return 1;
}


