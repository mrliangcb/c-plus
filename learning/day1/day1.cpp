//#include<stdio.h>  //cд��
#include<iostream>  //c++д�� .h�Ǿɵ�д��  ���±�׼����.h
using namespace std;


int addArray(int array[], int n);


int main()
{
	printf("�����:%d\n",0);
	int data[] = {0,1,2,3,4,5,6,7,8,9};
	int size1 = sizeof(data[0]); //0��������Ƕ���λ
	printf("�����ַ��Ĵ�С:%d", size1);
	int size = sizeof(data) / sizeof(data[0]);//������ж���λ
	addArray(data, size);//data�Ǵ���һ��ָ���ַ�������Ǵ���������
	cout << "���";  //��Ϊ����using namespace std�����Բ���std::cout

}

//c���Ե�д��
int addArray(int array[], int n) //array[]����*arrayҲ�ǿ��Եģ����崫��������һ��ָ�� array[0]��ʾ�׵�ַ��value��array[1]��һ����ַ��value
{
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

//c++�汾



