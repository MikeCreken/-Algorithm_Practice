/*��Ŀ����
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy���������ŷź�Ϊ��boy a am I��
���е���֮����һ���ո����������г���Ӣ����ĸ�⣬���ٰ��������ַ�
�������� :
��һ��Ӣ������Ե���Ϊ��λ�����ŷš�

������� :
�õ�����ľ���*/


//������õ���һ����Ŀ�е�cin>>S  ���ᰴ�տո���

#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> s_stack;
	string s;
	while (cin >> s)
	{
		s_stack.push(s);

	}
	while (!s_stack.empty())
	{
		cout << s_stack.top();
		s_stack.pop();
		if (!s_stack.empty())
		{
			cout << " ";
		}
	}
	return 1;
}


