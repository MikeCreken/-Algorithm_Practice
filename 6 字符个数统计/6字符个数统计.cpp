/*��Ŀ����
��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ���ACSII�뷶Χ��(0~127)�����б�ʾ���������������ַ�����ڷ�Χ�ڵĲ���ͳ�ơ�

�������� :
����N���ַ����ַ���ACSII�뷶Χ�ڡ�

������� :
�����Χ��(0~127)�ַ��ĸ�����
*/


#include <iostream>
#include <string>
#include <set>
using namespace std;


int main()
{
	
	
	string str;
	while (getline(cin, str))
	{
		int count = 0;
		set<char>s;
		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			s.insert(str[i]);
		}
		cout << s.size() << endl;

	}
	return 1;
}