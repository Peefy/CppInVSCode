
## C++笔记

C++ 是一种中级语言，它是由 Bjarne Stroustrup 于 1979 年在贝尔实验室开始设计开发的。C++ 进一步扩充和完善了 C 语言，是一种面向对象的程序设计语言。C++ 可运行于多种平台上，如 Windows、MAC 操作系统以及 UNIX 的各种版本。

C++ 是一种静态类型的、编译式的、通用的、大小写敏感的、不规则的编程语言，支持过程化编程、面向对象编程和泛型编程。

C++ 被认为是一种中级语言，它综合了高级语言和低级语言的特点。

C++ 是由 Bjarne Stroustrup 于 1979 年在新泽西州美利山贝尔实验室开始设计开发的。C++ 进一步扩充和完善了 C 语言，最初命名为带类的C，后来在 1983 年更名为 C++。

C++ 是 C 的一个超集，事实上，任何合法的 C 程序都是合法的 C++ 程序。

注意：使用静态类型的编程语言是在编译时执行类型检查，而不是在运行时执行类型检查。

*第一个C++程序*
```cpp
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, world!" << endl;
    return 0;
}
```

**C++面向对象程序设计**

C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：

* 封装
* 抽象
* 继承
* 多态

**C++标准库**

* 核心语言，提供了所有构件块，包括变量、数据类型和常量，等等
* C++ 标准库，提供了大量的函数，用于操作文件、字符串等
* 标准模板库（STL），提供了大量的方法，用于操作数据结构等

**ANSI标准**

ANSI 标准是为了确保 C++ 的便携性 —— 您所编写的代码在 Mac、UNIX、Windows、Alpha 计算机上都能通过编译。

由于 ANSI 标准已稳定使用了很长的时间，所有主要的 C++ 编译器的制造商都支持 ANSI 标准

C++ 支持多种编程风格。您可以使用 Fortran、C、Smalltalk 等任意一种语言的编程风格来编写代码。每种风格都能有效地保证运行时间效率和空间效率。

**C++ 编译器**

写在源文件中的源代码是人类可读的源。它需要"编译"，转为机器语言，这样 CPU 可以按给定指令执行程序。

C++ 编译器用于把源代码编译成最终的可执行程序。

大多数的 C++ 编译器并不在乎源文件的扩展名，但是如果您未指定扩展名，则默认使用 .cpp。

最常用的免费可用的编译器是 GNU 的 C/C++ 编译器，如果您使用的是 HP 或 Solaris，则可以使用各自操作系统上的编译器。

以下部分将指导您如何在不同的操作系统上安装 GNU 的 C/C++ 编译器。这里同时提到 C/C++，主要是因为 GNU 的 gcc 编译器适合于 C 和 C++ 编程语言。

**g++常用命令选项**

选项|解释
-|-
-ansi|只支持 ANSI 标准的 C 语法。这一选项将禁止 GNU C 的某些特色， 例如 asm 或 typeof 关键词
-c|只编译并生成目标文件
-DMACRO|以字符串"1"定义 MACRO 宏
-DMACRO=DEFN|以字符串"DEFN"定义 MACRO 宏
-E|只运行 C 预编译器
-g|生成调试信息。GNU 调试器可利用该信息
-IDIRECTORY|指定额外的头文件搜索路径DIRECTORY
-LDIRECTORY|指定额外的函数库搜索路径DIRECTORY
-lLIBRARY|连接时搜索指定的函数库LIBRARY
-m486|针对 486 进行代码优化
-o|FILE 生成指定的输出文件。用在生成可执行文件时
-O0|不进行优化处理
-O|或 -O1 优化生成代码
-O2|进一步优化
-O3|比 -O2 更进一步优化，包括 inline 函数
-shared|生成共享目标文件。通常用在建立共享库时
-static|禁止使用共享连接
-UMACRO|取消对 MACRO 宏的定义
-w|不生成任何警告信息
-Wall|生成所有警告信息

**C++基本语法**

C++ 程序可以定义为对象的集合，这些对象通过调用彼此的方法进行交互。现在让我们简要地看一下什么是类、对象，方法、即时变量。
* **对象**-
* **类**-
* **方法**-
* **即时变量**-


## C++知识点

* **智能指针**

