#ifndef HEADER_H
#define HEADER_H
//��ֹ�ظ�ͷ�ļ���
#include <iostream>
#include <string>

unsigned long returnFactorial(unsigned short num);//unsigned�洢�����ݷ�Χ��,������
unsigned short headerNum = 5;



#include "Rational.h"//ͬĿ¼Ҳ����".\\Rational.h"   ����Ŀ¼��Ҳ���ǵ�ǰĿ¼֮�£��Ļ�"�ļ���\\Ra.h"  
//�ֵ�Ŀ¼�Ļ�"..\\�ļ���\\Ra.h"   windows��\   linux ��/

//�����ռ��ģ�黯
//��������к�������ͬһ��Դ�ļ����棬���ǳ����Ӵ�
//����ǰ���Щ������ɢ������װ�ڲ�ͬ��Դ�ļ�
//ͨ��include���ý���

//ͷ�ļ�һ��������������������
//ϵͳͷ�ļ����Զ���ͷ�ļ�
//include<>����ŵĶ�����ϵͳ·����ʼ��
//��δ�����?
//�����Լ�������ͷ�ļ�������˫���ţ��ȴӱ�Ŀ¼��ʼѰ�ң�include""
//һ�㶼�ǰѳ����ļ�����������cppĿ¼����Ŀ¼��
//ͨ��������ͷ�ļ������֣�������һ��������.h
//ʲô������д���Զ����ͷ�ļ��أ�
//�����������û��Զ����������ݣ��ṹ���࣬ģ���ȫ�ֱ���

using namespace myMath;//�Ƚ���һ����
//��ǰ����ʹ������������� (1)std::cout  (2)using namespace std ������������ 
//(3)using std::cout;  ֻȡ��һ��������������������   std������namespace�Ľ�ɫ��Ҳ��������Ľ�ɫ

Rational::Rational()//��������ͷ�ļ���������������
{
	std::cout << "���뵽Rational��" << std::endl;
}

void Rational::test()
{
	std::cout << "����Rational��ͨ����" << std::endl;
}


int main()
{
	Rational a;
	a.test();
}













#endif //����ͷ��ifndef��һ�Ե