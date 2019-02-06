
#include <iostream>
#include <fstream>

using namespace std;

//例子1
//读文件
//int main()
//{
//	ifstream in;//if类
//	in.open("test.txt");
//	if (!in)
//	{
//		cerr << "打开文件失败!" << endl;
//		return 0;
//	}
//	char x;
//	while (in >> x)
//	{
//		cout << x;
//	}
//	cout << endl;
//	in.close();
//	return 0;
//}



//例子2
//输出到文件
//int main()
//{
//	//ofstream out; //of类实例化
//	//out.open("test.txt");
//
//	ofstream out("test.txt"); //构造函数，对对象默认的方法
//
//	if (!out)
//	{
//		cerr << "打开文件失败!" << endl;
//		return 0;
//	}
//	char x;
//	for (int i = 0; i < 10; i++)
//	{
//		out << i;
//	}
//	cout << endl;
//	out.close();
//	return 0;
//}

//打开模式
//ios::in打开一个可读文件
//ios::out
//ios::binary  二进制形式(乱码的)   还有文本形式（文字的）
//ios::app 追加到末尾
//ios::in | ios::out 共用  类似1000 或0100=1100，所以没有冲突
//

//例子3
//int main()
//{
//	ofstream out("test.txt", ios::app);//追加的模式写入
//	if (!out)
//	{
//		cerr << "打开文件失败!" << endl;
//		return 0;
//	}
//	char x;
//	for (int i = 10; i >0; i--)
//	{
//		out << i;
//	}
//	out << endl;//换行分隔符
//	out.close();
//	return 0;
//
//}

//例子4
int main()
{

	fstream fp("test.txt", ios::in | ios::out);//追加的模式写入
	if (!fp)
	{
		cerr << "打开文件失败!" << endl;
		return 0;
	}
	fp << "iloveliangchengbo"; //fp默认在头位置

	//再读文件内容
	fp.seekg(ios::beg); //文件指针指向文件头   ios::end文件尾 就跟追加app一样的效果了
	static char str[9];
	fp >> str; //fp流向str
	cout << str << endl;

	fp.close();
	return 0;

}








