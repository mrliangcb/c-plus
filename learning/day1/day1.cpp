//#include<stdio.h>  //c写法
#include<iostream>  //c++写法 .h是旧的写法  最新标准不用.h
using namespace std;


int addArray(int array[], int n);


int main()
{
	printf("结果是:%d\n",0);
	int data[] = {0,1,2,3,4,5,6,7,8,9};
	int size1 = sizeof(data[0]); //0这个数字是多少位
	printf("单个字符的大小:%d", size1);
	int size = sizeof(data) / sizeof(data[0]);//计算出有多少位
	addArray(data, size);//data是传了一个指针地址，而不是传整个数组
	cout << "你好";  //因为用了using namespace std，所以不用std::cout

}

//c语言的写法
int addArray(int array[], int n) //array[]换成*array也是可以的，定义传进来的是一个指针 array[0]表示首地址的value，array[1]下一个地址的value
{
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

//c++版本



