#include <iostream>
#include <fstream>

using namespace std;

class father
{
	//structureֻ�г�Աû����
	//class�г�Ա�ͷ���
	
	
	public://������
		std::string color;
		float num=100;
		int wheel=1;
		char fish='a';
		father(char fish)//���캯����������һ�£�û�����������void  ���캯������������֮����д�����ұ�����û�з���ֵ��
		{
			std::cout<<"���빹�캯��"<<std::endl;
			this->fish = fish;
			string name = "bo";
		}
		//ÿ���඼���й����������©�ˣ�ϵͳ����Ҽ���ȥ
		//�빹������Եģ�����������~father
		//
		void fill();
		void fun() const;
		void fun();
		
};



//father::father(char fish)//���췽�����ﲻ�ø��������ͣ���ΪĬ��void��Ҳһ��Ҫvoid
//{
//	this->fish = fish;//�ұߵ���Ϊ�Ǵ���Ĳ�������ߵ��ǳ�Ա��this����ǣ�������  ��ʱ������thisָ��
//	string name = "bo";//���췽��д������
//}

void father::fill()//father�������һ������fill  ���������ⶨ���Ա�������ǵ����ﲻҪ�ӷֺţ�������Ҫ
{cout << "hello!���ǰְ�"<<num;//��ʵ��������ڶ��嶼һ���ģ����������num�͸����������numһģһ��
}

void father::fun()
{std::cout << "����� û�� const��" << std::endl;}

void father::fun() const
{std::cout << "����� �� const��" << std::endl;}

int main()
{
	father son2('a');
	son2.fill();
	father a[2] = { 'a','b' };//����10������
	cout<<a[0].wheel;
	son2.fun();
	const father son3('b');
	son3.fun();

	

	return 0;
}






