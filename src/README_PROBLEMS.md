
# C++题目汇总

1. C++和C的区别

C语言是面向过程的编程，它最重要的特点是函数，通过main函数来调用各个子函数。程序运行的顺序都是程序员事先决定好的。C++是面向对象的编程，类是它的主要特点，在程序执行过程中，先由主main函数进入，定义一些类，根据需要执行类的成员函数，过程的概念被淡化了（实际上过程还是有的，就是主函数的哪些语句），以类驱动程序运行，类就是对象，所以我们称之为面向对象程序设计。面向对象在分析和解决问题的时候，将涉及到的数据和数据的操作封装在类中，通过类可以创建对象，以事件或消息来驱动对象执行处理。

C语言和C++的最大区别在于它们解决问题的思想方法不一样。C语言主要用于嵌入式领域，驱动开发等与硬件直接打交道的领域， C++可以用于应用层开发，用户界面开发等于操作系统打交道的领域。

C++比C类型检查更为严格。增加了面向对象的机制。增加了泛型编程的机制（Template）。增加了异常处理。增加了运算符重载。增加了标准模板库（STL）。增加了命名空间，避免全局命名冲突。

**C++与C不兼容的地方**

* **变量声明的位置**:C中变量声明和代码是分开的，必须在函数开始处声明；C++中，变量可以在任意处声明，只要保证先声名后使用的原则就可以。
* **struct结构体方面**：用struct定义变量。struct mystruct{ int i;float x;在c中声明struct变量要这么写：struct mystruct a;在C++中前面不用加struct：mystruct a;一种兼容的用法是：typedef struct _mystructint i;float x;} mystruct;然后用mystruct 定义变量。枚举型(enum),联合体类型(union)也是同样。
在C++中，struct结构体支持成员函数的定义，C中不行。另外要注意的是，C++中成员函数的默认访问说明符为public,这一点和类不同，类的默认访问说明符为private.
* **bool类型值**：C++中有bool(或boolean类型);C中可没有这样的bool类型，均为数值类型！需要注意的是真为非零(如：1,5.2,-5,-2等)，假的数值为0。
* **注释的不同**：C中的注释至有一种 /\*......\*/;C++中的注释包含两种/\*......\*/和//。
* **强制数据类型装换**：Ｃ中的强制转化形式为：(类型)变量；
C++中还可以使用:类型(变量)的形式。
* **赋值**：C语言中的赋值只有一中即：=;C++中除了使用=外，还可以使用()。例如：int x(5)；就等于: int x=5;我想这种写法是给C++中对象初始化时初始化属性是对象时使用的，那么对于基本类型也可以使用了。
* **函数**：Ｃ语言中函数没有参数默认值，在C++中函数有参数默认值的概念，注意参数默认值与函数重载的区别。C语言中函数的定义又两种形式，经典形式和标准形式，C++中只支持标准形式。标准形式：int string(int x,float y){......}
经典形式: int string(x,y)int x;float y;{......}
C++的函数必须先声名原型或定义才能使用,因为C++是强数据类型语言,在C语言中,未声名和定义函数之前调用函数是允许的.
* **运算符&和关键字const**：&运算符最基本的含义是取地址，C和Ｃ++中都支持这一语法。但在C++中&还可以表示引用。有了引用的概念后函数调用可以作为左值。例如：int &rtux()......rtux()=5;以上表达式在C++中完全正确，但在C语言中是非法的。const关键字要注意一点不同的就是在C++的类函数中，函数可以声名是可以用const，表示这个函数没有改变类中的任何属性。如：void unchange()const;C不能有这样的生明。
* **extern说明符**：在C语言的某些版本中，可以在程序中多次使用一个全局变量而无需使用extern说明符。但在C++中除定义全局变量外，在其他模块使用应先用extern生明。
* **void指针**：在C语言中void指针可以赋给任何类型的指针，但在C++中，却不行，但可以先进行强制数据类型转换，在赋值。

2. C++ explicit和implicit关键字的作用

*单参数的构造函数尽量声明为explicit，声明必须为显示转换*

C++中的explicit关键字只能用于修饰只有一个参数的类构造函数, 它的作用是表明该构造函数是显示的, 而非隐式的, 跟它相对应的另一个关键字是implicit, 意思是隐藏的,类构造函数默认情况下即声明为implicit(隐式).

3. static关键字的作用

