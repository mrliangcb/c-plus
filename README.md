# c-plus

## 1.[day1](./learning/day1)
内容：iostream的 cout，自定义函数与声明，数组声明定义

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


## 8.[day8](./learning/day8)
内容:
<1>public与private(public可以访问private,但类外只能访问public，不能访问private);
<2>static变量，是属于类的，没有static的都是对象独有的
<3>子类继承了父类class Pig :public Animal，可以son::static公共方法  也可以father::static公共方法, 两者等价
 
## 9.[day9](./learning/day9)
内容:
<1>定义的函数或者类，放到别的文件（声明）,称为头文件,但还是在主程序定义具体的方法
<2>""来引入自定义头文件,<>引入系统头文件
<3>定义namespace与使用

## 10.[day10](./learning/day10)
<1>main函数在this,
<2>static的变量，只能在当前页面使用，由于把头文件include进来（相当于合在主程序页面），所以主程序不用声明也可以用
<3>主程序this的extern的声明 是为了使用另一个CPP源文件中非静态thatNum变量，
<4>that中的函数建立前需要声明，声明放在了头文件.h，这样避免了如果在that声明，则this又要重复声明，引入.h就可以不用重复声明了/n
<5>