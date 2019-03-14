#include <iostream>
#include <fstream>

using namespace std;

class father
{
	//structure只有成员没方法
	//class有成员和方法
	
	
	public://作用域
		std::string color;
		float num=100;
		int wheel=1;
		char fish='a';
		father(char fish)//构造函数，跟类名一致，没有输入参数就void  构造函数在声明变量之后再写，而且本来就没有返回值的
		{
			std::cout<<"进入构造函数"<<std::endl;
			this->fish = fish;
			string name = "bo";
		}
		//每个类都会有构造器，如果漏了，系统会帮我加上去
		//与构造器相对的，就是析构器~father
		//
		void fill();
		void fun() const;
		void fun();
		
};



//father::father(char fish)//构造方法这里不用给返回类型，因为默认void，也一定要void
//{
//	this->fish = fish;//右边的认为是传入的参数，左边的是成员用this来标记，重名了  这时候引入this指针
//	string name = "bo";//构造方法写在类外
//}

void father::fill()//father类里面的一个函数fill  可以在类外定义成员函数，记得这里不要加分号，但类内要
{cout << "hello!我是爸爸"<<num;//其实类外和类内定义都一样的，所以这里的num就跟在类里面的num一模一样
}

void father::fun()
{std::cout << "这个是 没有 const的" << std::endl;}

void father::fun() const
{std::cout << "这个是 有 const的" << std::endl;}

int main()
{
	father son2('a');
	son2.fill();
	father a[2] = { 'a','b' };//创建10个对象
	cout<<a[0].wheel;
	son2.fun();
	const father son3('b');
	son3.fun();

	

	return 0;
}






