#include <iostream>

/*
��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո������
�������� :
һ���ַ������ǿգ�����С��5000��

������� :
����N�����һ�����ʵĳ��ȡ�
*/
using namespace std;
#include <string>
int main()
{
	string str;
	

	//cin>>str �������Ϊ�ַ��� Ĭ�ϰ��տո�һ������һ�����ʶ� ����hello word ��ô�����len����5��5
	//������������Ҫ��Ϊgetline(cin,str);
	while (getline(cin,str))
	{
		//const char* buf = str.c_str();
		//int len = str.size();
		int len = str.length();
		int count = 0;//���һ�����ʵļ���
		int flag = 1;//����ĩβ�ǿո�
		for (int i = len-1; i > 0; i--)
		{
			// ע�� �ų�ĩβ���ǿո�����
			if (str[i] == ' '&&flag)
			{
				continue;
			}
			else if (str[i] != ' ')
			{
				flag = 0;
				++count;
			}
			else
			{
				break;
			}
			
		}
		printf("���һ�����ʵĳ���Ϊ%d\n", count);
	}
	
	
	return 1;
}


