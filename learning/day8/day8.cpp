#include <iostream>
#include <string>


//��̬������ÿ����һֱ�����+1
//�����������ٶ���
//����(�������췽��)����ɾ�������������ʵļ����� //��Ա��������ģ����㴴������֮�󣬳�ԱҲ������Ĳ��ǳ�Ա��      ���Ǿ�̬��Ա   ǰ�����һ��static 
//static������ȫ�ֱ�����


//����������˽�б�����˽���Ǳ���ɵ��ã�һ���ⲿֻ����ͨ����������������˽�б���
//�����������κ��ˣ����ⲿ���ܵ���,��::����/����
//��̬�ͷǾ�̬����������ʱ�򣬷Ǿ�̬�������ڳ�Ա���У�����ı����a��һ��public����value����c�е�value����Ӱ��
//ͨ������a���߶���b���޸�static value������������static value���޸��ˡ����۴�a����b�������ľ�̬value�������޸ĺ���Ǹ�ֵ



class Animal
{
//private:
	static int count;//static ָ����cpp����ʹ�ã�private��ʾ���ڲ���ʹ��

	 //�������ⶨ��int Animal::count=0;��ʼ��Ϊ0�������Ƕ����ʱ���ʼ��������ֻ�������ⶨ��
	//ÿ�����󱻴�����ʱ�򣬶���һ��thisָ��ָ�򱾶���
public:
	//static int count;
	std::string Name;
	std::string mouth;
	static int getCount()//������̬�ķ����������̬��ԱgetCount()
	{return count;}
	Animal(std::string theName)//ÿ������̳е�ʱ�򣬶����������
	{
		Name = theName;
		std::cout << "���๹�죺"<<"��������Ϊ:"<<Name;//Name�ǹ�����Ա���ⲿ�����Ŀ����޸�
		count++;//��Ϊ���ﻹ����Animal�࣬���Կ�����

	}
	~Animal()//ÿ������̳е�ʱ�򣬶����������
		{count--;
		std::cout << Name<<"�ҵ���";}
	void eat()
		{std::cout << "�������ڳ�"<< std::endl;}
	void sleep()
		{std::cout << "��������˯��"<<std::endl;}
};
int Animal::count = 0;//��̬����ֻ�������涨�壬�Ҷ���ʱ���ʼ��



class Pig :public Animal
{
public:
	//std::string Name;
	Pig(std::string theName):Animal(theName)//�̳й��췽��,pig��theName����Animal�Ĺ��췽����Ȼ���ڽ��������Լ��Ĺ��췽��,��ʵ�������ֱ�ӿյ�{}
	{
		std::cout << "���๹��" << std::endl;
		std::cout << Name<<std::endl;//��ʱ������Ϊabo�����๹�췽�����յ�����
		//Name = "�ҵ���������";//�����ָ������֣�����Name������ĵ�
	}
	void climb()
	{
		std::cout << "����������"<< std::endl;
	}
};

int main()
{
	Pig pig("a");
	Pig pig2("b");
	//pig.climb();
	//pig.eat();//����pigҲ�и���ķ���
	//std::cout<<pig.Name;
	//std::cout<<Animal::count<<std::endl;//��count����public��ʱ�򣬾Ϳ���������ʡ�����private���������ڣ�������ʲ���
	std::cout << std::endl<< "�����ж���ֻ:" <<Pig::getCount()<<std::endl;//������animal::count����Ϊ���ﲻ�����ڣ�������private��Ա��
	//���ڵ�public��Ա�������Զ�private�������κβ���
	std::cout << "���򼴽���ɣ�����˾������������г�Ա" << std::endl;

	return 0;//����������֮��ʼ�����ٵ���Ա�����Һ���ĳ�Ա���Ȼٵ�
}