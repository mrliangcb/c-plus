//  c++ tutorial 
#include<iostream>
#include<wchar.h>
using namespace std;  //名空间： 这条命令之后都生效，std全部函数导入到全局, std::cout直接可以写成cout


int addArray(int array[], int n);  







int main()
{
	//########################################   变量用法   ########################################################
	printf("hello! :%d\n",0); //#c语言写法  数据类型有 %d 
	cout << "hello"<<endl;  //c++写法  因为用了using namespace std，所以不用std::cout   如果没有endl; 则跟下一个cout的输出会连在一起  endl相当于\n
	
	//  #####################################  数组用法    ##########################################################
	int data[] = {0,1,2,3,4,5,6,7,8,9}; //建立int数组
	
	int size1 = sizeof(data[0]); //0这个数字是多少位
	cout<<size1<<endl;
	int size = sizeof(data) / sizeof(data[0]);//计算出有多少位bit
	
	
	
	
	
	//  #####################################  函数用法    ##########################################################
	addArray(data, size);//data是传了一个指针地址，而不是传整个数组
	
	
	
	
}



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
