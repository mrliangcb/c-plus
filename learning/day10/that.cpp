#include "header.h"
#include <iostream>

unsigned short thatNum = 8;
bool printMe = true;

unsigned long returnFactorial(unsigned short num)//这里定义一个函数
{
	unsigned long sum = 1;
	for (int i = 1; i <= num; i++)
	{
		num *= i;
	}
	if (printMe)//结果是true，用了本文的printMe
	{
		std::cout << "printMe在that里面为真" << std::endl;
		return sum;
	}
	else {
		return 0;
	}
}