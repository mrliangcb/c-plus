#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define ITEM 3 //�궨��

//int main()
//{
//	//const unsigned short ITEM = 3; ���궨�嶼�ǳ�������define�Ƚ϶�
//	int num[ITEM];
//	cout << "����10������:";
//	for (int i = 0; i < ITEM; i++)
//	{
//		cout << "�����" << i + 1 << "��:";
//		//cin >> num[i];//cin��������ʱ��᷵��0
//		while (!(cin >> num[i]))//�����ʱ����룬��ȷ��ֱ�Ӹ�num
//		{
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "��������:";
//		}
//	}
//	int total = 0;//�ֲ�������ʼ��
//	for (int j = 0; j < ITEM; j++)//���
//	{
//		total += num[j];
//	}
//	cout << total << endl;
//	cout << "ƽ��ֵ:" << (float)total / ITEM;//ǿ��ת��Ϊfloat��float/int=float
//	return 0;
//}


int main()
{
	string str;//����װ�ַ���
	string str2;
	cout << "����:";
	cin >> str;//���԰��ַ������룬�������ո��ֹͣ������cin�õ���1 2 3 ����һ�θ�ֵ���õ���1������cinʣ����2 3����һ�θ�ֵ2������
	//���Խ�cin����getline(cin,str);�����ͻ����һ�и�ֵ��str

	cout << str<<endl;
	cin >> str;//str����װ��1�ģ����ڰ�1ɾ����װ2 
	cout << str<<endl;
}














