//��Ŀ����
//д��һ�����򣬽���һ������ĸ��������ɵ��ַ�������һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд��
//
//�������� :
//��һ������һ������ĸ�������Լ��ո���ɵ��ַ������ڶ�������һ���ַ���
//
//������� :
//��������ַ����к��и��ַ��ĸ�����
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str;


	//cin>>str �������Ϊ�ַ��� Ĭ�ϰ��տո�һ������һ�����ʶ� ����hello word ��ô�����len����5��5
	//������������Ҫ��Ϊgetline(cin,str);
	while (getline(cin, str))
	{
		char c;
		cin >> c;

		int len = str.length();
		int count = 0;//���һ�����ʵļ���
		for (int i = len - 1; i > 0; i--)
		{
			// ע�� �ų�ĩβ���ǿո�����
			if (str[i] == c)
			{
				++count;;
			}
			

		}
		//printf("�ַ���%s�а����ַ�%c\t%d��\n", str,c,count);
		cout << "�ַ���" << str << "�а���" << c << "��" << count << "��" << endl;
	}


	return 1;
}
