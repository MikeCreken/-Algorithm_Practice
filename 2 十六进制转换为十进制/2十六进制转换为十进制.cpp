//2AF5�����10����:
//ֱ�Ӽ�����ǣ�5 * 16(0) + F * 16(1) + A * 16(2) + 2 * 16(3)


//c++�Ŀ�

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	while (cin >> hex >> a){
//		cout << a << endl;
//	}
//	return 1;
//}

//c�汾

#include <iostream>
#include<string>
using namespace std;
int main()
{

	char *sp = new char[10];
	while (cin >> sp)
	{
		int n = strlen(sp);
		int res = 0;
		int num;
		for (int i = 2; i < n; i++)
		{
			switch (sp[i])
			{
			case 'A':
				num = 10; break;
			case 'B':
				num = 11; break;
			case 'C':
				num = 12; break;
			case 'D':
				num = 13; break;
			case 'E':
				num = 14; break;
			case 'F':
				num = 15; break;
			default:
				if (sp[i] >= '0'&&sp[i] <= '9')
				{
					num = sp[i] - '0';

				}
				else
				{
					return 0;
				}
				break;
			}
			//2AF5
			res = res * 16 + num;
		}
		cout << res << endl;
		memset(sp, 0, sizeof(sp));
		res = 0;
	}
	return 1;
}