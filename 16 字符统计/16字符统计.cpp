/*��Ŀ����
���ͳ�Ƶĸ�����ͬ������ASCII����С����������� ������������ַ��������Щ�ַ����ý���ͳ�ơ�

ʵ�����½ӿڣ�
����һ���ַ��������ַ��еĸ���Ӣ���ַ������֣��ո����ͳ�ƣ��ɷ������ã�
����ͳ�Ƹ����ɶൽ�����ͳ�ƽ�������ͳ�Ƶĸ�����ͬ������ASII����С�����������
���Ŀǰ��ͳ�ƽ��������ͳ��
�����߻ᱣ֤��
������ַ����ԡ�\0����β��

�������� :
����һ���ַ���

������� :
���ַ��е�
����Ӣ���ַ�����Сд�ֿ�ͳ�ƣ������֣��ո����ͳ�ƣ�������ͳ�Ƹ����ɶൽ�����, ���ͳ�Ƶĸ�����ͬ������ASII����С����������� ������������ַ��������Щ�ַ����ý���ͳ�ơ�

ʾ��1
����
����
aadddccddc
���
����
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
		//��ͳ�������ַ��ĸ���
		for (int i = 0; i < str.size(); i++)
		{
			mp[str[i]]++;
		}
		//��map��Ԫ�� �ɶԴ����vector��
		vector<pair<char, int>>pr(mp.begin(), mp.end());
		//���ո������� ���մӶൽ����� 
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