C++程序设计中使用堆内存是非常频繁的操作，堆内存的申请和释放都是程序员自己管理。程序员自己管理内存可以提高程序的效率，但是整体来说堆内存的管理是麻烦的，C++引入智能指针的概念，方便内存管理。使用普通指针，容易造成内存泄露(忘记释放),二次释放,程序发生异常内存泄露等问题,使用智能指针能更好的管理内存

智能指针的原理:
* 1.智能指针使用了RALL(获取资源即初始化)的技术对普通的指针进行封装,使得智能的指针实质是个对象,行为表现却像一个指针
* 2.智能指针的作用是防止忘记调用delete释放内存和程序异常的进入catch块忘记释放内存.另外指针的释放时机非常考究，多次释放同一个指针会造成程序崩溃
* 3.智能指针的作用还有一个作用是把值语义转变为引用语义

*C++11*版本后提供，包含在头文件\<memory\>的*std*命名空间中,
*shared_ptr*,*unique_ptr*,*weak_ptr*

* **shared_ptr**

shared_ptr多个指针指向相同的对象. shared_ptr使用引用计数，每一个shared_ptr的拷贝都指向相同的内存.每使用他一次，内部的引用计数加1，每析构一次，内部的引用计数减1，减为0时，自动删除所指向的堆内存。shared_ptr内部的引用计数是线程安全的，但是对象的读取需要加锁。初始化，智能指针是个模板类，可以指定类型，传入指针通过构造函数初始化，也可以使用make_shared函数初始化.不能将指针直接赋值给一个智能指针，一个是类，一个是指针。
一下写法是错的
```c++
std::shared_ptr<int> p4 = new int(1)
```
拷贝和赋值。拷贝使得对象的引用计数增加1，赋值使得原对象引用计数减1，当计数为0时,自动释放内存。后来指向的对象引用计数加1，指向后来的对象.get成员函数获取原始指针
注意：*不要用一个原始指针初始化多个shared_ptr,否则会造成二次释放同一内存.注意避免循环引用，shared_ptr的一个最大的陷阱是循环引用，循环，循环引用会导致堆内存无法正确释放*

```c++

#include <memory>

static void sharedptrDemo(){
    //auto ptr = std::shared_ptr<int>(1);
    printf("hello shared_ptr\n");
    int a = 10;
    std::shared_ptr<int> ptra = std::make_shared<int>(a);
    std::shared_ptr<int> ptra2(ptra);
    printf("the use count of ptra is %d\n", ptra.use_count());
    int b = 20;
    int *pb = &a;
    //std::shared_ptr<int> ptrb = pb;  //error
    std::shared_ptr<int> ptrb = std::make_shared<int>(b);
    printf("the use count of ptrb is %d\n", ptrb.use_count());
    ptra = ptrb;
    pb = ptrb.get();
    printf("the use count of ptra is %d\n", ptra.use_count());
    printf("the use count of ptrb is %d\n", ptrb.use_count());
}
```

* **unique_ptr**

unique_ptr"唯一"拥有其所指对象，同一时刻只能有一个unique_ptr指向给定对象(通过禁止拷贝语义，只有移动语义来实现)。相比于原始指针unique_ptr用于其RALL的特性，使得在出现异常的情况下，动态资源能得到释放。unique_ptr指针本身的生命周期：从unique_ptr指针创建时开始，制导离开作用域，若其指向其对象,则将其所指对象销毁(默认使用delete操作符,用户可指定其他操作).unique_ptr指针与其所指对象的关系:在智能指针生命周期内,可以改变智能指针所指的对象,如创建智能指针时通过构造函数指定、通过reset方法重新指定，通过release方法释放所有权、通过移动语义转移所有权

```c++

#include <memory>

static void uniqueptrDemo(){
    std::unique_ptr<int> uptr(new int(10));
    std::unique_ptr<int> uptr2 = std::move(uptr);
    uptr2.release();
}

```

* **weak_ptr**

