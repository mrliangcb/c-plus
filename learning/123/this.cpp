#include "header.h"
#include <iostream>

extern unsigned short thatNum ;//从外部取来一个已经定义过的变量(定义的时候就是普通定义，用的时候才用extern)
static bool printMe = false;//that.cpp也有一个printMe，这里用了static，就只与本文有关，static意味着只有内链接
//出了本文，就用不了了，所以不会和that冲突，如果没有static，就会冲突了


int main()
{
	unsigned short thisNum = 10;
	std::cout << thisNum << "等于:" << returnFactorial(thisNum) << std::endl;
	std::cout << thatNum << "等于:" << returnFactorial(thatNum) << std::endl;
	std::cout << headerNum << "等于:" << returnFactorial(headerNum) << std::endl;
	//因为header.h被include进来了，所以相当于把header.h整篇文章，拉到本文章的开头，所以headerNum还算是本文章内的
	//但如果that里面的thatNum加上static，就用不了了，因为原本就专属于that文章，但又没有include进来

	if (printMe)//本文的printMe是false
	{
		std::cout << "在this里面,printMe是true" << std::endl;
	}

	return 0;
}