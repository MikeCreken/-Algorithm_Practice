/*��Ŀ����
����һ���򵥴����¼����Сģ�飬�ܹ���¼����Ĵ������ڵ��ļ����ƺ��кš�
����
1�� ��¼���8�������¼��ѭ����¼������ͬ�Ĵ����¼�����ļ����ƺ��к���ȫƥ�䣩ֻ��¼һ��������������ӣ�
2�� ����16���ַ����ļ����ƣ�ֻ��¼�ļ��������Ч16���ַ���
3�� ������ļ����ܴ�·������¼�ļ����Ʋ��ܴ�·����
�������� :
һ�л�����ַ�����ÿ�а�����·���ļ����ƣ��кţ��Կո������
������� :
�����еļ�¼ͳ�Ʋ�������������ʽ���ļ��� �������� ��Ŀ��һ���ո�������磺

���� E : \V1R2\product\fpgadrive.c   1325
��� fpgadrive.c 1325 1*/

////
////#include <iostream>
////#include <string>
////#include <vector>
////#include <sstream>
////#include <algorithm>
////
////using namespace std;
////
////string getFileName(string path){
////	int pos = path.rfind('\\');
////	return path.substr(pos + 1);
////}
////
////string modifyName(string name){
////	if (name.size() > 16){
////		name = name.substr(name.size() - 16);
////	}
////
////	return name;
////}
////
////
////
////
////
////
////struct ErrRecord{
////	string file;//��Ҫ������ļ�û
////	int lineNo;//��Ҫ������к�
////	int count;
////
////	//���Ϊ����
////	ErrRecord(string file, int lineNo){
////		this->file = file;
////		this->lineNo = lineNo;
////		count = 1;
////	}
////
////	bool operator==(const ErrRecord & a){
////		return (file == a.file) && (lineNo == a.lineNo);
////	}
////};
////
////int main(){
////
////	string file;
////	int lineNo;
////	vector<ErrRecord> myvec;
////	while (cin >> file >> lineNo){
////		ErrRecord record(getFileName(file), lineNo);
////		auto res = find(myvec.begin(), myvec.end(), record);
////		if (res == myvec.end()){
////			myvec.push_back(record);
////		}
////		else{
////			res->count++;
////		}
////	}
////
////	int count = 0;
////	for (auto item : myvec){
////		if (count + 8 >= myvec.size()){
////			cout << modifyName(item.file) << " " << item.lineNo << " "
////				<< item.count << endl;
////		}
////		count++;
////	}
////
////
////	return 0;
////}


#include <stdio.h>

int main(int argc, char* argv[])
{ 
	int i = 0;
	int arr[3] = { 0 }; 
	for (; i <= 3; i++)
	{ 
		arr[i] = 0;
		printf("hello world\n"); 
	}   
	return 0; 
}



/*

1 #include <stdio.h>
2 int main(int argc, char* argv[])
3
4 {
5         int i = 0;
6         int a[10];
7         int arr[3] = { 0 };
8         int b[10];
9         for (; i <= 3; i++)
10         {
11
12
13                 a[i] = b[i] = arr[i] = 0;
14                 printf("hello world\n");
15         }
16         return 0;
17 }



*/