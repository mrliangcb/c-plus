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
	//函数1
	Cumu(std::vector<int> sequence , int offset = 0):_sequence(sequence), _offset(offset)
	{
		std::cout << "获取sequence" << _sequence[_sequence.size() - 1] << std::endl;
	}
	//函数2
	Cumu(int length, int offset = 0) ://传入长度和offset，设置终点，默认0
		_sequence(length),//长度给int型构造，建立一个vector[长度]={全0}
		_offset(offset) {
		std::cout << "传入长度" << _sequence.size()<< std::endl;
		
		for (int i = 0; i < (int)_sequence.size(); i++)
		{
			_sequence[3]++;
			std::cout << _sequence.size() << std::endl;
		}

		for (int i = 0; i < (int)_sequence.size(); i++)
		{
			std::cout << "遍历数组" << _sequence[i] << std::endl;
			
		}
		std::cout << "传入长度" << _sequence[_sequence.size() - 1] << std::endl;
	}
	
	//函数3
	int operator()(int i) const;

	//函数4
	Cumu invert() const
	{
		Cumu inv(_sequence[_sequence.size() - 1]);//传入的是一个数字，序列的末尾，传给构造方法2,_sequence的长度值吸收这个
		//构造函数先把序列长5，给向量的第一位
		inv._offset = 1;
		std::cout<<"父对象"<<(_offset)<<std::endl;
		std::cout <<"子对象的"<<(inv._offset) << std::endl;

		int xx = 0;
		int yy = 0;
		yy = mod(_offset, inv._sequence.size());//const函数内，只能调用外部的cost函数
		std::cout << "计算出取余数" << yy << std::endl;
		for (xx = 0; xx < (int)_sequence.size(); xx++)
		{
			inv._sequence[yy]++;
			yy += _sequence[xx] - (xx > 0 ? _sequence[xx - 1] : 0);
			yy %= inv._sequence.size();
		}



	}
	//函数5
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