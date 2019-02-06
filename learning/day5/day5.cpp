#include <iostream>
#include <fstream>

using namespace std;

//整形占4个字节，字符是一个字节,一个地址对应一个字节
//地址+value+变量名
//寻址 &获得地址
//int *p;
//int pp = 123;
//p = &pp;指针p就指向pp变量   *p就获得p的value也就是pp的value     p是地址  *p是value
//int *a=&b; a的value装着b的地址

//int *a=&array[0]
//int *a=array 这两句话是一样的


//想要重载又不想写多几个函数，就是泛型设计
//
int main()
{
	int a[] = {1,2,3};
	int *p = a;
	cout << *(p+1);//这里输出的是2
	return 0;
}



