1.static可以用来隐藏函数和变量:当同时编译多个文件时，所有未加static前缀的全局变量和函数都具有全局可见性(使用extern就可以)，利用这一特性可以在不同的文件中定义同名函数和同名变量，而不必担心命名冲突。static可以用作函数和变量的前缀，对于子函数来讲，static的作用仅限于隐藏

2.保持变量内容的持久(static变量的记忆功能和全局生存期)：存储在静态数据的变量会在程序刚开始运行时就完成初始化，也是唯一的一次初始化。共有两种变量存储在静态存储区：全局变量和static变量，只不过和全局变量比起来，static可以控制变量的可见范围。PS:如果作为static局部变量在函数内定义，它的生存期为整个源程序，但是其作用域仍与自动变量相同，智能在定义该变量的函数内使用该变量。退出该函数后，尽管该变量还继续存在，但不能使用它

3.默认初始化为0(static变量):全局变量也具备这一属性，因为全局变量也存储在静态数据区，内存中所有的字节默认值都是0x00,某些时候这一特点可以减少程序员的工作量。再比如要把一个字符数组当字符串来用,但又觉得每次在字符数组末尾加'\0'太麻烦.如果把字符串定义成静态的，就省去了这个麻烦。

4.static的第四个作用：C++中的类成员声明static：在类中声明static变量或者函数时，初始化时使用作用域运算符来标明它所属类。因此，静态数据成员是类的成员，而不是对象的成员。(1)类的静态成员函数是属于整个类而非类的对象，所以没有this指针，导致仅能访问类的静态数据和静态成员函数;(2)不能将静态成员函数定义为虚函数;(3)由于静态成员声明于类，操作于其外，所以对其取地址操作，就多少有些特殊，变量地址是指向其数据类型的指针，函数地址类型是一个"nonmember函数指针"；(4)由于静态成员函数没有this指针，所以就差不多等同于nonmember函数,就产生一个意想不到的好处：成为一个callback函数,(5)static并没有增加程序的时空开销，相反还缩短了子类对父类静态成员的访问时间，节省了子类的内存空间;(6)静态数据成员在<定义或说明>时前面加关键字static;(7)静态数据成员是静态存储的，所以必须对它进行*初始化*;(8)静态成员初始化与一般数据化不同,初始化在类体外进行:**\<数据类型\>\<类名\>::\<静态数据成员名\>=\<值\>**;(9)为了防止父类的影响，可以在子类定义一个与父类相同的静态变量，以屏蔽父类的影响.

4. 数组和指针的区别

通常情况下，C++中指针和数组是可以混用的，但是，在编写字符数组的时候，可能会出现一定问题

* 数组一旦声明，我们就不能再给它赋值，但是我们可以给指针赋值

* 用指针定义字符串时，指针所指的字符串会被理解为常量字符串，不能修改。数组定义的字符串则可以修改。

* 用sizeof运算符可以计算数组变量的数组大小，但指针指向数组时，只能计算出指针本身大小（单位：字节）

* 字符串的结束符'\0'也被sizeof计算在内，因此字符串类型比内容长1


```c++
class CxString  // 使用关键字explicit的类声明, 显示转换  
{  
public:  
    char *_pstr;  
    int _size;  
    explicit CxString(int size)  
    {  
        _size = size;  
        // 代码同上, 省略...  
    }  
    CxString(const char *p)  
    {  
        // 代码同上, 省略...  
    }  
};  
  
    // 下面是调用:  
  
    CxString string1(24);     // 这样是OK的  
    CxString string2 = 10;    // 这样是不行的, 因为explicit关键字取消了隐式转换  
    CxString string3;         // 这样是不行的, 因为没有默认构造函数  
    CxString string4("aaaa"); // 这样是OK的  
    CxString string5 = "bbb"; // 这样也是OK的, 调用的是CxString(const char *p)  
    CxString string6 = 'c';   // 这样是不行的, 其实调用的是CxString(int size), 且size等于'c'的ascii码, 但explicit关键字取消了隐式转换  
    string1 = 2;              // 这样也是不行的, 因为取消了隐式转换  
    string2 = 3;              // 这样也是不行的, 因为取消了隐式转换  
    string3 = string1;        // 这样也是不行的, 因为取消了隐式转换, 除非类实现操作符"="的重载
```

