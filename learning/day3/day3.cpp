#include <iostream>
#include <fstream>
using namespace std;
void convertTemperature(double tempin, char typeIn);//
void convertTemperature(int tempin, char typeIn);//��Ȼ����������һ�������Ƕ���Ĳ������Ͳ�ͬ ����������أ������û�������������ǰһ��double�͵ģ�ǿ��ת��Ϊdouble
int main()
{
	double tempIn;
	char typeIn;
	cout << "����:";
	cin >> tempIn >> typeIn;//������������ֵ���м�س��ָ�
	cout << "\n" <<endl;
	convertTemperature(tempIn, typeIn); //����ʵ��
	return 0;
}


void convertTemperature(double tempin, char typeIn)  //�������ܶ�������,tempin��������double���е���python���棬ֱ����һ��������һ����������������������
{
	/*const unsigned short a = 32;
	const double b = 9.0 / 5.0;
	float tempOut;
	char typeOut;*/
	cout << tempin << endl;
	cout << typeIn << endl;
}
void convertTemperature(int tempin, char typeIn)  //
{
	/*const unsigned short a = 32;
	const double b = 9.0 / 5.0;
	float tempOut;
	char typeOut;*/
	cout << tempin << endl;
	cout << typeIn << endl;
}














