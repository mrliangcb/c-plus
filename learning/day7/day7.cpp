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
		father(char fish);//���캯����������һ�£�û�����������void  ���캯������������֮����д�����ұ�����û�з���ֵ��
		//ÿ���඼���й����������©�ˣ�ϵͳ����Ҽ���ȥ
		//�빹������Եģ�����������~father
		//
		void fill();
		
};



father::father(char fish)//���췽�����ﲻ�ø��������ͣ���ΪĬ��void��Ҳһ��Ҫvoid
{
	this->fish = fish;//�ұߵ���Ϊ�Ǵ���Ĳ�������ߵ��ǳ�Ա��this����ǣ�������  ��ʱ������thisָ��
	string name = "bo";//���췽��д������
}

void father::fill()//father�������һ������fill  ���������ⶨ���Ա�������ǵ����ﲻҪ�ӷֺţ�������Ҫ
{
	cout << "hello!���ǰְ�"<<num;//��ʵ��������ڶ��嶼һ���ģ����������num�͸����������numһģһ��
}


int main()
{
	father son2('a');
	son2.fill();
	father a[2] = { 'a','b' };//����10������
	cout<<a[0].wheel;

	return 0;
}