上面也已经说过了, explicit关键字只对有一个参数的类构造函数有效, 如果类构造函数参数大于或等于两个时, 是不会产生隐式转换的, 所以explicit关键字也就无效了. 例如: 

explicit关键字只需用于类内的单参数构造函数前面。由于无参数的构造函数和多参数的构造函数总是显示调用，这种情况在构造函数前加explicit无意义。

google的c++规范中提到explicit的优点是可以避免不合时宜的类型变换，缺点无。所以google约定所有单参数的构造函数都必须是显示的，只有极少数情况下拷贝构造函数可以不声明称explicit。例如作为其他类的透明包装器的类。
　　effective c++中说：被声明为explicit的构造函数通常比其non-explicit兄弟更受欢迎。因为它们禁止编译器执行非预期（往往也不被期望）的类型转换。除非我有一个好理由允许构造函数被用于隐式类型转换，否则我会把它声明为explicit，鼓励大家遵循相同的政策。

5. 野指针

* 指针变量没有被初始化。任何指针变量刚被创建时不会自动成为NULL指针，它的缺省值是随机的，它会乱指一气。所以，指针变量在创建的同时应当被初始化，要么将指针设置为NULL，要么让它指向合法的内存。
```c++
char *p; //此时p为野指针
```
* 指针p被free或者delete之后，没有置为NULL，让人误以为p是个合法的指针.
```c++
char *p = new char[10];  //指向堆中分配的内存首地址，p存储在栈区
cin >> p;
delete [] p; //p重新变为野指针
```
* 指针操作超越了变量的作用范围。
```c++
char *p = new char[10]; //指向堆中分配的内存首地址
cin >> p;
cout << *(p+10); //可能输出未知数据
```
*c形式的字符串内存泄露*
```c++
#include<iostream>
using namespace std;
void main()
{
    char *p=new char[3];  //分配三个字符空间，p指向该内存空间
    p="ab";             //此时p指向常量“ab”,而不再是new char分配的内存空间了，从而造成了资源泄漏
    delete []p;         //释放时报错
}
```
*改进版本*：
```c++
#include<iostream>
using namespace std;
void main()
{
    char *p=new char[3];  //分配三个字符空间，p指向该内存空间
    strcpy(p,"ab");      //将"ab"存储到p指向的内存空间
    delete []p;         //ok
}
```
* 内存越界
```c++
char *p=new char[3];  //分配三个字符空间，p指向该内存空间
strcpy(p,"abcd");    //将abcd存处在分配的内存空间中，由于strlen("abcd")=4>3，越界
delete []p;         //ok
```
* 返回值是指针：可以使用常量字符串和静态数组将字符串存到静态存储区和文字常量区
```c++
#include<iostream>
using namespace std;
char *f()
{
    char p[]="abc";
    return p;
}
void main()
{
    cout<<f()<<endl;
}
```
* 指针做形参：所谓的地址传递，我们都知道地址传递的方式，形参的改变会导致实参的改变，但要注意的是，这里的改变是指指针所指内容的改变，而不是指针值的改变。因此，当形参改变会导致实参改变时，指针所指的内容是非const类型的，否则会出错。

*注意：p="ab"和strcpy(p,"ab")，含义不一样，前者指针p指向常量“ab”存储区域的首地址，改变了p最开始指向的new申请的内存空间；而后者是将“ab”分配到new申请的内存空间中；*

6. 智能指针的内存泄露问题

即将基本类型指针封装为类对象指针，并在析构函数里编写delete语句删除指针所指向的内存空间。智能指针就是行为类似指针的栈对象，并非指针类型。智能指针不是指针类型，是个栈对象。

当两个对象相互使用一个shared_ptr成员变量指向对方，会造成循环引用，使引用计数失效，从而导致内存泄漏。可以通过weak_ptr解决

```c++
#include<iostream>
#include<cstdlib>
#include<boost/shared_ptr.hpp>

using namespace std;

struct Node
{

    ~Node()
    {
        cout << "析构函数" << endl;
    }
    int data;
    boost::shared_ptr<Node> next;
    boost::shared_ptr<Node> prev;
};

void test1()
{
    boost::shared_ptr<Node > sp1(new Node);
    boost::shared_ptr<Node > sp2(new Node);
    sp1->next = sp2;
    sp2->prev = sp1;
}

int main()
{
    test1();
    system("pause");
    return 0;
}
```

7. C/C++ 中 右引用，左引用和指针的区别

