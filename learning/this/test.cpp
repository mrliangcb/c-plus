#include <iostream>

class Point
{
private:
	int x, y;//ÿ����Ա���е�   ��Ϊ����static��������ģ�  
public:
	Point(int a, int b) :x(a), y(b) {}//���췽����ʼ��
	void update(int a, int b) //��ʵԭ������(Point *this,int a, int b); �ƺ�����python�ຯ����д������һ��������self,
	{//�������õ�thisָ��
	//�����x��ʵԭ������this->x=a��
		x = a;
		y = b;
	}
	void print()
	{
		std::cout << "x="<<x<<" || y=" <<y<< std::endl;
		std::cout << "��ַ:" << this << std::endl; //this��ÿ�������еģ����ص�����
	}
};

int main()
{
	Point point1(1,2);
	point1.print();
}














