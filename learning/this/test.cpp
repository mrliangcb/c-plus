#include <iostream>

class Point
{
private:
	int x, y;//每个成员独有的   因为不是static（属于类的）  
public:
	Point(int a, int b) :x(a), y(b) {}//构造方法初始化
	void update(int a, int b) //其实原生的是(Point *this,int a, int b); 似乎很像python类函数的写法，第一个参数是self,
	{//对象先拿到this指针
	//这里的x其实原生的是this->x=a，
		x = a;
		y = b;
	}
	void print()
	{
		std::cout << "x="<<x<<" || y=" <<y<< std::endl;
		std::cout << "地址:" << this << std::endl; //this是每个对象都有的，隐藏的属性
	}
};

int main()
{
	Point point1(1,2);
	point1.print();
}














