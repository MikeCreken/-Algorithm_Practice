//����:����һ�������������մ�С�����˳����������������������ӣ���180����������Ϊ2 2 3 3 5 ��
//
//	���һ��������ҲҪ�пո�


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