
//题目描述
//•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
//•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
//输入描述 :
//连续输入字符串(输入2次, 每个字符串长度小于100)
//
//输出描述 :
//	 输出到长度为8的新字符串数组
//#include <string>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string str;
//
//
//	//cin>>str 如果输入为字符串 默认按照空格一个单词一个单词读 比如hello word 那么下面的len就是5和5
//	//所以在这里需要改为getline(cin,str);
//	while (getline(cin, str))
//	{
//		int len = str.length();
//		int Eight_Count = 0;//多少个8的倍数
//		Eight_Count = len / 8;
//		int Eight_Yushu = 0;
//		Eight_Yushu = len % 8;
//		int i = 1;
//		if (Eight_Count >= 1)
//		{
//			int j = 0;
//			while (i <= Eight_Count)
//			{
//				for (j; j <= 7; j++)
//				{
//					cout << str[j];
//				}
//				cout << " ";
//				i++;
//				
//			}
//			if (Eight_Yushu > 0)
//			{
//				for (int i = len-1; i >= Eight_Yushu; i--)
//				{
//					cout << str[i];
//				}
//				for (int i = 0; i < 8 - Eight_Yushu; i++)
//				{
//					cout << "0";
//				}
//			}
//		}
//		
//		
//	}
//
//
//	return 1;
//}


#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;

	while (getline(cin, str)){
		while (str.size() > 8){
			cout << str.substr(0, 8) << endl;
			str = str.substr(8);
		}
		cout << str.append(8 - str.size(), '0') << endl;   //不够8位的补0
	}
		return 1;
}