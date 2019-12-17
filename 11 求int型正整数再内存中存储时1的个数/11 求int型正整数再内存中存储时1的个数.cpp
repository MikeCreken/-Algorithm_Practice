/*
题目描述
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

输入描述:
输入一个整数（int类型）

输出描述:
这个数转换成2进制后，输出1的个数
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "0" << endl;
	}
	int count = 0;
	while (n)
	{
		
		//n = n / 2;
		n = n >> 1;
		//n &= n - 1;//每次从左到右消除一个1
		if (n)
		{
			count++;
		}

	}
	cout << count << endl;
	return 0;
}