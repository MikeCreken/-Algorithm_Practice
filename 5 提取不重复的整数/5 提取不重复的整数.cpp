//��Ŀ����
//����һ��int�����������մ���������Ķ�˳�򣬷���һ�������ظ����ֵ��µ�������
//
//�������� :
//����һ��int������
//
//������� :
//���մ���������Ķ�˳�򣬷���һ�������ظ����ֵ��µ�����

#include <iostream>
#include <set>
#include<string>
using namespace std;

/*
int main()
{
string str;
set<char>s;
while (getline(cin,str))
{
int len = str.length();
for (int i = len - 1; i >= 0; i--)
{
s.insert(str[i]);//������Ҫע����  �����ʱ���ı�ԭʼ��˳�� ����������36789

}

std::set<char>::iterator iter;//
/*for (iter = s.begin(); iter != s.end(); iter++)
{
cout << *iter << endl;
}
for (auto i : s)
{
cout << i << ' ';
}
}
return 1;
}*/

/*#include <map>
int main()
{
string str;
while (getline(cin, str))
{
int len = str.length();
map<char, int>mp;//mapĬ��ȥ��
for (int i = len - 1; i >=0; i--)
{

if (mp[str[i]] == 0)
{
mp.insert(pair<char,int>(str[i],1));
mp[str[i]]++;
}

//cout << mp[str[i]] << endl;

}
std::map<char, int>::iterator it = mp.begin();
for (it; it != mp.end(); ++it)
{
std::cout << it->first << " => " << it->second << '\n';
}

}
return 1;
}*/

//����ʵʵ������
int main()
{



	string str;
	while (getline(cin, str))
	{
		int len = str.length();

		int arr[100] = { 0 };

		for (int i = len - 1; i >= 0; i--)
		{
			if (arr[str[i] - '0'] == 0)
			{
				cout << str[i];
				arr[str[i] - '0']++;

}
		}
	}
	return 1;
}



