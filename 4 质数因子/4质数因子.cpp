//功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）
//
//	最后一个数后面也要有空格


#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long n;
	while (cin >> n)
	{
		
		for (int a = 2; a < sqrt(n); a++)
		{
			while (n % a == 0)
			{
				cout << a << ' ';
				n = n / a;
			}
		}
		if (n>1) cout << n << ' ';

	}
	return 1;
}