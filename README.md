# c++ 学习笔记

## 1.[day1](./learning/day1)
内容：iostream的 cout，自定义函数与声明，数组声明定义  
```
class A:  
{  
int test(){return 1;};  
int test1();  
}  
```
test是在类内部声明而且定义的：内联函数
test1只是在类内声明，在外部定义的（可以在本文类外，也可以在头文件，只要include进来）：


## 2.[day2](./learning/day2)
内容：对文件进行读写，以及几种模式,app追加,in读,out写


## 3.[day3](./learning/day3)
内容：重载的写法，自定义的函数名重复，参数类型不同，但这样要写很多个函数

## 4.[day4](./learning/day4)
内容:输入cin,每取一个cin就少一个,而且str第二次赋值时直接把第一次赋值抹去了

## 5.[day5](./learning/day5)
内容:指针初步，

## 6.[day6](./learning/day6)
内容:指针与结构数据structure，与实例化

## 7.[day7](./learning/day7)
内容:类class,类的public变量与方法，可以类外定义也可以类内定义，但要在类内声明;this指针;构造方法就必须在类外定义，而且不用void
(1)类内只能做初始化操作构造方法
private: int a;
public:
构造方法(int a1): a(a1),b(8.8)    把括号里面的赋值给括号前面的  ，而且构造方法才能初始化，其他不能

(2) `const修饰函数` 常量函数（用于解决同名函数，且参数列表相同的冲突）
类内声明：  
<类型标志符>函数名（参数表）const  
void fun() const;  
void fun();  
类外定义:  
`void father::fun() {定义}`  
`void father::fun() const {定义}`  //const在函数右边，称为常量成员函数，他不会修改类的所有成员（比如只读）


main里建立对象  'const对象才能调用const函数'
const father son3('b');
father son2('a');
调用:son2.fun()调用的是无const的    son3.fun()是有const的   

(3) `const修饰变量` const成员  常量成员    
const+类型+变量名; 
const成员必须用初始化表的形式进行初始化。 
'private:
    int x;
    const int y;'
	


## 8.[day8](./learning/day8)  
内容:  
<1>public与private(public可以访问private,但类外只能访问public，不能访问private);  
<2>static变量，是属于类的，没有static的都是对象独有的  
<3>子类继承了父类class Pig :public Animal，可以son::静态公共方法  也可以father::静态公共方法, 两者等价  
<4>子类的构造方法继承父类构造方法  
<5>子类普通方法继承父类普通方法  
<6>类::属性   对象.属性  
<7>类::静态成员   非静态成员不能通过类访问  
<8>子类覆盖了父类的普通方法
<9>如果子类没有覆盖了父类的方法eat，那对象调用的eat就是父类的eat

 
## 9.[day9](./learning/day9)  
内容:  
<1>定义的函数或者类，放到别的文件（声明）,称为头文件,但还是在主程序定义具体的方法  
<2>""来引入自定义头文件,<>引入系统头文件  
<3>定义namespace与使用  

## 10.[day10](./learning/day10)
<1>main函数在this,  
<2>static的变量，只能在当前页面使用，由于把头文件include进来（相当于合在主程序页面），所以主程序不用声明也可以用  
<3>主程序this的extern的声明 是为了使用另一个CPP源文件中非静态thatNum变量，  
<4>that中的函数建立前需要声明，声明放在了头文件.h，这样避免了如果在that声明，则this又要重复声明，引入.h就可以不用重复声明了   
<5>http://www.cnblogs.com/rollenholt/archive/2012/03/20/2409046.html  
说到头文件  

<6>#ifndef的作用 https://blog.csdn.net/yz_lby/article/details/46458713  
如果#ifndef aa.h为假的话，就直接走到末尾endif   不执行程序正文   
所以这句话的意思：如果还没定义这个aa.h头文件的话，那就这篇文章定义  
  
<7>extern用法  顺序：实际工程->头文件.h->include过这个头文件的cpp  
```
a.h相当于说明书
情景:a,b,c,d.cpp都include "a.h"，因此a,b,c,d都是a.h的小弟  

const int a1=3; 声明定义了全局常量  
extern string b1; 声明了外部的变量，当某人.cpp想用a.h系统下的这个b1值，不用直接看哪个小弟有  
//直接include a.h，直接向大佬要，然后大佬就从小弟里面找b1这个值给某人.cpp  
//注意，自己include了a.h，自己也是a.h的小弟  
//所以说我想用某个模块的b1变量时，只要include相关头文件(包含了有b1的模块的)就行  
extern abc b2; 外部的类声明了一个b2对象 全局的  
```
  
```
工具模块b  
b.cpp  
#include "a.h" //成为了a.h的小弟  
string b1='hello!' //原来是b模块定义了b1  
```
  
```
实际工程  
#include "a.h" //如果我要用模块b的b1,就include b的大佬就行a.h  
cout<<b1<<endl;  
```
  
<8>静态全局变量  
对于文章外部：  
暂时看到静态变量在.h头文件中声明、定义  
主程序也有定义static in a=3，意思是本文用到的a全都是a=3这个量，不看别人定义a是什么  
工具模块cpp中出现的话，就是此模块内用到的a都是指本模块定义的a=3，不管别的文章怎么定义  
注意:include .h， 头文件也会收纳进来cpp作为本文的扩充，所以头文件定义的static a=3也算是本文定义的  

文章内部：  
(1)类内定义static: 如果也是public static 则可以在类外使用 类.变量 或者 对象.变量 都可以访问修改  
	如果是private static ：不但属于类的，而且只能类内、自己用，类外不可访问类.变量，对象更加不可以  
(2)类外全局: 本文范围内都可以用，本文以外不可以  

## 11. ./运行linux文件  
可以运行.cpp 通过cmake出来的可执行文件文件(shall)  

如何将源文件.cpp  cmake 成可执行文件?  
https://blog.csdn.net/zhuquan945/article/details/52788278  
http://zhangyuyu.github.io/2018/06/24/%E8%AE%A4%E8%AF%86Cmake/  
cmake是操作makelist  
https://my.oschina.net/hevakelcj/blog/287782  

## 12. [this指针类似python的self](./learning/this)

## 13.虚方法




