/*��Ŀ����
����Ҫ�� :
1.���ȳ���8λ
2.������Сд��ĸ.����.��������, ����������������

3.��������ͬ���ȳ�2���Ӵ��ظ�

˵��:���ȳ���2���Ӵ�
�������� :
һ�����鳤�ȳ���2���ӷ�����ÿ��ռһ��

������� :
�������Ҫ�������OK���������NG
ʾ��1
����
����
021Abc9000
021Abc9Abc1
021ABC9000
021$bc9000
���
����
OK
NG
NG
OK*/


#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;


//�����ж�
bool Check_str_lenth(string str)
{
	int len = str.length();
	if (len > 8)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//����������������
bool Three_Check(string str)
{
	int num= 0;//����
	int Big_Zimu = 0;//��ĸ
	int other = 0;//�����ַ�
	int Small_Zimu = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] > 'a'&&str[i] < 'z')
		{

			Small_Zimu=1;
		}
		else if (str[i] > 'A'&&str[i] < 'Z')
		{
			Big_Zimu = 1;
		}
		else if (str[i] > '0'&&str[i] < '9')
		{
			num = 1;
		}
		else
		{
			other = 1;

		}
	}
	if (Small_Zimu + Big_Zimu + num + other >= 3)
	{
		return true;
	}
	return false;
}

//�Ӵ��ж� ��������ͬ���ȳ�2���Դ��ظ�
bool Sub_Check(string str)
{
	string extract;
	for (int i = 0; i + 3 < str.size(); ++i){
		extract = str.substr(i, 3);
		if (str.find(extract, i + 3) == -1){      //���ں�����ַ�����û���ҵ�����i+1������
		}
		else
			return false;          //��������ں�����ַ������ҵ���
	}
	return true;
}
int main()
{

	string str;
	while (getline(cin, str))
	{
		if (Check_str_lenth(str) && Three_Check(str) && Sub_Check(str))
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << "NG" << endl;
		}
	}
	return 1;
}