指针是指向一块内存地址的变量，这个变量可以指向其他地址；引用是一个变量的别名，只能是一个变量的别名。一个变量的引用可以转为指向它的指针。

*指针和引用的不同*

* 初始化不同，引用使用时必须初始化，且只能指向一个变量，初始化不能指向其他变量；指针不一样，指针使用时不必初始化，可以指向nullptr,初始化后仍可以改变指向的地址。
* 作为函数参数传递时，引用不需要内存拷贝，所以也就不需要申请内存，因此当函数参数传递时，很多时候使用&或者const&传递参数节省内存。
* .作为函数参数传递时，如果想改变传递进函数参数的原始变量的值，引用改变后改变原始变量，而指针的值改变后并不会改变原始变量，因为它只是一份内存副本，如果想达到改变的效果，使用**。
* 引用的++ 是变量本事的运算，而指针的++,是内存地址的++。
* 如果返回动态内存分配的对象或者内存，必须使用指针，引用可能引起内存泄漏。
* 不要返回局部变量引用，返回对象的引用最好const变量。
* 操作符<< 和 >> =返回引用，而操作符+-/*的返回对象不能是引用。

左值引用只能绑定左值，不能绑定右值.右值引用只能绑定右值，不能绑定左值.使用两个&&表示右值引用.

```c++
int x = 1;
int &y = x;                //绑定左值，正确
int &z = 2;                //绑定右值2，编译错误

int&& i = 8;            
int j = 18;       
int&& k = j;               //编译错误
```

**move语义**

move的作用是避免复制，提高效率.考虑一个函数以std::vector\<int\>作为参数，函数作用是在不改变实参的情况下，在vector中添加元素，旧方法使用常量左值引用作为参数，在内部先拷贝，再添加。如下所示：

```c++
void process_copy(std::vector<int> const& vec_)
{
    std::vector<int> vec(vec_);
    vec.push_back(42);
}

void process_copy(std::vector<int> && vec)
{
    vec.push_back(42);
}
```

注意，尽管右值引用能够绑定右值，但在函数体中，右值引用将会被函数”定义“为左值。如下：

右值引用和函数模板
当右值引用作为函数模板参数，会有差异。如果函数参数是一个模板参数的右值引用，模板推演参数类型将分两种:

```c++
template<typename T>
void foo(T&& t)
{}

int i=42;
foo(i);           //函数将被推演为：foo<int&>(i)

foo(42);         //推演为foo<int>(42)
foo(3.14159);    //推演为foo<float>(3.14159)
foo(std::string()); //推演为foo<std::string>(std::string())
```

move构造函数允许拥有者的指针在对象之间传递，允许unique_ptr<>（拥有move构造函数）作为一个函数的返回值，函数返回值属于临时对象，可以作为右值传递给右值引用，避免了拷贝。

8. 为什么析构函数必须是虚函数？为什么C++默认的析构函数不是虚函数

采用虚函数为了实现动态多态，用于基类指针指向派生类对象时，通过基类指针直接调用派生类的对象函数，析构函数也不例外。如果构函数不是虚函数，那么在调用该函数时（对象被删除时）则只会调用当前对象对应的类的析构函数，这对于直接定义的对象是没有什么影响的，但是对于使用基类指向派生类的指针而言，因为基类指针实际上是基类类型，所以析构时自然只会调用基类的析构函数，这就可能产生内存泄漏（因为派生类的析构函数不被调用）。所以如果确定程序中有基类指针指向派生类的问题，则必须将基类的析构函数指定为虚函数，如此才能确保NEW出来的对象被正确的DELETE。

```c++
class ClxBase{
public:
ClxBase() {};
virtual ~ClxBase() {cout << "Output from the destructor of class ClxBase!" << endl;};
virtual void DoSomething() { cout << "Do something in class ClxBase!" << endl; };
};

class ClxDerived : public ClxBase{
public:
ClxDerived() {};
~ClxDerived() { cout << "Output from the destructor of class ClxDerived!" << endl; };
void DoSomething() { cout << "Do something in class ClxDerived!" << endl; };
};

int main(){ 
ClxBase *p = new ClxDerived;
p->DoSomething();
delete p;
return 0;
}
```

9. c++ fork函数

Linux下一个进程在内存里有三部分的数据，就是”代码段”、”堆栈段”和”数据段”。接触过汇编语言的人了解，一般的CPU都有上述三种段寄存器，以方便操作系统的运行。这三个部分也是构成一个完整的执行序列的必要的部分。

有两个基本的操作用于创建和修改进程：函数fork()用来创建一个新的进程，该进程几乎是当前进程的一个完全拷贝，利用了父进程的代码段、堆栈段、数据段，当父子进程中对共有的数据段进行重新设值或调用不同方法时，才会导致数据段及堆栈段的不同；函数族exec()用来启动另外的进程以取代当前运行的进程，除了PID仍是原来的值外，代码段、堆栈段、数据段已经完全被改写了。 　　

fork()子进程只进行fork后面的语句,复制前面的父进程的数据，但不执行语句

```c++
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, const char* argv[])
{
	
	for(int i=0;i<2;++i)
	{
 
		fork();
		printf("hello,pid%d,ppid%d\n",getpid(),getppid());
 
	}
	sleep(1);
	return 0;
}

hello,pid13610,ppid2978
hello,pid13610,ppid2978
hello,pid13612,ppid13610
hello,pid13611,ppid13610
hello,pid13611,ppid13610
hello,pid13613,ppid13611
```

10. 析构函数的作用

定义的对象消亡时，自动被调用，用来释放对象占用的空间

11. 静态函数和虚函数的区别

C++中，静态成员函数不能被声明为virtual函数。static成员不属于任何类对象或类实例，所以即使给此函数加上virutal也是没有任何意义的。
静态与非静态成员函数之间有一个主要的区别。那就是静态成员函数没有this指针。

12. 重载、覆盖和隐藏的区别

**重载**-是指同一可访问区内被声明的几个具有不同参数列（参数的类型，个数，顺序不同）的同名函数，根据参数列表确定调用哪个函数，重载不关心函数返回类型。

```c++
class A{
public:
  void test(int i);
  void test(double i);//overload
  void test(int i, double j);//overload
  void test(double i, int j);//overload
  int test(int i);         //错误，非重载。注意重载不关心函数返回类型。
};
```

**隐藏**-是指派生类的函数屏蔽了与其同名的基类函数，注意只要同名函数，不管参数列表是否相同，基类函数都会被隐藏。

```c++
#include "stdafx.h"
#include "iostream"

using namespace std;

class Base
{
public:
    void fun(double ,int ){ cout << "Base::fun(double ,int )" << endl; }
};

class Derive : public Base
{
public:
    void fun(int ){ cout << "Derive::fun(int )" << endl; }
};

int main()
{
    Derive pd;
    pd.fun(1);//Derive::fun(int )
    pb.fun(0.01, 1);//error C2660: “Derive::fun”: 函数不接受 2 个参数

    Base *fd = &pd;
    fd->fun(1.0,1);//Base::fun(double ,int);
    fd->fun(1);//error 
    system("pause");
    return 0;
}
```

**重载和重写的区别**：
* 范围区别：重写和被重写的函数在不同的类中，重载和被重载的函数在同一类中。
* 参数区别：重写与被重写的函数参数列表一定相同，重载和被重载的函数参数列表一定不同。
* virtual的区别：重写的基类必须要有virtual修饰，重载函数和被重载函数可以被virtual修饰，也可以没有。
**隐藏和重写，重载的区别**:
* 与重载范围不同：隐藏函数和被隐藏函数在不同类中。
* 参数的区别：隐藏函数和被隐藏函数参数列表可以相同，也可以不同，但函数名一定同；当参数不同时，无论基类中的函数是否被virtual修饰，基类函数都是被隐藏，而不是被重写。 

如下例子：函数Derived::f(float)覆盖了Base::f(float)。函数Derived::g(int)隐藏了Base::g(float)，而不是重载。函数Derived::h(float)隐藏了Base::h(float)，而不是覆盖。

```c++
#include "stdafx.h"
#include <iostream>

using namespace std;

class Base
{
public:
    virtual void f(float x){ cout << "Base::f(float) " << x << endl; }
    void g(float x){ cout << "Base::g(float) " << x << endl; }
    void h(float x){ cout << "Base::h(float) " << x << endl; }
};

class Derived : public Base
{
public:
    virtual void f(float x){ cout << "Derived::f(float) " << x << endl; }
    void g(int x){ cout << "Derived::g(int) " << x << endl; }
    void h(float x){ cout << "Derived::h(float) " << x << endl; }
};

int main(void)
{
    Derived d;
    Base *pb = &d;
    Derived *fd = &d;
    // Good : behavior depends solely on type of the object
    pb->f(3.14f); //Derived::f(float) 3.14
    fd->f(3.14f); //Derived::f(float) 3.14

    // Bad : behavior depends on type of the pointer
    pb->g(3.14f); //Base::g(float) 3.14
    fd->g(3.14f); //Derived::g(int) 3

    // Bad : behavior depends on type of the pointer
    pb->h(3.14f); //Base::h(float) 3.14
    fd->h(3.14f); //Derived::h(float) 3.14

    system("pause");
    return 0;
}
```

13. strcpy和strlen

* **strlen(s)** : 返回S的长度，不包括字符串结束符NULL；
* **strcmp(s1,s2)** : 比较两个字符串是否相同，若s1==s2，返回0，若s1>s2则返回正数，若s1\<s2则返回负数；
* **strcat(s1,s2)** : 将字符串s2连接到s1上，返回 s1；
* **strcpy(s1,s2)** : 将s2，复制到s1，返回 s1.

14. c++ 面向对象

封装、继承、多态

15. ++i和i++的区别

* i++ 返回原来的值，++i 返回加1后的值。
* i++ 不能作为左值，而++i 可以。

++运算符重载
```c++
int& int::operator++() //这里返回的是一个引用形式，就是说函数返回值也可以作为一个左值使用。
{//函数本身无参，意味着是在自身空间内增加1的
  *this += 1;  // 增加
  return *this;  // 取回值
}

const int int::operator++(int) //函数返回值是一个非左值型的，与前缀形式的差别所在。
{//函数带参，说明有另外的空间开辟
  int oldValue = *this;  // 取回值
  ++(*this);  // 增加
  return oldValue;  // 返回被取回的值
}
//如上所示，i++ 最后返回的是一个临时变量，而临时变量是右值。
```

16. c++ 定义常量的方式。常量存放在内存的哪个位置

\#define 、const 
其中#define是定义宏变量，它其实是在编译之前，由预处理指令把代码里面的宏变量用指定的字符串替换，它不做语法检查

const常量存放在常量存储区

17. const修饰成员函数的目的

const对C++成员函数的修饰分为三种：

* **修饰参数**；

const只能用来修饰输入参数。输出型参数不能用const来修饰。

如果输入参数采用“指针传递”，那么加const修饰可以防止意外地改动该指针，起到保护作用。

如果输入参数采用“值传递”，函数将产生临时变量（局部变量），复制该参数的值并且压入函数栈。函数中使用该参数时，访问的是函数栈中临时变量的值，原变量无需保护，所以不要加const修饰。

基本变量类型的参数作为“值传递”的输入参数，无需采用引用。自定义变量类型（class类型，struct类型）参数作为“值传递”的输入参数，最好采用"const+引用"格式，即 void func（const A& a）。原因是自定义变量类型作为值传递时，设计创建临时变量，构造，复制，析构，这些过程很消耗时间。

* **修饰返回值**；

这个应用比较少。大部分返回值采用的时“值传递”。如果将返回值修饰为const，那么接收返回值的变量也必须定义为const。

* **修饰this指针**；

如果我们设计一个成员函数时，不想让其修改成员变量，那么就应该将this指针定义为底层指针。c++定义的方式就是在函数签名后面加上const，即

18. c++ 隐式类型转换

隐式转换：低精度->高精度转换

* 混合类型的算术运算表达式中。例如：
```c++
int a = 3;
double b = 4.5;
a + b; // a将会被自动转换为double类型，转换的结果和b进行加法操作
```
* 不同类型的赋值操作。例如：
```c++
int a = true; (bool类型被转换为int类型)
int * ptr = null;（null被转换为int*类型）
```
* 函数参数传值。例如：
```c++
void func(double a);
func(1); // 1被隐式的转换为double类型1.0
```
* 函数返回值。例如：
```c++
double add(int a, int b)
{
    return a + b;
} //运算的结果会被隐式的转换为double类型返回
```

19. c++ 函数栈空间的最大值

**栈**

在Windows下，栈是向低地址扩展的数据结构，是一块连续的内存区域。栈顶的地址和栈的最大容量是系统预先规定好的，在Window下，栈的大小是**2MB**，Linux下，默认栈空间大小为**8MB**，可通过ulimit -s来设置。

特点：栈的速度快、空间小，不灵活

**堆**

堆是向高地址扩展的数据结构，是不联系的内存区域。这是由于系统是用链表来存储空闲内存地址的，自然是不连续的，而链表的便利方向是由低地址向高地址的。在Window下，栈的大小一般小于**2GB**。

特点：堆的大小受限于计算机系统中有效的虚拟内存，所以堆获得的空间比较灵活，也比较大，但速度相对慢一些，也容易产生内存泄露问题。

20. extern “C”

extern "C"的主要作用就是为了能够正确实现C++代码调用其他C语言代码。加上extern "C"后，会指示编译器这部分代码按C语言的进行编译，而不是C++的。由于C++支持函数重载，因此编译器编译函数的过程中会将函数的参数类型也加到编译后的代码中，而不仅仅是函数名；而C语言并不支持函数重载，因此编译C语言代码的函数时不会带上函数的参数类型，一般之包括函数名。

用处

* C++代码调用C语言代码
* 在C++的头文件中使用
* 在多个人协同开发时，可能有的人比较擅长C语言，而有的人擅长C++，这样的情况下也会有用到

使用要点

* 可以是单一语句
* 可以是复合语句, 相当于复合语句中的声明都加了extern "C"
* 可以包含头文件，相当于头文件中的声明都加了extern "C"
* 不可以将extern "C" 添加在函数内部
* 如果函数有多个声明，可以都加extern "C", 也可以只出现在第一次声明中，后面的声明会接受第一个链接指示符的规则。
* 除extern "C", 还有extern "FORTRAN" 等。

21. new/delete与malloc/free的区别

* **属性**：new/delete是C++关键字，需要编译器支持。malloc/free是库函数，需要头文件支持c。
* **参数**：使用new操作符申请内存分配时无须指定内存块的大小，编译器会根据类型信息自行计算。而malloc则需要显式地指出所需内存的尺寸。
* **返回类型**：new操作符内存分配成功时，返回的是对象类型的指针，类型严格与对象匹配，无须进行类型转换，故new是符合类型安全性的操作符。而malloc内存分配成功则是返回void * ，需要通过强制类型转换将void*指针转换成我们需要的类型。
* **分配失败**：new内存分配失败时，会抛出bac_alloc异常。malloc分配内存失败时返回NULL。
* **自定义类型**：new会先调用operator new函数，申请足够的内存（通常底层使用malloc实现）。然后调用类型的构造函数，初始化成员变量，最后返回自定义类型指针。delete先调用析构函数，然后调用operator delete函数释放内存（通常底层使用free实现）。malloc/free是库函数，只能动态的申请和释放内存，无法强制要求其做自定义类型对象构造和析构工作。
* **重载**：C++允许重载new/delete操作符，特别的，布局new的就不需要为对象分配内存，而是指定了一个地址作为内存起始区域，new在这段内存上为对象调用构造函数完成初始化工作，并返回此地址。而malloc不允许重载。
* **内存区域**：new操作符从自由存储区（free store）上为对象动态分配内存空间，而malloc函数从堆上动态分配内存。自由存储区是C++基于new操作符的一个抽象概念，凡是通过new操作符进行内存申请，该内存即为自由存储区。而堆是操作系统中的术语，是操作系统所维护的一块特殊内存，用于程序的内存动态分配，C语言使用malloc从堆上分配内存，使用free释放已分配的对应内存。自由存储区不等于堆，如上所述，布局new就可以不位于堆中。

P.S.

在C++中，内存区分为5个区，分别是堆、栈、自由存储区、全局/静态存储区、常量存储区；

在C中，C内存区分为堆、栈、全局/静态存储区、常量存储区；

22. RTTI

多态（Polymorphism）按字面的意思就是“多种状态”。在面向对象的语言中，接口的多种不同的实现方式即为多态。引用Charlie Calverts对多态的描述——多态性是允许你将基类设置成为和一个或更多的他的子类相等的技术，赋值之后，父对象就可以根据当前赋值给它的子对象的特性以不同的方式运作。

RTTI 是“Runtime Type Information”的缩写，意思是：运行时类型信息。它提供了运行时确定对象类型的方法。本文将简略介绍 RTTI 的一些背景知识、描述 RTTI 的概念，并通过具体例子和代码介绍什么时候使用以及如何使用 RTTI；

本文还将详细描述两个重要的 RTTI 运算符的使用方法，它们是 typeid 和 dynamic_cast。 

```c++
class Human
{

};

class Chinese : public Human
{

};

class Japanese : public Human
{

};
```

```c++
void Kill(Human *pHuman)
{
　　if(typeid(*pHuman) == typeid(Japanese))
　　{
　　　　//kill
　　}
　　else if(typeid(*pHuman) == typeid(Chinese))
　　{
　　　　// not kill
　　}
}
```

dynamic_cast，这个运算符用于多态编程中保证在运行时发生正确的转换（即编译器无法验证是否发生正确的转换）。dynamic_cast 常用于从多态编程基类指针向派生类指针的向下类型转换。它有两个参数：一个是类型名；另一个是多态对象的指针或引用。其功能是在运行时将对象强制转换为目标类型并返回布尔型结果。

```c++
void Kill(Human *pHuman)
{
　　if(dynamic_cast<Japanese*>(pHuman))
　　{
　　　　//kill
　　}
　　else
　　{
　　　　// not kill
　　}
}
```

```c++
void menu::build(const File * pfile) { 
    if (typeid(*pfile)==typeid(TextFile)) { 
        add_option("edit"); 
    } 
    else if (typeid(*pfile)==typeid(MediaFile)) { 
        add_option("play"); 
    } 
}
```

23. 虚函数在运行时如何实现多态

```c++
class Base
{
public:
    Base(string data) :m_data(data){}
    void show(){ cout << "Base:: " << m_data << endl; }
    string GetData(){ return m_data; }
private:
    string m_data;
};

class Derived :public Base
{
public:
    Derived(int id, string data) : m_id(id), Base(data){ }
    void show(){ cout << "Derived:: " << m_id<<"  " << GetData() << endl; }
private:
    const int m_id;
};

int main()
{
    Base *A = new Base("hello");        //指向基类对象的指针
    A->show();
    Base *B = new Derived(1, "hello");  //指向派生类对象的指针
    B->show();;
//对于这两个指针，我们希望它们分别对应基类和派生类的 show()函数
    system("pause");
    return 0;
}
```

此时可以发现：并没有如我们预想的那样，基类的show()函数遮蔽了派生类的show()函数，原因在于我们没有使用虚函数，虚函数是实现运行是多态。 
所以想要实现运行时多态，很简单，只需要将基类的show()前加上virtual 关键字即可。

```c++
class Base
{
public:
    Base(string data) :m_data(data){}
    virtual void show(){ cout << "Base:: " << m_data << endl; }
    string GetData(){ return m_data; }
private:
    string m_data;
};
```

24. c语言怎么实现函数调用

使用调用语句，先声明，再调用

25. c语言参数压栈顺序

由于汇编语言是底层的编程语言，各种函数参数都要直接控制栈进行存取，在混合编程中，要用汇编来调用C函数，当然就要知道参数的压栈情况了。

C函数的参数压栈顺序是从右到左时

对于不定参数printf，从右往左压栈可以知道参数的个数

26. 请你说说C++如何处理返回值？

* 不要返回局部对象的引用或者指针
* 引用返回左值，其他返回类型得到右值
* main函数返回值中，0表示成功，其他表示识别。

* **函数返回值**-c++ 11新标准规定， 函数可以返回花括号包围的值列表。其实，就是使用列表初始化的方式对表示函数返回的临时变量进行初始化。
```c++
vector<string> process()
{
    return {"funca", "funcb"};
}
```
* **返回数组指针**-因为数组不能被拷贝， 所以不能返回数组。 不过函数可以返回数组的指针或引用， 只是返回类型的定义比较繁琐。
```c++
int  (*func(int i))[10] {} // 表示返回一个大小为10，类型为int型的数组。
```
或者
```c++
typedef int Array[10]; // Array是一个类型别名

Array* func(int i){}
```

27. 请你回答一下C++中拷贝赋值函数的形参能否进行值传递？

28. 请你说一说select

29. 请你说说fork,wait,exec函数

30. 请你回答一下静态函数和虚函数的区别

31. 

32. 

33. 

34. 

35. 

36. 

37. 

38. 

39. 

40. 

41. 

42. 

43. 

44. 

45. 

46. 

47. 

48. 

49. 

50. 

51. 

52. 

53. 

54. 

55. 

56. 

57. 

58. 

59. 
