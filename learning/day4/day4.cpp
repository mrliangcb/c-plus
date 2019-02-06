#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define ITEM 3 //宏定义

//int main()
//{
//	//const unsigned short ITEM = 3; 跟宏定义都是常量，用define比较多
//	int num[ITEM];
//	cout << "输入10个整形:";
//	for (int i = 0; i < ITEM; i++)
//	{
//		cout << "输入第" << i + 1 << "个:";
//		//cin >> num[i];//cin输入错误的时候会返回0
//		while (!(cin >> num[i]))//意外的时候进入，正确就直接给num
//		{
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "重新输入:";
//		}
//	}
//	int total = 0;//局部变量初始化
//	for (int j = 0; j < ITEM; j++)//求和
//	{
//		total += num[j];
//	}
//	cout << total << endl;
//	cout << "平均值:" << (float)total / ITEM;//强制转换为float，float/int=float
//	return 0;
//}


int main()
{
	string str;//可以装字符串
	string str2;
	cout << "输入:";
	cin >> str;//可以把字符串传入，但遇到空格就停止，比如cin拿到了1 2 3 ，第一次赋值被拿掉了1，于是cin剩下了2 3，下一次赋值2给别人
	//可以将cin换成getline(cin,str);这样就会把整一行赋值给str

	cout << str<<endl;
	cin >> str;//str本来装着1的，现在把1删掉，装2 
	cout << str<<endl;
}














