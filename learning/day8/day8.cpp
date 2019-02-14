#include <iostream>
#include <string>


//静态方法，每增加一直动物就+1
//析构就是销毁对象
//创建(进来构造方法)或者删除对象才允许访问的计数器 //成员是属于类的，就算创建对象之后，成员也还是类的不是成员的      就是静态成员   前面加上一个static 
//static变量比全局变量好


//公共变量和私有变量：私有是本类可调用，一般外部只可以通过公共方法来调用私有变量
//公共变量是任何人，内外部都能调用,内::方法/变量
//静态和非静态：创建变量时候，非静态变量属于成员所有，比如改变对象a的一个public变量value，但c中的value不受影响
//通过对象a或者对象b，修改static value，则独属于类的static value就修改了。无论从a还是b对象读类的静态value，都是修改后的那个值



class Animal
{
//private:
	static int count;//static的话不论创建多少个对象，变量只有一个;但如果非static的话，就每个对象都有一个独立的变量，
	//private表示类内才能使用

	 //或者类外定义int Animal::count=0;初始化为0，而且是定义的时候初始化，而且只能在类外定义
	//每个对象被创建的时候，都有一个this指针指向本对象
public:
	//static int count;
	std::string Name;
	std::string mouth;
	static int getCount()//公共静态的方法，输出静态成员getCount()
	{return count;}
	Animal(std::string theName)//每当子类继承的时候，都会进来这里
	{
		Name = theName;
		std::cout << "父类构造："<<"动物名字为:"<<Name;//Name是公共成员，外部进来的可以修改
		count++;//因为这里还是在Animal类，所以可以用

	}
	~Animal()//每当子类继承的时候，都会进来这里
		{count--;
		std::cout << Name<<"挂掉了";}
	void eat()
		{std::cout << "父类在吃"<< std::endl;}
	void sleep()
		{std::cout << "动物我在睡觉"<<std::endl;}
};
int Animal::count = 0;//静态变量只能在外面定义，且定义时候初始化



class Pig :public Animal
{
public:
	std::string localName;
	Pig(std::string theName):Animal(theName)//继承构造方法,pig将theName传给Animal的构造方法，像初始化，
		//然后在进入下面自己的构造方法,其实下面可以直接空的{}
	{
		std::cout<<"调用一下父类的普通方法:"<<Animal::Name<<std::endl;
		std::cout << "子类构造" << std::endl;
		std::cout << Name<<std::endl;//这时候名字为abo，父类构造方法吸收的名字
		//Name = "我的名字是猪";//这里又改了名字，最终Name是这里改的
	}
	void eat()//这里定义了个eat，父类也有eat，对象用eat的话，首先检查子类eat，如果有就不用父类的了，相当于屏蔽了父类eat
		//这里子类的eat覆盖掉父类的eat了
		//但还能调用父类eat
	{
		Animal::eat();//父类eat
		std::cout << "子类在吃"<< std::endl;
	}
};

int main()
{
	Pig pig("a");
	Pig pig2("b");
	//pig.climb();
	//pig.eat();//表明pig也有父类的方法
	//std::cout<<pig.Name;
	//std::cout<<Animal::count<<std::endl;//当count放在public的时候，就可以类外访问。放在private就是能类内，这里访问不了
	std::cout << std::endl<< "现在有多少只:" <<Pig::getCount()<<std::endl;//不能用animal::count，因为这里不是类内，不能用private成员，
	//类内的public成员函数可以对private变量做任何操作
	pig.eat();

	std::cout << "程序即将完成，完成了就立马析构所有成员" << std::endl;

	return 0;//这里程序完成之后开始析构毁掉成员，而且后面的成员首先毁掉
}