/*��Ŀ����
��Ŀ����
������

����һ��������������������ַ�������ʽ�������

���򲻿��Ǹ���������������ֺ���0����������ʽҲ����0��������Ϊ100�������Ϊ001


��������:
����һ��int����

�������:
������������ַ�������ʽ�������
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

//����1
/*int main()
{


	string str;
	while (getline(cin, str))
	{
		int count = 0;
		vector<char>s;
		int len = str.length();
		for (int i = 0; i <len ; i++)
		{
			s.push_back(str[i]);
		}

		for (int i = len - 1; i >= 0; i--)
		{
			cout << str[i];
		}
		//cout << s.size() << endl;

	}
	return 1;
}*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string str = to_string(n);
	reverse(str.begin(), str.end());
	cout << str;
	return 0;
}