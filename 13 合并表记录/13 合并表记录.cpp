/*��Ŀ����
���ݱ��¼��������������ֵ��int��Χ������������Ա�������ͬ�ļ�¼���кϲ���������ͬ��������ֵ����������㣬�������keyֵ������������

�������� :
�������ֵ�Եĸ���
Ȼ������ɶԵ�index��valueֵ���Կո����

������� :
����ϲ���ļ�ֵ�ԣ����У�*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{


	int Input = 0;
	cin >> Input;
	int index;
	int value;
	map<int, int>mp;
	for (int i = 0; i < Input; i++)
	{
		cin >> index >> value;
		mp[index] += value;
	}
	for (auto iter = mp.begin(); iter != mp.end(); ++iter){
		cout << iter->first << " " << iter->second << endl;
	}
	return 1;
}


