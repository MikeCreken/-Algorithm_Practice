
/*
��Ŀ����
����n���ַ��������n���ַ��������ֵ������С�
��������:
�����һ��Ϊһ��������n(1��n��1000),����n��Ϊn���ַ���(�ַ������ȡ�100),�ַ�����ֻ���д�Сд��ĸ��
�������:
�������n�У�������Ϊ�����ֵ������е��ַ�����
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		string str;
		vector<string> s;
		for (int i = 0; i < n; i++)
		{
			cin >> str;
			s.push_back(str);
		}
		sort(s.begin(), s.end());
		vector<string>::iterator vit;

		for (vit = s.begin(); vit != s.end(); vit++)
		{
			cout << *vit << endl;
		}
	}
}