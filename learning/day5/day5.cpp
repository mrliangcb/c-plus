#include <iostream>
#include <fstream>

using namespace std;

//����ռ4���ֽڣ��ַ���һ���ֽ�,һ����ַ��Ӧһ���ֽ�
//��ַ+value+������
//Ѱַ &��õ�ַ
//int *p;
//int pp = 123;
//p = &pp;ָ��p��ָ��pp����   *p�ͻ��p��valueҲ����pp��value     p�ǵ�ַ  *p��value
//int *a=&b; a��valueװ��b�ĵ�ַ

//int *a=&array[0]
//int *a=array �����仰��һ����


//��Ҫ�����ֲ���д�༸�����������Ƿ������
//
int main()
{
	int a[] = {1,2,3};
	int *p = a;
	cout << *(p+1);//�����������2
	return 0;
}



















