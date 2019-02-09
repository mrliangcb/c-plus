//rational.h
//create by lcb
//声明了一个Rational类，注意，他的方法也只是声明，这里没有给出具体的方法。给的话出错
//例如test这个方法，这里只能声明，在主程序中再补充具体方法

#include <iostream>

//创建一个namespace

namespace myMath//创建了一个域，如果要调用的话，先用namespace然后再用类和方法
{

	class Rational
	{
	public:

		Rational();
		void test();
		/*{std::cout << "小方法" << std::endl;}*/
	};

}

