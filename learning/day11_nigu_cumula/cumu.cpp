#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Cumu 
{
private:
	std::vector<int> _sequence;
	int _offset;

public:
	//����1
	Cumu(std::vector<int> sequence , int offset = 0):_sequence(sequence), _offset(offset)
	{
		std::cout << "��ȡsequence" << _sequence[_sequence.size() - 1] << std::endl;
	}
	//����2
	Cumu(int length, int offset = 0) ://���볤�Ⱥ�offset�������յ㣬Ĭ��0
		_sequence(length),//���ȸ�int�͹��죬����һ��vector[����]={ȫ0}
		_offset(offset) {
		std::cout << "���볤��" << _sequence.size()<< std::endl;
		
		for (int i = 0; i < (int)_sequence.size(); i++)
		{
			_sequence[3]++;
			std::cout << _sequence.size() << std::endl;
		}

		for (int i = 0; i < (int)_sequence.size(); i++)
		{
			std::cout << "��������" << _sequence[i] << std::endl;
			
		}
		std::cout << "���볤��" << _sequence[_sequence.size() - 1] << std::endl;
	}
	
	//����3
	int operator()(int i) const;

	//����4
	Cumu invert() const
	{
		Cumu inv(_sequence[_sequence.size() - 1]);//�������һ�����֣����е�ĩβ���������췽��2,_sequence�ĳ���ֵ�������
		//���캯���Ȱ����г�5���������ĵ�һλ
		inv._offset = 1;
		std::cout<<"������"<<(_offset)<<std::endl;
		std::cout <<"�Ӷ����"<<(inv._offset) << std::endl;

		int xx = 0;
		int yy = 0;
		yy = mod(_offset, inv._sequence.size());//const�����ڣ�ֻ�ܵ����ⲿ��cost����
		std::cout << "�����ȡ����" << yy << std::endl;
		for (xx = 0; xx < (int)_sequence.size(); xx++)
		{
			inv._sequence[yy]++;
			yy += _sequence[xx] - (xx > 0 ? _sequence[xx - 1] : 0);
			yy %= inv._sequence.size();
		}



	}
	//����5
	int mod(int a, int b) const {
		return ((a % b) + b) % b;
	}

};




int main()
{
	vector<int> seq2 = {1,2,3,4,5};


	std::cout << seq2.size() << endl;   //
	std::cout << seq2[3] << endl; //
	Cumu ob(10,3);






	return 0;
}