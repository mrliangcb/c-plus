#include <iostream>
#include <fstream>
using namespace std;
void convertTemperature(double tempin, char typeIn);//
void convertTemperature(int tempin, char typeIn);//虽然两个函数名一样，但是定义的参数类型不同 （这就是重载），如果没有这个，则运行前一条double型的，强制转换为double
int main()
{
	double tempIn;
	char typeIn;
	cout << "输入:";
	cin >> tempIn >> typeIn;//连续输入两个值，中间回车分隔
	cout << "\n" <<endl;
	convertTemperature(tempIn, typeIn); //传入实参
	return 0;
}


void convertTemperature(double tempin, char typeIn)  //如果想接受多种类型,tempin不局限于double，有点像python里面，直接用一变量接收一个东西，而不用事先声明
{
	/*const unsigned short a = 32;
	const double b = 9.0 / 5.0;
	float tempOut;
	char typeOut;*/
	cout << tempin << endl;
	cout << typeIn << endl;
}
void convertTemperature(int tempin, char typeIn)  //
{
	/*const unsigned short a = 32;
	const double b = 9.0 / 5.0;
	float tempOut;
	char typeOut;*/
	cout << tempin << endl;
	cout << typeIn << endl;
}














