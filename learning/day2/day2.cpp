
#include <iostream>
#include <fstream>

using namespace std;

//����1
//���ļ�
//int main()
//{
//	ifstream in;//if��
//	in.open("test.txt");
//	if (!in)
//	{
//		cerr << "���ļ�ʧ��!" << endl;
//		return 0;
//	}
//	char x;
//	while (in >> x)
//	{
//		cout << x;
//	}
//	cout << endl;
//	in.close();
//	return 0;
//}



//����2
//������ļ�
//int main()
//{
//	//ofstream out; //of��ʵ����
//	//out.open("test.txt");
//
//	ofstream out("test.txt"); //���캯�����Զ���Ĭ�ϵķ���
//
//	if (!out)
//	{
//		cerr << "���ļ�ʧ��!" << endl;
//		return 0;
//	}
//	char x;
//	for (int i = 0; i < 10; i++)
//	{
//		out << i;
//	}
//	cout << endl;
//	out.close();
//	return 0;
//}

//��ģʽ
//ios::in��һ���ɶ��ļ�
//ios::out
//ios::binary  ��������ʽ(�����)   �����ı���ʽ�����ֵģ�
//ios::app ׷�ӵ�ĩβ
//ios::in | ios::out ����  ����1000 ��0100=1100������û�г�ͻ
//

//����3
//int main()
//{
//	ofstream out("test.txt", ios::app);//׷�ӵ�ģʽд��
//	if (!out)
//	{
//		cerr << "���ļ�ʧ��!" << endl;
//		return 0;
//	}
//	char x;
//	for (int i = 10; i >0; i--)
//	{
//		out << i;
//	}
//	out << endl;//���зָ���
//	out.close();
//	return 0;
//
//}

//����4
int main()
{

	fstream fp("test.txt", ios::in | ios::out);//׷�ӵ�ģʽд��
	if (!fp)
	{
		cerr << "���ļ�ʧ��!" << endl;
		return 0;
	}
	fp << "iloveliangchengbo"; //fpĬ����ͷλ��

	//�ٶ��ļ�����
	fp.seekg(ios::beg); //�ļ�ָ��ָ���ļ�ͷ   ios::end�ļ�β �͸�׷��appһ����Ч����
	static char str[9];
	fp >> str; //fp����str
	cout << str << endl;

	fp.close();
	return 0;

}








