/*
��Ŀ����
����һ��int�͵����������������int���������ڴ��д洢ʱ1�ĸ�����

��������:
����һ��������int���ͣ�

�������:
�����ת����2���ƺ����1�ĸ���
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
		//n &= n - 1;//ÿ�δ���������һ��1
		if (n)
		{
			count++;
		}

	}
	cout << count << endl;
	return 0;
}