weak_ptr是为了配合shared_ptr而引入的一种智能指针，因为它不具有普通指针的行为，没有重载operator*和->,它的最大作用在于协助shared_ptr工作,像旁观者那样观测资源的使用情况。weak_ptr可以一个shared_ptr或者另一个weak_ptr对象构造，获得资源的观测权。但weak_ptr没有共享资源,它的构造不会引起指针引起引用计数的增加。使用weak_ptr的成员函数use_count()可以观测观测资源的引用计数,另一个成员函数expired()的功能等价于use_count()==0,但更快，表示被观测的资源(也就是shared_ptr的管理的资源)已经不复存在。weak_ptr可以使用一个非常重要的成员函数lock()从被观测的shared_ptr获得一个可用的shared_ptr对象,从而操作资源。但当expired()==true的时候,lock()函数将返回一个存储空指针的shared_ptr

```c++

static void weakptrDemo(){
    std::shared_ptr<int> sh_ptr = std::make_shared<int>(10);
    printf("the use count of shared ptr is %d", sh_ptr.use_count());

    std::weak_ptr<int> wp(sh_ptr);
    printf("the use count of weak ptr is %d", wp.use_count());

    if(!wp.expired()){
        std::shared_ptr<int> sh_ptr2 = wp.lock(); 
        *sh_ptr = 100;
        printf("the use count of weak ptr is %d", wp.use_count());
    }
}

```

*智能指针的设计和实现*

* 智能指针类将一个计数器与类指向的对象相关联，引用计数跟踪该类有多少个对象共享同一指针。

* 每次创建类的新对象时，初始化指针并将引用计数置为1；当对象作为另一对象的副本而创建时，拷贝构造函数拷贝指针并增加与之相应的引用计数；对一个对象进行赋值时，赋值操作符减少左操作数所指对象的引用计数(如果引用计数减至0，则删除对象),并增加右操作数所指对象的引用计数;调用析构函数时,构造函数减少引用计数(如果引用计数减至0，则删除基础对象).智能指针就是模拟指针动作的类。

* 所有的智能指针都会重载->和*操作符.智能指针还有许多其他功能，比较有用的自动销毁。这主要是利用栈对象的有限作用域以及临时对象(有限作用域实现)析构函数释放内存

* 总之，一个基于引用计数的智能指针的实现，需要实现构造，析构，拷贝构造，操作符=,*,->的重载

```c++

template<typename T>
class Smartpointer
{
  private:
    T* _ptr;
    size_t* _count;
    void releaseCount(){
      if (this->_ptr){
        (*this->_count)--;
        if (this->_count == 0){
          delete this->_ptr;
          delete this->_count;
        }
      }
    }
  public:
    //cotr
    Smartpointer(T* ptr = nullptr) : _ptr(ptr){
      _count = _ptr ? new size_t(1) : new size_t(0);
    }
    //copy_cotr
    Smartpointer(const Smartpointer& ptr){
      if (this != &ptr){
        this->_ptr = ptr._ptr;
        this->_count = ptr._count;
        (*this->_count)++;
      }
    }
    //=
    Smartpointer& operator=(const Smartpointer&ptr){
      if (this->_ptr == ptr._ptr){
        return *this;
      }
      this->releaseCount();
      this->_ptr = ptr._ptr;
      this->_count = ptr._count;
      (*this->_count)++;
      return *this;
    }

    T& operator*(){
      assert(this->_ptr == nullptr);
      return *(this->_ptr);
    }

    T* operator->(){
      assert(this->_ptr == nullptr);
      return this->_ptr;
    }

    ~Smartpointer() {
      if (--(*this->_count) == 0){
          delete this->_ptr;
          delete this->_count;
      }
    }

    size_t use_count() const{
      return *this->_count;
    }
};

```

* **const**

C++ const允许指定一个语义约束，编译器会强制实施这个约束，允许程序员告诉编译器某值是保持不变的。如果在编程中确实有某个值保持不变，就应该明确使用const，这样可以获得编译器的帮助

