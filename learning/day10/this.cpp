#include "header.h"
#include <iostream>

extern unsigned short thatNum ;//���ⲿȡ��һ���Ѿ�������ı���(�����ʱ�������ͨ���壬�õ�ʱ�����extern)
static bool printMe = false;//that.cppҲ��һ��printMe����������static����ֻ�뱾���йأ�static��ζ��ֻ��������
//���˱��ģ����ò����ˣ����Բ����that��ͻ�����û��static���ͻ��ͻ��


int main()
{
	unsigned short thisNum = 10;
	std::cout << thisNum << "����:" << returnFactorial(thisNum) << std::endl;
	std::cout << thatNum << "����:" << returnFactorial(thatNum) << std::endl;
	std::cout << headerNum << "����:" << returnFactorial(headerNum) << std::endl;
	//��Ϊheader.h��include�����ˣ������൱�ڰ�header.h��ƪ���£����������µĿ�ͷ������headerNum�����Ǳ������ڵ�
	//�����that�����thatNum����static�����ò����ˣ���Ϊԭ����ר����that���£�����û��include����

	if (printMe)//���ĵ�printMe��false
	{
		std::cout << "��this����,printMe��true" << std::endl;
	}

	return 0;
}