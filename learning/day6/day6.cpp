#include <iostream>
#include <fstream>

using namespace std;

//结构数据

struct a
{
	//里面的变量为成员
	string name;
	char sex;

};

int main()
{
	a example;//实例化
	example.name = "hello";
	//或者a example={"1","1","2"};统一初始化
	a *b = &example;//创建了一个指针指向a型的structure，
	//*b就等价example


}









