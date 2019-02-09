#ifndef HEADER_H
#define HEADER_H
//防止重复头文件名
#include <iostream>
#include <string>

unsigned long returnFactorial(unsigned short num);//unsigned存储的数据范围大,段整形
unsigned short headerNum = 5;



#include "Rational.h"//同目录也可以".\\Rational.h"   在子目录（也就是当前目录之下）的话"文件夹\\Ra.h"  
//兄弟目录的话"..\\文件夹\\Ra.h"   windows用\   linux 用/

//命名空间和模块化
//如果将所有函数放在同一个源文件里面，则会非常的庞大
//最好是把这些函数分散开来，装在不同的源文件
//通过include引用进来

//头文件一半做函数声明和类声明
//系统头文件和自定义头文件
//include<>里面放的东西，系统路径开始找
//如何创建呢?
//对于自己创建的头文件，则用双引号，先从本目录开始寻找，include""
//一般都是把程序文件放在主程序cpp目录的子目录，
//通常，创建头文件的名字，跟类名一样，类名.h
//什么东西会写入自定义的头文件呢？
//函数声明，用户自定义类型数据，结构和类，模板和全局变量

using namespace myMath;//先进入一个域
//提前声明使用域的三个方法 (1)std::cout  (2)using namespace std 不建议用这种 
//(3)using std::cout;  只取出一个方法，而不是整个类   std可以是namespace的角色，也可以是类的角色

Rational::Rational()//声明是在头文件，定义是在这里
{
	std::cout << "进入到Rational类" << std::endl;
}

void Rational::test()
{
	std::cout << "进入Rational普通方法" << std::endl;
}


int main()
{
	Rational a;
	a.test();
}













#endif //跟开头的ifndef是一对的