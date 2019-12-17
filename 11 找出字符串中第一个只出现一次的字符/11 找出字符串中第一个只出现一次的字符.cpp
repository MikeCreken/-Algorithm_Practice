#include <iostream>
#include <string>
#include <map>
using namespace std;



int main()
{

	string str;
	while (getline(cin, str))
	{
		int len = str.length();
		map<char, int>mp;
		for (int i = 0; i < len; i++)
		{
			mp[str[i]]++;
		}
		map<char, int>::iterator it = mp.begin();
		int count = 0;
		for (auto c : str){
			++count;
			if (mp[c] == 1){
				std::cout << c << std::endl;
				break;
			}
			//ÕÒÍêÁË
			if (count == len - 1)
				cout << -1 << endl;
		}

	}
	return 0;
}