#include "header.h"
#include <iostream>

unsigned short thatNum = 8;
bool printMe = true;

unsigned long returnFactorial(unsigned short num)//���ﶨ��һ������
{
	unsigned long sum = 1;
	for (int i = 1; i <= num; i++)
	{
		num *= i;
	}
	if (printMe)//�����true�����˱��ĵ�printMe
	{
		std::cout << "printMe��that����Ϊ��" << std::endl;
		return sum;
	}
	else {
		return 0;
	}
}