1.const最基本的用法：修饰成员变量
```c++
#include<iostream>
using namespace std;
int main(){
    int a1 = 3;   ///non-const data
    const int a2 = a1;    ///const data

    int * a3 = &a1;   ///non-const data,non-const pointer
    const int * a4 = &a1;   ///const data,non-const pointer
    int * const a5 = &a1;   ///non-const data,const pointer
    int const * const a6 = &a1;   ///const data,const pointer
    const int * const a7 = &a1;   ///const data,const pointer

    return 0;
}
/*
只有一个const，如果const位于*左侧，表示指针所指的数据是常量，不能通过解应用修改该数据；指针本身是变量，可以指向其他内存单元

只有一个const，如果const位于*右侧，表示指针本身是常量，不能指向其他内存地址；指针所指的数据可以通过解引用修改。

两个const，*左右各一个，表示指针和指针所指数据都不能修改。
*/
```
2.const修饰函数参数
```c++
void testModifyConst(const int _x) {
     _x=5;　　　///编译出错
}
/*
传递过来的参数在函数内不可以改变，与上面修饰变量时的性质一样。
*/
```
3.const修饰成员函数
```c++
#include <iostream>
using namespace std;
class Point{
    public :
    Point(int _x):x(_x){}

    void testConstFunction(int _x) const{

        ///错误，在const成员函数中，不能修改任何类成员变量
        x=_x;

        ///错误，const成员函数不能调用非onst成员函数，因为非const成员函数可以会修改成员变量
        modify_x(_x);
    }

    void modify_x(int _x){
        x=_x;
    }

    int x;
};
/*
const修饰的成员函数不能修改任何的成员变量(mutable修饰的变量除外)

const成员函数不能调用非onst成员函数，因为非const成员函数可以会修改成员变量
*/
```
4.const修饰函数返回值
```c++
const int * mallocA(){  ///const data,non-const pointer
    int *a=new int(2);
    return a;
}

int main()
{
    const int *a = mallocA();
    ///int *b = mallocA();  ///编译错误
    return 0;
}
/*
如果返回const data,non-const pointer，返回值也必须赋给const data,non-const pointer。因为指针指向的数据是常量不能修改。
*/
```

* **static**

1.static可以用来隐藏函数和变量:当同时编译多个文件时，所有未加static前缀的全局变量和函数都具有全局可见性(使用extern就可以)，利用这一特性可以在不同的文件中定义同名函数和同名变量，而不必担心命名冲突。static可以用作函数和变量的前缀，对于子函数来讲，static的作用仅限于隐藏

2.保持变量内容的持久(static变量的记忆功能和全局生存期)：存储在静态数据的变量会在程序刚开始运行时就完成初始化，也是唯一的一次初始化。共有两种变量存储在静态存储区：全局变量和static变量，只不过和全局变量比起来，static可以控制变量的可见范围。PS:如果作为static局部变量在函数内定义，它的生存期为整个源程序，但是其作用域仍与自动变量相同，智能在定义该变量的函数内使用该变量。退出该函数后，尽管该变量还继续存在，但不能使用它

3.默认初始化为0(static变量):全局变量也具备这一属性，因为全局变量也存储在静态数据区，内存中所有的字节默认值都是0x00,某些时候这一特点可以减少程序员的工作量。再比如要把一个字符数组当字符串来用,但又觉得每次在字符数组末尾加'\0'太麻烦.如果把字符串定义成静态的，就省去了这个麻烦。

4.static的第四个作用：C++中的类成员声明static：在类中声明static变量或者函数时，初始化时使用作用域运算符来标明它所属类。因此，静态数据成员是类的成员，而不是对象的成员。(1)类的静态成员函数是属于整个类而非类的对象，所以没有this指针，导致仅能访问类的静态数据和静态成员函数;(2)不能将静态成员函数定义为虚函数;(3)由于静态成员声明于类，操作于其外，所以对其取地址操作，就多少有些特殊，变量地址是指向其数据类型的指针，函数地址类型是一个"nonmember函数指针"；(4)由于静态成员函数没有this指针，所以就差不多等同于nonmember函数,就产生一个意想不到的好处：成为一个callback函数,(5)static并没有增加程序的时空开销，相反还缩短了子类对父类静态成员的访问时间，节省了子类的内存空间;(6)静态数据成员在<定义或说明>时前面加关键字static;(7)静态数据成员是静态存储的，所以必须对它进行*初始化*;(8)静态成员初始化与一般数据化不同,初始化在类体外进行:**\<数据类型\>\<类名\>::\<静态数据成员名\>=\<值\>**;(9)为了防止父类的影响，可以在子类定义一个与父类相同的静态变量，以屏蔽父类的影响.

* **STL**
* **内存池**
* **cast函数**

C++11智能指针share_ptr<>、auto_ptr<>、make_ptr<>()

STL标准模板库 algorithm库

const、static、static_cast<>

C++内存池、内存管理、内存泄露

继承与多态override
