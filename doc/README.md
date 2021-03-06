
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
// main() 是程序开始执行的地方
int main()
{
    cout << "Hello, world!" << endl;
    return 0;
}
```

* C++ 语言定义了一些头文件，这些头文件包含了程序中必需的或有用的信息。上面这段程序中，包含了头文件 `\<iostream\>`
* `using namespace std`; 告诉编译器使用 std 命名空间。命名空间是 C++ 中一个相对新的概念
* `// main() 是程序开始执行的地方` 是一个单行注释。单行注释以 // 开头，在行末结束
* `int main()` 是主函数，程序从这里开始执行
* `cout << "Hello World"`; 会在屏幕上显示消息 "Hello World"
* `return 0`; 终止 main( )函数，并向调用进程返回值 0

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

**C++ 中的分号 & 语句块**

在 C++ 中，分号是语句结束符。也就是说，每个语句必须以分号结束。它表明一个逻辑实体的结束
```c++
x = y;
y = y+1;
add(x, y);
```
语句块是一组使用大括号括起来的按逻辑连接的语句。例如：
```c++
{
   cout << "Hello World"; // 输出 Hello World
   return 0;
}
```
**C++ 标识符**
C++ 标识符是用来标识变量、函数、类、模块，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。
C++ 标识符内不允许出现标点字符，比如 @、& 和 %。C++ 是区分大小写的编程语言。因此，在 C++ 中，Manpower 和 manpower 是两个不同的标识符。
下面列出几个有效的标识符:
```c++
mohd       zara    abc   move_name  a_123
myname50   _temp   j     a23b9      retVal
```

**C++关键字**

关键字||||
-|-|-|-
asm|else|new|this
auto|enum|operator|throw
bool|explicit|private|true
break|export|protected|try
case|extern|public|typedef
catch|false|register|typeid
char|float|reinterpret_cast|typename
class|for|return|union
const|friend|short|unsigned
const_cast|goto|signed|using
continue|if|sizeof|virtual
default|inline|static|void
delete|int|static_cast|volatile
do|long|struct|wchar_t
double|mutable|switch|while
dynamic_cast|namespace|template

**三字符组**

三字符组就是用于表示另一个字符的三个字符序列，又称为三字符序列。三字符序列总是以两个问号开头。

三字符序列不太常见，但 C++ 标准允许把某些字符指定为三字符序列。以前为了表示键盘上没有的字符，这是必不可少的一种方法。

三字符序列可以出现在任何地方，包括字符串、字符序列、注释和预处理指令。

下面列出了最常用的三字符序列：

三字符组|替换
-|-
??=|#
??/|\\
??'|^
??(|[
??)|]
??!|\|
??<|{
??>|}
??-|~

如果希望在源程序中有两个连续的问号，且不希望被预处理器替换，这种情况出现在字符常量、字符串字面值或者是程序注释中，可选办法是用字符串的自动连接："...?""?..."或者转义序列："...?\?..."。

从Microsoft Visual C++ 2010版开始，该编译器默认不再自动替换三字符组。如果需要使用三字符组替换（如为了兼容古老的软件代码），需要设置编译器命令行选项/Zc:trigraphs

g++仍默认支持三字符组，但会给出编译警告。

**C++注释**

程序的注释是解释性语句，您可以在 C++ 代码中包含注释，这将提高源代码的可读性。所有的编程语言都允许某种形式的注释。

C++ 支持单行注释和多行注释。注释中的所有字符会被 C++ 编译器忽略。

C++ 注释以 /* 开始，以 */ 终止。例如：

**C++数据类型**

C++ 为程序员提供了种类丰富的内置数据类型和用户自定义的数据类型。下表列出了七种基本的 C++ 数据类型：

类型|关键字
-|-
布尔型|bool
字符型|char
整型|int
浮点型|float
双浮点型|double
无类型|void
宽字符型|wchar_t

其实 wchar_t 是这样来的：
```c++
typedef wchar_t short int;
```

所以 wchar_t 实际上的空间是和 short int 一样。

一些基本类型可以使用一个或多个类型修饰符进行修饰：

* signed
* unsigned
* short
* long

下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值。

注意：不同系统会有所差异。

类型|位|范围
-|-|-
char|1 个字节|-128 到 127 或者 0 到 255
unsigned char|1 个字节|0 到 255
signed char|1 个字节|-128 到 127
int|4 个字节|-2147483648 到 2147483647
unsigned int|4 个字节|0 到 4294967295
signed int|4 个字节|-2147483648 到 2147483647
short int|2 个字节|-32768 到 32767
unsigned short int|2 个字节|0 到 65,535
signed short int|2 个字节|-32768 到 32767
long int|8 个字节|-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
signed long int|8 个字节|-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
unsigned long int|8 个字节|0 to 18,446,744,073,709,551,615
float|4 个字节|+/- 3.4e +/- 38 (~7 个数字)
double|8 个字节|+/- 1.7e +/- 308 (~15 个数字)
long double|16 个字节|+/- 1.7e +/- 308 (~15 个数字)
wchar_t|2 或 4 个字节|1 个宽字符

从上表可得知，变量的大小会根据编译器和所使用的电脑而有所不同。

```c++
#include<iostream>  
#include<string>  
#include <limits>  
using namespace std;  
  
int main()  
{  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}
```

**typedef 声明**

可以使用 `typedef` 为一个已有的类型取一个新的名字。下面是使用 `typedef` 定义一个新类型的语法：

**枚举类型**

枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。

如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。

C++包含两种枚举：限定作用域的和不限定作用域的。这里主要介绍限定作用域的。

*不限定作用域*

创建枚举，需要使用关键字 `enum`。枚举类型的一般形式为：

```c++
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;
```

*限定作用域*

```c++
#include "enum_class.hpp"
#include <iostream>
 
namespace enum_class_ {
 
typedef short int16_t;
 
////////////////////////////////////////////////////////////////////
// reference: http://en.cppreference.com/w/cpp/language/enum
// enum that takes 16 bits
enum smallenum : int16_t {
	a,
	b,
	c
};
 
// color may be red (value 0), yellow (value 1), green (value 20), or blue (value 21)
enum color {
	red,
	yellow,
	green = 20,
	blue
};
 
// altitude may be altitude::high or altitude::low
enum class altitude : char {
	high = 'h',
	low = 'l', // C++11 allows the extra comma
};
 
// the constant d is 0, the constant e is 1, the constant f is 3
enum {
	d,
	e,
	f = e + 2
};
 
//enumeration types (both scoped and unscoped) can have overloaded operators
std::ostream& operator << (std::ostream& os, color c)
{
	switch (c) {
		case red: os << "red";    break;
		case yellow: os << "yellow"; break;
		case green: os << "green";  break;
		case blue: os << "blue";   break;
		default: os.setstate(std::ios_base::failbit);
	}
 
	return os;
}
 
std::ostream& operator << (std::ostream& os, altitude al)
{
	return os << static_cast<char>(al);
}
 
int test_enum_class_1()
{
	color col = red;
	altitude a;
	a = altitude::low;
 
	std::cout << "col = " << col << '\n'
		<< "a = " << a << '\n'
		<< "f = " << f << '\n';
 
	return 0;
}
 
// C++ has two kinds of enum: enum classes, Plain enums
enum Color { red1, green1, blue1 };                    // plain enum
enum Card { red_card, green_card, yellow_card };    // another plain enum
enum class Animal { dog, deer, cat, bird, human };  // enum class
enum class Mammal { kangaroo, deer, human };        // another enum class
 
int test_enum_class_2()
{
	// examples of bad use of plain enums:
	Color color = Color::red1;
	Card card = Card::green_card;
 
	int num = color;    // no problem
 
	if (color == Card::red_card) // no problem (bad)
		std::cout << "bad" << std::endl;
 
	if (card == Color::green1)   // no problem (bad)
		std::cout << "bad" << std::endl;
 
	// examples of good use of enum classes (safe)
	Animal a = Animal::deer;
	Mammal m = Mammal::deer;
 
	//int num2 = a;   // error
	//if (m == a)     // error (good)
	//	std::cout << "bad" << std::endl;
 
	//if (a == Mammal::deer) // error (good)
	//	std::cout << "bad" << std::endl;
 
	return 0;
}
 
int test_enum_class_3()
{
	enum class Color { // "enum class" defines this as an scoped enumeration instead of a standard enumeration
		RED, // RED is inside the scope of Color
		BLUE
	};
 
	enum class Fruit {
		BANANA, // BANANA is inside the scope of Fruit
		APPLE
	};
 
	Color color = Color::RED; // note: RED is not directly accessible any more, we have to use Color::RED
	Fruit fruit = Fruit::BANANA; // note: BANANA is not directly accessible any more, we have to use Fruit::BANANA
 
	//if (color == fruit) // compile error here, as the compiler doesn't know how to compare different types Color and Fruit
	//	std::cout << "color and fruit are equal\n";
	//else
	//	std::cout << "color and fruit are not equal\n";
 
	if (color == Color::RED) // this is okay
		std::cout << "The color is red!\n";
	else if (color == Color::BLUE)
		std::cout << "The color is blue!\n";
 
	//std::cout << color; // won't work, because there's no implicit conversion to int
	color = Color::BLUE;
	std::cout << static_cast<int>(color) << std::endl; // will print 1
 
	return 0;
}
 
} // namespace enum_class_

```

**C++变量类型**

变量其实只不过是程序可操作的存储区的名称。C++ 中每个变量都有指定的类型，类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。

变量的名称可以由字母、数字和下划线字符组成。它必须以字母或下划线开头。大写字母和小写字母是不同的，因为 C++ 是大小写敏感的。

类型|描述
-|-
bool|存储值ture或false
char|通常是一个字符(八位)。这是一个整数类型
int|对机器而言，整数的最自然的大小
float|单精度浮点值，1位符号，8位指数，23位小数
double|双精度浮点值。双精度是1位符号，11位指数，52位小数
void|表示类型的缺失
wchar_t|宽字符类型

`C++` 也允许定义各种其他类型的变量，比如`枚举`、`指针`、`数组`、`引用`、`数据结构`、`类`等等

**C++中的变量定义**

变量定义就是告诉编译器在何处创建变量的存储，以及如何创建变量的存储。变量定义指定一个数据类型，并包含了该类型的一个或多个变量的列表，如下所示：
```c++
type variable_list;
```
在这里，`type` 必须是一个有效的 `C++` 数据类型，可以是 `char`、`wchar_t`、`int`、`float`、`double`、`bool` 或任何用户自定义的对象，`variable_list` 可以由一个或多个标识符名称组成，多个标识符之间用逗号分隔。下面列出几个有效的声明：

```c++
int    i, j, k;
char   c, ch;
float  f, salary;
double d;
extern int d = 3, f = 5;    // d 和 f 的声明 
int d = 3, f = 5;           // 定义并初始化 d 和 f
byte z = 22;                // 定义并初始化 z
char x = 'x';               // 变量 x 的值为 'x'
```

**C++中的变量声明**

变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。

当您使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），变量声明就显得非常有用。您可以使用 `extern` 关键字在任何地方声明一个变量。虽然您可以在 C++ 程序中多次声明一个变量，但变量只能在某个文件、函数或代码块中被定义一次。

```c++
#include <iostream>
using namespace std;
 
// 变量声明
extern int a, b;
extern int c;
extern float f;
  
int main ()
{
  // 变量定义
  int a, b;
  int c;
  float f;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c << endl ;
 
  f = 70.0/3.0;
  cout << f << endl ;
 
  return 0;
}
```

**C++ 中的左值（Lvalues）和右值（Rvalues）**

C++中有两种类型的表达式：
* **左值（lvalue）**-指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边
* **右值（rvalue）**-术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边

变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。下面是一个有效的语句：
```c++
int g = 20;
```
但是下面这个就不是一个有效的语句，会生成编译时错误：
```c++
10 = 20; //error
```

**C++变量作用域**

作用域是程序的一个区域，一般来说有三个地方可以定义变量：
* 在函数或一个代码块内部声明的变量，称为局部变量
* 在函数参数的定义中声明的变量，称为形式参数
* 在所有函数外部声明的变量，称为全局变量

*局部变量*

在函数或一个代码块内部声明的变量，称为局部变量。它们只能被函数内部或者代码块内部的语句使用。下面的实例使用了局部变量

```c++
#include <iostream>
using namespace std;
 
int main ()
{
  // 局部变量声明
  int a, b;
  int c;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c;
 
  return 0;
}
```

*全局变量*

在所有函数外部定义的变量（通常是在程序的头部），称为全局变量。全局变量的值在程序的整个生命周期内都是有效的。

全局变量可以被任何函数访问。也就是说，全局变量一旦声明，在整个程序中都是可用的。下面的实例使用了全局变量和局部变量：

```c++
#include <iostream>
using namespace std;
 
// 全局变量声明
int g;
 
int main ()
{
  // 局部变量声明
  int a, b;
 
  // 实际初始化
  a = 10;
  b = 20;
  g = a + b;
 
  cout << g;
 
  return 0;
}
```
在程序中，局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值。下面是一个实例：

```c++
#include <iostream>
using namespace std;
 
// 全局变量声明
int g = 20;
 
int main ()
{
  // 局部变量声明
  int g = 10;
 
  cout << g;
 
  return 0;
}
```

**初始化局部变量和全局变量**

当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化为下列值

数据类型|初始化默认值
-|-
int|0
char|'\0'
float|0
double|0
pointer|NULL

正确地初始化变量是一个良好的编程习惯，否则有时候程序可能会产生意想不到的结果

**C++常量**

常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做**字面量**。

常量可以是任何的基本数据类型，可分为整型数字、浮点数字、字符、字符串和布尔值。

常量就像是常规的变量，只不过常量的值在定义后不能进行修改

**整数常量**

整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。

整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。

下面列举几个整数常量的实例：

```c++
212         // 合法的
215u        // 合法的
0xFeeL      // 合法的
078         // 非法的：8 不是八进制的数字
032UU       // 非法的：不能重复后缀
```

以下是各种类型的整数常量的实例：

```c++
85         // 十进制
0213       // 八进制 
0x4b       // 十六进制 
30         // 整数 
30u        // 无符号整数 
30l        // 长整数 
30ul       // 无符号长整数
```

**浮点常量**

浮点常量由整数部分、小数点、小数部分和指数部分组成。您可以使用小数形式或者指数形式来表示浮点常量。

当使用小数形式表示时，必须包含整数部分、小数部分，或同时包含两者。当使用指数形式表示时， 必须包含小数点、指数，或同时包含两者。带符号的指数是用 e 或 E 引入的。

下面列举几个浮点常量的实例：

```c++
3.14159       // 合法的 
314159E-5L    // 合法的 
510E          // 非法的：不完整的指数
210f          // 非法的：没有小数或指数
.e55          // 非法的：缺少整数或分数
```

**布尔常量**

字符常量是括在单引号中。如果常量以 L（仅当大写时）开头，则表示它是一个宽字符常量（例如 L'x'），此时它必须存储在 `wchar_t` 类型的变量中。否则，它就是一个窄字符常量（例如 'x'），此时它可以存储在 `char` 类型的简单变量中。

字符常量可以是一个普通的字符（例如 'x'）、一个转义序列（例如 '\t'），或一个通用的字符（例如 '\u02C0'）。

在 C++ 中，有一些特定的字符，当它们前面有反斜杠时，它们就具有特殊的含义，被用来表示如换行符（\n）或制表符（\t）等。下表列出了一些这样的转义序列码：

转义序列|含义
-|-
\\\\ |	\\ 字符
\\'	|' 字符
\\"	|" 字符
\\?	|? 字符
\\a	|警报铃声
\\b	|退格键
\\f	|换页符
\\n	|换行符
\\r	|回车
\\t	|水平制表符
\\v	|垂直制表符
\\ooo	|一到三位的八进制数
\\xhh . . .|	一个或多个数字的十六进制数

**字符串常量**

字符串字面值或常量是括在双引号 "" 中的。一个字符串包含类似于字符常量的字符：普通的字符、转义序列和通用的字符。

您可以使用空格做分隔符，把一个很长的字符串常量进行分行。

下面的实例显示了一些字符串常量。下面这三种形式所显示的字符串是相同的。

```c++
"hello, dear"

"hello, \

dear"

"hello, " "d" "ear"
```

**定义常量**

在C++中，有两种简单的定义常量的方式
* 使用 `#define` 预处理器
* 使用 `const` 关键字

**#define 预处理器**

下面是使用#define预处理器定义常量的方式
```c++
#define identifier value
```

```c++
#include <iostream>
using namespace std;
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
 
int main()
{
   int area;  
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}
```

**const关键字**

您可以使用 `const` 前缀声明指定类型的常量，如下所示：
```c++
const type variable = value;
```

```c++
#include <iostream>
using namespace std;
 
int main()
{
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}
```

**C++修饰符类型**

C++ 允许在 `char`、`int` 和 `double` 数据类型前放置修饰符。修饰符用于改变基本类型的含义，所以它更能满足各种情境的需求。

* signed
* unsigned
* long
* short

修饰符 `signed`、`unsigned`、`long` 和 `short` 可应用于整型，`signed` 和 `unsigned` 可应用于字符型，`long` 可应用于双精度型。

修饰符 `signed` 和 `unsigned` 也可以作为 `long` 或 `short` 修饰符的前缀。例如：`unsigned long int`。

C++ 允许使用速记符号来声明无符号短整数或无符号长整数。可以不写 `int`，只写单词 `unsigned`、`short` 或 `unsigned`、`long`，`int` 是隐含的。例如，下面的两个语句都声明了无符号整型变量。

```c++
#include <iostream>
using namespace std;
 
/* 
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
   short int i;           // 有符号短整数
   short unsigned int j;  // 无符号短整数
 
   j = 50000;
 
   i = j;
   cout << i << " " << j;
 
   return 0;
}
```

**C++中的类型限定符**

限定符|含义
-|-
const|const 类型的对象在程序执行期间不能被修改改变。
volatile|修饰符 volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
restrict|由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。

**C++存储类**

存储类定义 C++ 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。下面列出 C++ 程序中可用的存储类：
* auto
* register
* static
* extern
* mutable
* thread_local (C++11)

从C++11开始，auto关键字不再是C++存储类说明符，且register关键字被弃用

**auto 存储类**

自 C++ 11 以来，**auto** 关键字用于两种情况：声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。

**register存储类**

**register** 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。

```c++
{
   register int  miles;
}
```

**static存储类**

static存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。

static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。

在 C++ 中，当 static 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。

```c++
#include <iostream>
 
// 函数声明 
void func(void);
 
static int count = 10; /* 全局变量 */
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}
// 函数定义
void func( void )
{
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量 i 为 " << i ;
    std::cout << " , 变量 count 为 " << count << std::endl;
}
```

**extern 存储类**

extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 'extern' 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。

当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。

extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候，

```c++
#include <iostream>
 
int count ;
extern void write_extern();
 
int main()
{
   count = 5;
   write_extern();
}
```

**multable存储类**

mutable 说明符仅适用于类的对象，它允许对象的成员替代常量。也就是说，mutable 成员可以通过 const 成员函数修改。

**thread_local 存储类**

使用 thread_local 说明符声明的变量仅可在它在其上创建的线程上访问。 变量在创建线程时创建，并在销毁线程时销毁。 每个线程都有其自己的变量副本。

thread_local 说明符可以与 static 或 extern 合并。

可以将 thread_local 仅应用于数据声明和定义，thread_local 不能用于函数声明或定义。

以下演示了可以被声明为 thread_local 的变量：
```c++
thread_local int x;  // 命名空间下的全局变量
class X
{
    static thread_local std::string s; // 类的static成员变量
};
static thread_local std::string X::s;  // X::s 是需要定义的
 
void foo()
{
    thread_local std::vector<int> v;  // 本地变量
}
```

**C++运算符**

运算符是一种告诉编译器执行特定的数学或逻辑操作的符号。C++ 内置了丰富的运算符，并提供了以下类型的运算符：

* **算术运算符**

下表显示了 C++ 支持的算术运算符。

假设变量 A 的值为 10，变量 B 的值为 20，则：

运算符|描述|实例
-|-|-
\+	|把两个操作数相加	|A + B 将得到 30
\-	|从第一个操作数中减去第二个操作数	|A - B 将得到 -10
\*	|把两个操作数相乘	A * B 将得到 200
/	|分子除以分母	|B / A 将得到 2
%	|取模运算符，整除后的余数	|B % A 将得到 0
++	|自增运算符，整数值增加 1	|A++ 将得到 11
--	|自减运算符，整数值减少 1	|A-- 将得到 9

```c++
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int b = 10;
   int c;
 
   c = a + b;
   cout << "Line 1 - c 的值是 " << c << endl ;
   c = a - b;
   cout << "Line 2 - c 的值是 " << c << endl ;
   c = a * b;
   cout << "Line 3 - c 的值是 " << c << endl ;
   c = a / b;
   cout << "Line 4 - c 的值是 " << c << endl ;
   c = a % b;
   cout << "Line 5 - c 的值是 " << c << endl ;
 
   int d = 10;   //  测试自增、自减
   c = d++;
   cout << "Line 6 - c 的值是 " << c << endl ;
 
   d = 10;    // 重新赋值
   c = d--;
   cout << "Line 7 - c 的值是 " << c << endl ;
   return 0;
}
```

* **关系运算符**

下表显示了 C++ 支持的关系运算符。

假设变量 A 的值为 10，变量 B 的值为 20，则

运算符|描述|实例
-|-|-
==|检查两个操作数的值是否相等，如果相等则条件为真。	|(A == B) 不为真。
!=	|检查两个操作数的值是否相等，如果不相等则条件为真。	|(A != B) 为真。
\>	|检查左操作数的值是否大于右操作数的值，如果是则条件为真。	|(A > B) 不为真。
<	|检查左操作数的值是否小于右操作数的值，如果是则条件为真。	|(A < B) 为真。
\>=	|检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。	|(A >= B) 不为真。
<=	|检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。	|(A <= B) 为真。

```c++
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   if( a == b )
   {
      cout << "Line 1 - a 等于 b" << endl ;
   }
   else
   {
      cout << "Line 1 - a 不等于 b" << endl ;
   }
   if ( a < b )
   {
      cout << "Line 2 - a 小于 b" << endl ;
   }
   else
   {
      cout << "Line 2 - a 不小于 b" << endl ;
   }
   if ( a > b )
   {
      cout << "Line 3 - a 大于 b" << endl ;
   }
   else
   {
      cout << "Line 3 - a 不大于 b" << endl ;
   }
   /* 改变 a 和 b 的值 */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      cout << "Line 4 - a 小于或等于 b" << endl ;
   }
   if ( b >= a )
   {
      cout << "Line 5 - b 大于或等于 a" << endl ;
   }
   return 0;
}
```

* **逻辑运算符**

下表显示了 C++ 支持的关系逻辑运算符。

假设变量 A 的值为 1，变量 B 的值为 0，则：

运算符|描述|实例
-|-|-
&&|称为逻辑与运算符。如果两个操作数都非零，则条件为真。	|(A && B) 为假。
\|\|	|称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。	|(A \|\| B) 为真。
!	|称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。	|!(A && B) 为真。

```c++
#include <iostream>
using namespace std;
 
int main()
{
   int a = 5;
   int b = 20;
   int c ;
 
   if ( a && b )
   {
      cout << "Line 1 - 条件为真"<< endl ;
   }
   if ( a || b )
   {
      cout << "Line 2 - 条件为真"<< endl ;
   }
   /* 改变 a 和 b 的值 */
   a = 0;
   b = 10;
   if ( a && b )
   {
      cout << "Line 3 - 条件为真"<< endl ;
   }
   else
   {
      cout << "Line 4 - 条件不为真"<< endl ;
   }
   if ( !(a && b) )
   {
      cout << "Line 5 - 条件为真"<< endl ;
   }
   return 0;
}
```

* **位运算符**

位运算符作用于位，并逐位执行操作。&、 | 和 ^ 的真值表如下所示：

p|q|p & q|p \| q|p^q
-|-|-|-|-
0|0|0|0|0
0|1|0|1|1
1|1|1|1|0
1|0|0|1|1

假设如果 A = 60，且 B = 13，现在以二进制格式表示，它们如下所示：

A = 0011 1100

B = 0000 1101

-----------------

A&B = 0000 1100

A|B = 0011 1101

A^B = 0011 0001

~A  = 1100 0011

下表显示了 C++ 支持的位运算符。假设变量 A 的值为 60，变量 B 的值为 13，则：

运算符|描述|实例
-|-|-
&	|如果同时存在于两个操作数中，二进制 AND 运算符复制一位到结果中。	|(A & B) 将得到 12，即为 0000 1100
\|	|如果存在于任一操作数中，二进制 OR 运算符复制一位到结果中。	|(A \| B) 将得到 61，即为 0011 1101
^	|如果存在于其中一个操作数中但不同时存在于两个操作数中，二进制异或运算符复制一位到结果中。	|(A ^ B) 将得到 49，即为 0011 0001
~	|二进制补码运算符是一元运算符，具有"翻转"位效果，即0变成1，1变成0。	|(~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。
<<	|二进制左移运算符。左操作数的值向左移动右操作数指定的位数。	|A << 2 将得到 240，即为 1111 0000
\>\>	|二进制右移运算符。左操作数的值向右移动右操作数指定的位数。	|A >> 2 将得到 15，即为 0000 1111

```c++
#include <iostream>
using namespace std;
 
int main()
{
   unsigned int a = 60;      // 60 = 0011 1100  
   unsigned int b = 13;      // 13 = 0000 1101
   int c = 0;           
 
   c = a & b;             // 12 = 0000 1100
   cout << "Line 1 - c 的值是 " << c << endl ;
 
   c = a | b;             // 61 = 0011 1101
   cout << "Line 2 - c 的值是 " << c << endl ;
 
   c = a ^ b;             // 49 = 0011 0001
   cout << "Line 3 - c 的值是 " << c << endl ;
 
   c = ~a;                // -61 = 1100 0011
   cout << "Line 4 - c 的值是 " << c << endl ;
 
   c = a << 2;            // 240 = 1111 0000
   cout << "Line 5 - c 的值是 " << c << endl ;
 
   c = a >> 2;            // 15 = 0000 1111
   cout << "Line 6 - c 的值是 " << c << endl ;
 
   return 0;
}
```

* **赋值运算符**

下表列出了 C++ 支持的赋值运算符：

运算符|描述|实例
-|-|-
=|简单的赋值运算符，把右边操作数的值赋给左边操作数	|C = A + B 将把 A + B 的值赋给 C
+=	|加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数	|C += A 相当于 C = C + A
-=	|减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数	|C -= A 相当于 C = C - A
*=	|乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数	|C *= A 相当于 C = C * A
/=	|除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数	|C /= A 相当于 C = C / A
%=	|求模且赋值运算符，求两个操作数的模赋值给左边操作数	|C %= A 相当于 C = C % A
<<=	|左移且赋值运算符	|C <<= 2 等同于 C = C << 2
\>\>=	|右移且赋值运算符	C >>= 2 等同于 |C = C >> 2
&=	|按位与且赋值运算符	|C &= 2 等同于 C = C & 2
^=	|按位异或且赋值运算符	|C ^= 2 等同于 C = C ^ 2
\|=	|按位或且赋值运算符	|C \|= 2 等同于 C = C \| 2

```c++
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int c ;
 
   c =  a;
   cout << "Line 1 - =  运算符实例，c 的值 = : " <<c<< endl ;
 
   c +=  a;
   cout << "Line 2 - += 运算符实例，c 的值 = : " <<c<< endl ;
 
   c -=  a;
   cout << "Line 3 - -= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c *=  a;
   cout << "Line 4 - *= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c /=  a;
   cout << "Line 5 - /= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c  = 200;
   c %=  a;
   cout << "Line 6 - %= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c <<=  2;
   cout << "Line 7 - <<= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c >>=  2;
   cout << "Line 8 - >>= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c &=  2;
   cout << "Line 9 - &= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c ^=  2;
   cout << "Line 10 - ^= 运算符实例，c 的值 = : " <<c<< endl ;
 
   c |=  2;
   cout << "Line 11 - |= 运算符实例，c 的值 = : " <<c<< endl ;
 
   return 0;
}
```

* **杂项运算符**

运算符	|描述
-|-
sizeof	|sizeof 运算符返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。
Condition ? X : Y	|条件运算符。如果 Condition 为真 ? 则值为 X : 否则值为 Y。
,	|逗号运算符会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。
.（点）和 ->（箭头）	|成员运算符用于引用类、结构和共用体的成员。
Cast	|强制转换运算符把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。
&	|指针运算符 & 返回变量的地址。例如 &a; 将给出变量的实际地址。
\*	|指针运算符 * 指向一个变量。例如，*var; 将指向变量 var。

**C++中的运算符优先级**

运算符的优先级确定表达式中项的组合。这会影响到一个表达式如何计算。某些运算符比其他运算符有更高的优先级，例如，乘除运算符具有比加减运算符更高的优先级。

例如 x = 7 + 3 * 2，在这里，x 被赋值为 13，而不是 20，因为运算符 * 具有比 + 更高的优先级，所以首先计算乘法 3*2，然后再加上 7。

下表将按运算符优先级从高到低列出各个运算符，具有较高优先级的运算符出现在表格的上面，具有较低优先级的运算符出现在表格的下面。在表达式中，较高优先级的运算符会优先被计算。

类别|运算符|结合性
-|-|-
后缀 	|() [] -> . ++ - -  |从左到右 
一元 	|+ - ! ~ ++ - - (type)* & sizeof 	|从右到左 
乘除 	|* / % |	从左到右 
加减 	|+ - 	|从左到右 
移位 	|<< >> |	从左到右 
关系 	|< <= > >= |	从左到右 
相等 	|== != 	|从左到右 
位与 |AND 	& 	|从左到右 
位异或 |XOR 	^ |	从左到右 
位或 |OR 	| 	|从左到右 
逻辑与 |AND 	&& 	|从左到右 
逻辑或 |OR 	\|\| |	从左到右 
条件 	|?: |	从右到左 
赋值 	|= += -= *= /= %=>>= <<= &= ^= |= 	|从右到左 
逗号 	|, |	从左到右 

```c++
#include <iostream>
using namespace std;
 
int main()
{
   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   int e;
 
   e = (a + b) * c / d;      // ( 30 * 15 ) / 5
   cout << "(a + b) * c / d 的值是 " << e << endl ;
 
   e = ((a + b) * c) / d;    // (30 * 15 ) / 5
   cout << "((a + b) * c) / d 的值是 " << e << endl ;
 
   e = (a + b) * (c / d);   // (30) * (15/5)
   cout << "(a + b) * (c / d) 的值是 " << e << endl ;
 
   e = a + (b * c) / d;     //  20 + (150/5)
   cout << "a + (b * c) / d 的值是 " << e << endl ;
  
   return 0;
}
```

**C++循环**

有的时候，可能需要多次执行同一块代码。一般情况下，语句是顺序执行的：函数中的第一个语句先执行，接着是第二个语句，依此类推。

编程语言提供了允许更为复杂的执行路径的多种控制结构。

**循环类型**

C++ 编程语言提供了以下几种循环类型。点击链接查看每个类型的细节

循环类型|描述
-|-
while 循环	|当给定条件为真时，重复语句或语句组。它会在执行循环主体之前测试条件。
for 循环	|多次执行一个语句序列，简化管理循环变量的代码。
do...while 循环 |	除了它是在循环主体结尾测试条件外，其他与 while 语句类似。
嵌套循环	|可以在 while、for 或 do..while 循环内使用一个或多个循环。

**循环控制语句**

循环控制语句更改执行的正常序列。当执行离开一个范围时，所有在该范围中创建的自动对象都会被销毁。

C++ 提供了下列的控制语句。点击链接查看每个语句的细节

控制语句|描述
-|-
break 语句|	终止 loop 或 switch 语句，程序流将继续执行紧接着 loop 或 switch 的下一条语句。
continue 语句	|引起循环跳过主体的剩余部分，立即重新开始测试条件。
goto 语句	|将控制转移到被标记的语句。但是不建议在程序中使用 goto 语句。

**无限循环**

如果条件永远不为假，则循环将变成无限循环。for 循环在传统意义上可用于实现无限循环。由于构成循环的三个表达式中任何一个都不是必需的，您可以将某些条件表达式留空来构成一个无限循环。

**C++判断**

判断结构要求程序员指定一个或多个要评估或测试的条件，以及条件为真时要执行的语句（必需的）和条件为假时要执行的语句（可选的）。

语句	|描述
-|-
if 语句	|一个 if 语句 由一个布尔表达式后跟一个或多个语句组成。
if...else 语句	|一个 if 语句 后可跟一个可选的 else 语句，else 语句在布尔表达式为假时执行。
嵌套 if 语句	|您可以在一个 if 或 else if 语句内使用另一个 if 或 else if 语句。
switch 语句	|一个 switch 语句允许测试一个变量等于多个值时的情况。
嵌套 switch 语句	|您可以在一个 switch 语句内使用另一个 switch 语句

**?:运算符**

```c++
Exp1 ? Exp2 : Exp3;
```

其中，Exp1、Exp2 和 Exp3 是表达式。请注意，冒号的使用和位置。

? 表达式的值是由 Exp1 决定的。如果 Exp1 为真，则计算 Exp2 的值，结果即为整个 ? 表达式的值。如果 Exp1 为假，则计算 Exp3 的值，结果即为整个 ? 表达式的值。

**C++函数**

函数是一组一起执行一个任务的语句。每个 C++ 程序都至少有一个函数，即主函数 main() ，所有简单的程序都可以定义其他额外的函数。

您可以把代码划分到不同的函数中。如何划分代码到不同的函数中是由您来决定的，但在逻辑上，划分通常是根据每个函数执行一个特定的任务来进行的。

函数声明告诉编译器函数的名称、返回类型和参数。函数定义提供了函数的实际主体。

C++ 标准库提供了大量的程序可以调用的内置函数。例如，函数 strcat() 用来连接两个字符串，函数 memcpy() 用来复制内存到另一个位置。

函数还有很多叫法，比如方法、子例程或程序，等等。

**定义函数**

C++ 中的函数定义的一般形式如下：

```c++
return_type function_name( parameter list )
{
   body of the function
}
```

在 C++ 中，函数由一个函数头和一个函数主体组成。下面列出一个函数的所有组成部分：
* **返回类型**-一个函数可以返回一个值。`return_type` 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，`return_type` 是关键字 `void`。
* **函数名称**-这是函数的实际名称。函数名和参数列表一起构成了函数签名。
* **参数**-参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
* **函数主体**-函数主体包含一组定义函数执行任务的语句。

**函数声明**

函数声明会告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。

函数声明包括以下几个部分：

```c++
return_type function_name( parameter list );
```

```c++
int max(int num1, int num2);
```

**调用函数**

创建 C++ 函数时，会定义函数做什么，然后通过调用函数来完成已定义的任务。

当程序调用函数时，程序控制权会转移给被调用的函数。被调用的函数执行已定义的任务，当函数的返回语句被执行时，或到达函数的结束括号时，会把程序控制权交还给主程序。

调用函数时，传递所需参数，如果函数返回一个值，则可以存储返回值。例如：

```c++
#include <iostream>
using namespace std;
 
// 函数声明
int max(int num1, int num2);
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
   int ret;
 
   // 调用函数来获取最大值
   ret = max(a, b);
 
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
// 函数返回两个数中较大的那个数
int max(int num1, int num2) 
{
   // 局部变量声明
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
```

**函数参数**

如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。

形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。

当调用函数时，有两种向函数传递参数的方式：

调用类型|描述
-|-
传值调用 |该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
指针调用	|该方法把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
引用调用	|该方法把参数的引用复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。

**参数的默认值**

```c++
#include <iostream>
using namespace std;
 
int sum(int a, int b=20)
{
  int result;
 
  result = a + b;
  
  return (result);
}
 
int main ()
{
   // 局部变量声明
   int a = 100;
   int b = 200;
   int result;
 
   // 调用函数来添加值
   result = sum(a, b);
   cout << "Total value is :" << result << endl;
 
   // 再次调用函数
   result = sum(a);
   cout << "Total value is :" << result << endl;
 
   return 0;
}
```

**Lambda 函数与表达式**

C++11 提供了对匿名函数的支持,称为 Lambda 函数(也叫 Lambda 表达式)。

Lambda 表达式把函数看作对象。Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。

Lambda 表达式本质上与函数声明非常类似。Lambda 表达式具体形式如下:

```c++
capture](parameters)->return-type{body}
```

例如：
```c++
[](int x, int y){ return x < y ; }
```

```c++
[](int x, int y) -> int { int z = x + y; return z + x; }
```

如果 lambda 函数没有传回值（例如 void），其返回类型可被完全忽略。

在Lambda表达式内可以访问当前作用域的变量，这是Lambda表达式的闭包（Closure）行为。 与JavaScript闭包不同，C++变量传递有传值和传引用的区别。可以通过前面的[]来指定：

```c++
[]      // 沒有定义任何变量。使用未定义变量会引发错误。
[x, &y] // x以传值方式传入（默认），y以引用方式传入。
[&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
[=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
[&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
[=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
```

另外有一点需要注意。对于[=]或[&]的形式，lambda 表达式可以直接使用 this 指针。但是，对于[]的形式，如果要使用 this 指针，必须显式传入：
```c++
[this]() { this->someFunc(); }();
```

**C++ 数字**

通常，当我们需要用到数字时，我们会使用原始的数据类型，如 int、short、long、float 和 double 等等。这些用于数字的数据类型，其可能的值和数值范围，我们已经在 C++ 数据类型一章中讨论过。

```c++
#include <iostream>
using namespace std;
 
int main ()
{
   // 数字定义
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   
   // 数字赋值
   s = 10;      
   i = 1000;    
   l = 1000000; 
   f = 230.47;  
   d = 30949.374;
   
   // 数字输出
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;
 
   return 0;
}
```

**C++数学运算**

在 C++ 中，除了可以创建各种函数，还包含了各种有用的函数供您使用。这些函数写在标准 C 和 C++ 库中，叫做`内置`函数。您可以在程序中引用这些函数。

C++ 内置了丰富的数学函数，可对各种数字进行运算。下表列出了 C++ 中一些有用的内置的数学函数。

为了利用这些函数，您需要引用数学头文件 `\<cmath\>`。

序号|函数 & 描述
-|-
1	|double cos(double);
该函数返回弧度角（double 型）的余弦。
2	|double sin(double);
该函数返回弧度角（double 型）的正弦。
3	|double tan(double);
该函数返回弧度角（double 型）的正切。
4	|double log(double);
该函数返回参数的自然对数。
5	|double pow(double, double);
假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。
6	|double hypot(double, double);
该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。
7	|double sqrt(double);
该函数返回参数的平方根。
8	|int abs(int);
该函数返回整数的绝对值。
9	|double fabs(double);
该函数返回任意一个十进制数的绝对值。
10	|double floor(double);
该函数返回一个小于或等于传入参数的最大整数。

```c++
#include <iostream>
#include <cmath>
using namespace std;
 
int main ()
{
   // 数字定义
   short  s = 10;
   int    i = -1000;
   long   l = 100000;
   float  f = 230.47;
   double d = 200.374;
 
   // 数学运算
   cout << "sin(d) :" << sin(d) << endl;
   cout << "abs(i)  :" << abs(i) << endl;
   cout << "floor(d) :" << floor(d) << endl;
   cout << "sqrt(f) :" << sqrt(f) << endl;
   cout << "pow( d, 2) :" << pow(d, 2) << endl;
 
   return 0;
}
```

**C++随机数**

在许多情况下，需要生成随机数。关于随机数生成器，有两个相关的函数。一个是 `rand()`，该函数只返回一个伪随机数。生成随机数之前必须先调用 `srand()` 函数。

下面是一个关于生成随机数的简单实例。实例中使用了 `time()` 函数来获取系统时间的秒数，通过调用 `rand()` 函数来生成随机数：

```c++
#include <iostream>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main ()
{
   int i,j;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i = 0; i < 10; i++ )
   {
      // 生成实际的随机数
      j= rand();
      cout <<"随机数： " << j << endl;
   }
 
   return 0;
}
```

**C++数组**

C++ 支持`数组`数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量。

数组的声明并不是声明一个个单独的变量，比如 number0、number1、...、number99，而是声明一个数组变量，比如 numbers，然后使用 numbers[0]、numbers[1]、...、numbers[99] 来代表一个个单独的变量。数组中的特定元素可以通过索引访问。

所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素。

```c++
type arrayName [ arraySize ];
```

```c++
double balance[10];
```

**初始化数组**

在 C++ 中，可以逐个初始化数组，也可以使用一个初始化语句，如下所示：

```c++
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```

大括号 { } 之间的值的数目不能大于我们在数组声明时在方括号 [ ] 中指定的元素数目。

如果您省略掉了数组的大小，数组的大小则为初始化时元素的个数。因此，如果：

```c++
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```

**访问数组元素**

数组元素可以通过数组名称加索引进行访问。元素的索引是放在方括号内，跟在数组名称的后边。例如：
```c++
double salary = balance[9];
```

```c++
#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main ()
{
   int n[ 10 ]; // n 是一个包含 10 个整数的数组
 
   // 初始化数组元素          
   for ( int i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; // 设置元素 i 为 i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // 输出数组中每个元素的值                     
   for ( int j = 0; j < 10; j++ )
   {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}
```
上面的程序使用了 `setw()` 函数来格式化输出。当上面的代码被编译和执行时，它会产生下列结果：

**C++多维数组**

```c++
type name[size1][size2]...[sizeN];
```
```c++
int threedim[5][10][4];
```

**二维数组**

多维数组最简单的形式是二维数组。一个二维数组，在本质上，是一个一维数组的列表。声明一个 x 行 y 列的二维整型数组，形式如下：
```c++
type arrayName [ x ][ y ];
```

**初始化二维数组**

```c++
int a[3][4] = {  
 {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
 {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
 {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
};

int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
```

```c++
#include <iostream>
using namespace std;
 
int main ()
{
   // 一个带有 5 行 2 列的数组
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
 
   // 输出数组中每个元素的值                      
   for ( int i = 0; i < 5; i++ )
      for ( int j = 0; j < 2; j++ )
      {
         cout << "a[" << i << "][" << j << "]: ";
         cout << a[i][j]<< endl;
      }
 
   return 0;
}
```

**vector容器实现的二维数组**

```c++
#include <cstdio> 
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector< vector<int> > arry; //写成arry(5) 可理解为设定大小5行 
    vector<int> d;        //定义一个一维的数组; 
    int i, j, k, n;
    int number;
    
    scanf("%d", &n );
    /*可以这样实现对vector二维的初始化，得到的是n行n列的矩阵*/ 
    for( i=0; i<n; i++ ){ 
        for( j=0; j<n; j++ ){
            scanf("%d", &number );
            d.push_back( number ); 
        }
        sort( d.begin(), d.end() ); //pai xu xuyao头文件algorithm 
        arry.push_back( d );
        //d.clear();        //清空一维的数组 
        d.resize(0);
    }
    /*遍历输出*/ 
    if( arry.empty() )
        printf("0\n");
    else{
        for( i=0; i<arry.size(); i++ ) {
            for( j=0; j<arry[0].size(); j++ ){
                printf("%d ", arry[i][j] );
            }
            printf("\n");
        }
    } 
    
    return 0;
}
```

**C++指向数组的指针**

`balance` 是一个指向 &balance[0] 的指针，即数组 `balance` 的第一个元素的地址。因此，下面的程序片段把 p 赋值为 balance 的第一个元素的地址：

```c++
double *p;
double balance[10];
p = balance;
```

使用数组名作为常量指针是合法的，反之亦然。因此，*(balance + 4) 是一种访问 balance[4] 数据的合法方式。

一旦您把第一个元素的地址存储在 p 中，您就可以使用 *p、*(p+1)、*(p+2) 等来访问数组元素。下面的实例演示了上面讨论到的这些概念：

```c++
#include <iostream>
using namespace std;
 
int main ()
{
   // 带有 5 个元素的双精度浮点型数组
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
 
   p = balance;
 
   // 输出数组中每个元素的值
   cout << "使用指针的数组值 " << endl; 
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }
 
   cout << "使用 balance 作为地址的数组值 " << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(balance + " << i << ") : ";
       cout << *(balance + i) << endl;
   }
 
   return 0;
}
```

C++ 中，将 char * 或 char[] 传递给 cout 进行输出，结果会是整个字符串，如果想要获得字符串的地址（第一个字符的内存地址），可使用以下方法：

强制转化为其他指针（非 char*）。可以是 void *，int *，float *， double * 等。* 使用 &s[0] 不能输出 s[0]（首字符）的地址。因为 &s[0] 将返回 char*，对于 char*（char 指针），cout 会将其作为字符串来处理，向下查找字符并输出直到字符结束 *。

```c++
#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   char  var[MAX] = {'a', 'b', 'c'};
   char  *ptr;
 
   // 指针中的数组地址
   ptr = var;
            
   for (int i = 0; i < MAX; i++)
   {

      cout << "Address of var[" << i << "] = ";
      cout << (int *)ptr << endl;
 
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
 
      // 移动到下一个位置
      ptr++;
   }
   return 0;
}
```

**C++ 传递数组给函数**

C++ 中您可以通过指定不带索引的数组名来传递一个指向数组的指针。

C++ 传数组给一个函数，数组类型自动转换为指针类型，因而传的实际是地址。

如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数。

* 方式1 形式参数是一个指针：

```c++
void myFunction(int *param)
{
.
.
.
}
```

* 方式2 形式参数是一个已定义大小的数组：

```c++
void myFunction(int param[10])
{
.
.
.
}
```

* 方式3 形式参数是一个未定义大小的数组：

```c++
void myFunction(int param[])
{
.
.
.
}
```

**实例**

现在，让我们来看下面这个函数，它把数组作为参数，同时还传递了另一个参数，根据所传的参数，会返回数组中各元素的平均值：

```c++
double getAverage(int arr[], int size)
{
  int    i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
   }
 
  avg = double(sum) / size;
 
  return avg;
}
```
```c++
#include <iostream>
using namespace std;
 
// 函数声明
double getAverage(int arr[], int size);
 
int main ()
{
   // 带有 5 个元素的整型数组
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // 传递一个指向数组的指针作为参数
   avg = getAverage( balance, 5 ) ;
 
   // 输出返回值
   cout << "平均值是：" << avg << endl; 
    
   return 0;
}
```

**C++ 从函数返回数组**

C++ 不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针。

```c++
int * myFunction()
{
.
.
.
}
```

另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
// 要生成和返回随机数的函数
int * getRandom( )
{
  static int r[10];
 
  // 设置种子
  srand( (unsigned)time( NULL ) );
  for (int i = 0; i < 10; ++i)
  {
    r[i] = rand();
    cout << r[i] << endl;
  }
 
  return r;
}
 
// 要调用上面定义函数的主函数
int main ()
{
   // 一个指向整数的指针
   int *p;
 
   p = getRandom();
   for ( int i = 0; i < 10; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }
 
   return 0;
}
```

**C++字符串**

C++ 提供了以下两种类型的字符串表示形式：
* C 风格字符串
* C++ 引入的 string 类类型

**C 风格字符串**

C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词 "Hello" 的字符数多一个

```c++
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

```c++
char greeting[] = "Hello";
```

其实，您不需要把 null 字符放在字符串常量的末尾。C++ 编译器会在初始化数组时，自动把 '\0' 放在字符串的末尾。让我们尝试输出上面的字符串：

```c++
#include <iostream>
 
using namespace std;
 
int main ()
{
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
 
   cout << "Greeting message: ";
   cout << greeting << endl;
 
   return 0;
}
```

```c++
#include <iostream>
#include <cstring>
 
using namespace std;
 
int main ()
{
   char str1[11] = "Hello";
   char str2[11] = "World";
   char str3[11];
   int  len ;
 
   // 复制 str1 到 str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
 
   // 连接 str1 和 str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
 
   // 连接后，str1 的总长度
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
 
   return 0;
}
```

**C++ 中的 String 类**

C++ 标准库提供了 string 类类型，支持上述所有的操作，另外还增加了其他更多的功能。我们将学习 C++ 标准库中的这个类，现在让我们先来看看下面这个实例：

现在您可能还无法透彻地理解这个实例，因为到目前为止我们还没有讨论类和对象。所以现在您可以只是粗略地看下这个实例，等理解了面向对象的概念之后再回头来理解这个实例。

```c++
#include <iostream>
#include <string>
 
using namespace std;
 
int main ()
{
   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;
 
   // 复制 str1 到 str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;
 
   // 连接 str1 和 str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;
 
   // 连接后，str3 的总长度
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
 
   return 0;
}
```

**C++ 指针**

学习 C++ 的指针既简单又有趣。通过指针，可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。所以，想要成为一名优秀的 C++ 程序员，学习指针是很有必要的。

正如您所知道的，每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址。请看下面的实例，它将输出定义的变量地址：

```c++
#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var1;
   char var2[10];
 
   cout << "var1 变量的地址： ";
   cout << &var1 << endl;
 
   cout << "var2 变量的地址： ";
   cout << &var2 << endl;
 
   return 0;
}
```

**指针定义**

指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：

```c++
type *var-name;
```

`type` 是指针的基类型，它必须是一个有效的 C++ 数据类型，`var-name` 是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。但是，在这个语句中，星号是用来指定一个变量是指针。以下是有效的指针声明

所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

使用指针时会频繁进行以下几个操作：定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。下面的实例涉及到了这些操作：

```c++
#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
 
   ip = &var;       // 在指针变量中存储 var 的地址
 
   cout << "Value of var variable: ";
   cout << var << endl;
 
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
 
   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
 
   return 0;
}
```

**C++引用**

引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

**C++引用与指针的比较**

* 不存在空引用。引用必须连接到一块合法的内存。
* 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
* 引用必须在创建时被初始化。指针可以在任何时间被初始化。

**C++ 中创建引用**

试想变量名称是变量附属在内存位置中的标签，您可以把引用当成是变量附属在内存位置中的第二个标签。因此，您可以通过原始变量名称或引用来访问变量的内容。例如：
```c++
int i = 17;
int&  r = i;
```

在这些声明中，& 读作引用。因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"。下面的实例使用了 int 和 double 引用：

```c++
#include <iostream>
 
using namespace std;
 
int main ()
{
   // 声明简单的变量
   int    i;
   double d;
 
   // 声明引用变量
   int&    r = i;
   double& s = d;
   
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
 
   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;
   
   return 0;
}
```

引用可以用于函数参数列表和函数返回值

**C++ 日期 & 时间**

C++ 标准库没有提供所谓的日期类型。C++ 继承了 C 语言用于日期和时间操作的结构和函数。为了使用日期和时间相关的函数和结构，需要在 C++ 程序中引用 `<ctime>` 头文件。

有四个与时间相关的类型：`clock_t`、`time_t`、`size_t` 和 `tm`。类型 `clock_t`、`size_t` 和 `time_t` 能够把系统时间和日期表示为某种整数。

结构类型 tm 把日期和时间以 C 结构的形式保存，tm 结构的定义如下：

```c++
struct tm {
  int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
  int tm_min;   // 分，范围从 0 到 59
  int tm_hour;  // 小时，范围从 0 到 23
  int tm_mday;  // 一月中的第几天，范围从 1 到 31
  int tm_mon;   // 月，范围从 0 到 11
  int tm_year;  // 自 1900 年起的年数
  int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
  int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
  int tm_isdst; // 夏令时
}
```

序号|函数 & 描述
-|-
1	|time_t time(time_t *time);
该函数返回系统的当前日历时间，自 1970 年 1 月 1 日以来经过的秒数。如果系统没有时间，则返回 .1。
2	|char *ctime(const time_t *time);
该返回一个表示当地时间的字符串指针，字符串形式 day month year hours:minutes:seconds year\n\0。
3	|struct tm *localtime(const time_t *time);
该函数返回一个指向表示本地时间的 tm 结构的指针。
4	|clock_t clock(void);
该函数返回程序执行起（一般为程序的开头），处理器时钟所使用的时间。如果时间不可用，则返回 .1。
5	|char * asctime ( const struct tm * time );
该函数返回一个指向字符串的指针，字符串包含了 time 所指向结构中存储的信息，返回形式为：day month date hours:minutes:seconds year\n\0。
6	|struct tm *gmtime(const time_t *time);
该函数返回一个指向 time 的指针，time 为 tm 结构，用协调世界时（UTC）也被称为格林尼治标准时间（GMT）表示。
7	|time_t mktime(struct tm *time);
该函数返回日历时间，相当于 time 所指向结构中存储的时间。
8	|double difftime ( time_t time2, time_t time1 );
该函数返回 time1 和 time2 之间相差的秒数。
9	|size_t strftime();
该函数可用于格式化日期和时间为指定的格式。

**当前日期和时间**

```c++
#include <iostream>
#include <ctime>
 
using namespace std;
 
int main( )
{
   // 基于当前系统的当前日期/时间
   time_t now = time(0);
   
   // 把 now 转换为字符串形式
   char* dt = ctime(&now);
 
   cout << "本地日期和时间：" << dt << endl;
 
   // 把 now 转换为 tm 结构
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "UTC 日期和时间："<< dt << endl;
}
```

**使用结构 tm 格式化时间**

`tm` 结构在 C/C++ 中处理日期和时间相关的操作时，显得尤为重要。tm 结构以 C 结构的形式保存日期和时间。大多数与时间相关的函数都使用了 tm 结构。下面的实例使用了 tm 结构和各种与日期和时间相关的函数。

在练习使用结构之前，需要对 C 结构有基本的了解，并懂得如何使用箭头 -> 运算符来访问结构成员。

```c++
#include <iostream>
#include <ctime>
 
using namespace std;
 
int main( )
{
   // 基于当前系统的当前日期/时间
   time_t now = time(0);
 
   cout << "1970 到目前经过秒数:" << now << endl;
 
   tm *ltm = localtime(&now);
 
   // 输出 tm 结构的各个组成部分
   cout << "年: "<< 1900 + ltm->tm_year << endl;
   cout << "月: "<< 1 + ltm->tm_mon<< endl;
   cout << "日: "<<  ltm->tm_mday << endl;
   cout << "时间: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
}
```

**C++ 基本的输入输出**

C++ 标准库提供了一组丰富的输入/输出功能，我们将在后续的章节进行介绍。本章将讨论 C++ 编程中最基本和最常见的 I/O 操作。

C++ 的 I/O 发生在流中，流是字节序列。如果字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存，这叫做输入操作。如果字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等），这叫做输出操作。

**I/O库头文件**

头文件|函数和描述
-|-
`\<iostream\>`	|该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
`\<iomanip\>`	|该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。
`\<fstream\>`	|该文件为用户控制的文件处理声明服务。我们将在文件和流的相关章节讨论它的细节。

**标准输出流（cout）**

预定义的对象 `cout` 是 `iostream` 类的一个实例。`cout` 对象"连接"到标准输出设备，通常是显示屏。`cout` 是与流插入运算符 << 结合使用的，如下所示：

```c++
#include <iostream>
 
using namespace std;
 
int main( )
{
   char str[] = "Hello C++";
 
   cout << "Value of str is : " << str << endl;
}
```

**标准输入流（cin）**

预定义的对象 `cin` 是 `iostream` 类的一个实例。`cin` 对象附属到标准输入设备，通常是键盘。`cin` 是与流提取运算符 >> 结合使用的，如下所示：

```c++
#include <iostream>
 
using namespace std;
 
int main( )
{
   char name[50];
 
   cout << "请输入您的名称： ";
   cin >> name;
   cout << "您的名称是： " << name << endl;
 
}
```

**标准错误流（cerr）**

预定义的对象 `cerr` 是 `iostream` 类的一个实例。`cerr` 对象附属到标准错误设备，通常也是显示屏，但是 `cerr 对象是非缓冲的，且每个流插入到 `cerr` 都会立即输出。

`cerr` 也是与流插入运算符 << 结合使用的，如下所示：

**标准日志流（clog）**

定义的对象 clog 是 iostream 类的一个实例。clog 对象附属到标准错误设备，通常也是显示屏，但是 clog 对象是缓冲的。这意味着每个流插入到 clog 都会先存储在缓冲在，直到缓冲填满或者缓冲区刷新时才会输出。

clog 也是与流插入运算符 << 结合使用的，如下所示：

```c++
#include <iostream>
 
using namespace std;
 
int main( )
{
   char str[] = "Unable to read....";
 
   clog << "Error message : " << str << endl;
}
```

通过这些小实例，我们无法区分 cout、cerr 和 clog 的差异，但在编写和执行大型程序时，它们之间的差异就变得非常明显。所以良好的编程实践告诉我们，使用 cerr 流来显示错误消息，而其他的日志消息则使用 clog 流来输出。

**C++数据结构**

C/C++ 数组允许定义可存储相同类型数据项的变量，但是结构是 C++ 中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。

结构用于表示一条记录，假设您想要跟踪图书馆中书本的动态，您可能需要跟踪每本书的下列属性：

* Title:标题
* Author:作者
* Subject:类目
* Book ID:书的ID

**定义结构**

为了定义结构，必须使用 `struct` 语句。`struct` 语句定义了一个包含多个成员的新的数据类型，`struct` 语句的格式如下：

```c++
struct type_name {
member_type1 member_name1;
member_type2 member_name2;
member_type3 member_name3;
.
.
} object_names;
```

`type_name` 是结构体类型的名称，`member_type1` `member_name1` 是标准的变量定义，比如 `int i`; 或者 `float f`; 或者其他有效的变量定义。在结构定义的末尾，最后一个分号之前，您可以指定一个或多个结构变量，这是可选的。下面是声明一个结构体类型 `Books`，变量为 `book`：

```c++
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;
```

**访问结构成员**

为了访问结构的成员，我们使用成员访问运算符 `（.）`。成员访问运算符是结构变量名称和我们要访问的结构成员之间的一个句号。

下面的实例演示了结构的用法：

```c++
#include <iostream>
#include <cstring>
 
using namespace std;
 
// 声明一个结构体类型 Books 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2
 
   // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;
 
   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;
 
   // 输出 Book1 信息
   cout << "第一本书标题 : " << Book1.title <<endl;
   cout << "第一本书作者 : " << Book1.author <<endl;
   cout << "第一本书类目 : " << Book1.subject <<endl;
   cout << "第一本书 ID : " << Book1.book_id <<endl;
 
   // 输出 Book2 信息
   cout << "第二本书标题 : " << Book2.title <<endl;
   cout << "第二本书作者 : " << Book2.author <<endl;
   cout << "第二本书类目 : " << Book2.subject <<endl;
   cout << "第二本书 ID : " << Book2.book_id <<endl;
 
   return 0;
}
```

**结构作为函数参数**

您可以把结构作为函数参数，传参方式与其他类型的变量或指针类似。您可以使用上面实例中的方式来访问结构变量：
```c++
#include <iostream>
#include <cstring>
 
using namespace std;
void printBook( struct Books book );
 
// 声明一个结构体类型 Books 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2
 
    // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;
 
   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;
 
   // 输出 Book1 信息
   printBook( Book1 );
 
   // 输出 Book2 信息
   printBook( Book2 );
 
   return 0;
}
void printBook( struct Books book )
{
   cout << "书标题 : " << book.title <<endl;
   cout << "书作者 : " << book.author <<endl;
   cout << "书类目 : " << book.subject <<endl;
   cout << "书 ID : " << book.book_id <<endl;
}
```

**指向结构的指针**

您可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似，如下所示：

```c++
struct Books *struct_pointer;
```

现在，您可以在上述定义的指针变量中存储结构变量的地址。为了查找结构变量的地址，请把 &运算符放在结构名称的前面，如下所示：

为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符，如下所示：

```c++
struct_pointer->title;
```

```c++
#include <iostream>
#include <cstring>
 
using namespace std;
void printBook( struct Books *book );
 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2
 
    // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;
 
   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;
 
   // 通过传 Book1 的地址来输出 Book1 信息
   printBook( &Book1 );
 
   // 通过传 Book2 的地址来输出 Book2 信息
   printBook( &Book2 );
 
   return 0;
}
// 该函数以结构指针作为参数
void printBook( struct Books *book )
{
   cout << "书标题  : " << book->title <<endl;
   cout << "书作者 : " << book->author <<endl;
   cout << "书类目 : " << book->subject <<endl;
   cout << "书 ID : " << book->book_id <<endl;
}
```

**typedef关键字**

```c++
typedef struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}Books;
```

现在，您可以直接使用 Books 来定义 Books 类型的变量，而不需要使用 struct 关键字。下面是实例：

```c++
Books Book1, Book2;
```

可以使用`typedef`关键字来定义非结构类型，如下所示
```c++
typedef long int *pint32;
 
pint32 x, y, z;
```

**C++类&对象**

C++ 在 C 语言的基础上增加了面向对象编程，C++ 支持面向对象程序设计。类是 C++ 的核心特性，通常被称为用户定义的类型。

类用于指定对象的形式，它包含了数据表示法和用于处理数据的方法。类中的数据和方法称为类的成员。函数在一个类中被称为类的成员。

--------------

**C++ 类定义**

定义一个类，本质上是定义一个数据类型的蓝图。这实际上并没有定义任何数据，但它定义了类的名称意味着什么，也就是说，它定义了类的对象包括了什么，以及可以在这个对象上执行哪些操作。

类定义是以关键字 `class` 开头，后跟类的名称。类的主体是包含在一对花括号中。类定义后必须跟着一个分号或一个声明列表。例如，我们使用关键字 `class` 定义 `Box` 数据类型，如下所示：

```c++
class Box
{
   public:
      double length;   // 盒子的长度
      double breadth;  // 盒子的宽度
      double height;   // 盒子的高度
};
```

关键字 `public` 确定了类成员的访问属性。在类对象作用域内，公共成员在类的外部是可访问的。您也可以指定类的成员为 `private` 或 `protected`，这个我们稍后会进行讲解。

**定义 C++ 对象**

类提供了对象的蓝图，所以基本上，对象是根据类来创建的。声明类的对象，就像声明基本类型的变量一样。下面的语句声明了类 Box 的两个对象：

```c++
Box Box1;          // 声明 Box1，类型为 Box
Box Box2;          // 声明 Box2，类型为 Box
```

**访问数据成员**

类的对象的公共数据成员可以使用直接成员访问运算符 (.) 来访问。为了更好地理解这些概念:

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      double length;   // 长度
      double breadth;  // 宽度
      double height;   // 高度
};
 
int main( )
{
   Box Box1;        // 声明 Box1，类型为 Box
   Box Box2;        // 声明 Box2，类型为 Box
   double volume = 0.0;     // 用于存储体积
 
   // box 1 详述
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;
 
   // box 2 详述
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
 
   // box 1 的体积
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Box1 的体积：" << volume <<endl;
 
   // box 2 的体积
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Box2 的体积：" << volume <<endl;
   return 0;
}
```

**类 & 对象详解**

* **类成员函数**-类的成员函数是指那些把定义和原型写在类定义内部的函数，就像类定义中的其他变量一样。类成员函数是类的一个成员，它可以操作类的任意对象，可以访问对象中的所有成员。

```c++
class Box
{
   public:
      double length;         // 长度
      double breadth;        // 宽度
      double height;         // 高度
      double getVolume(void);// 返回体积
};
```

成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义。在类定义中定义的成员函数把函数声明为内联的，即便没有使用 inline 标识符。所以您可以按照如下方式定义 Volume() 函数

```c++
class Box
{
   public:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
   
      double getVolume(void)
      {
         return length * breadth * height;
      }
};
```

也可以在类的外部使用范围解析运算符 :: 定义该函数，如下所示：

```c++
double Box::getVolume(void)
{
    return length * breadth * height;
}
```

在 :: 运算符之前必须使用类名。调用成员函数是在对象上使用点运算符（.），这样它就能操作与该对象相关的数据，如下所示：

```c++
Box myBox;          // 创建一个对象
 
myBox.getVolume();  // 调用该对象的成员函数
```

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      double length;         // 长度
      double breadth;        // 宽度
      double height;         // 高度
 
      // 成员函数声明
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};
 
// 成员函数定义
double Box::getVolume(void)
{
    return length * breadth * height;
}
 
void Box::setLength( double len )
{
    length = len;
}
 
void Box::setBreadth( double bre )
{
    breadth = bre;
}
 
void Box::setHeight( double hei )
{
    height = hei;
}
 
// 程序的主函数
int main( )
{
   Box Box1;                // 声明 Box1，类型为 Box
   Box Box2;                // 声明 Box2，类型为 Box
   double volume = 0.0;     // 用于存储体积
 
   // box 1 详述
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // box 2 详述
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // box 1 的体积
   volume = Box1.getVolume();
   cout << "Box1 的体积：" << volume <<endl;
 
   // box 2 的体积
   volume = Box2.getVolume();
   cout << "Box2 的体积：" << volume <<endl;
   return 0;
}
```

* **类访问修饰符**-类成员可以被定义为 public、private 或 protected。默认情况下是定义为 private

类成员的访问限制是通过在类主体内部对各个区域标记 public、private、protected 来指定的。关键字 `public、private、protected` 称为访问修饰符。

一个类可以有多个 `public`、`protected` 或 `private` 标记区域。每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。成员和类的默认访问修饰符是 `private`。

```c++
class Base {
 
   public:
 
  // 公有成员
 
   protected:
 
  // 受保护成员
 
   private:
 
  // 私有成员
 
};
```

**公有（public）成员**

公有成员在程序中类的外部是可访问的。您可以不使用任何成员函数来设置和获取公有变量的值，如下所示：

```c++
#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      double length;
      void setLength( double len );
      double getLength( void );
};
 
// 成员函数定义
double Line::getLength(void)
{
    return length ;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
// 程序的主函数
int main( )
{
   Line line;
 
   // 设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   // 不使用成员函数设置长度
   line.length = 10.0; // OK: 因为 length 是公有的
   cout << "Length of line : " << line.length <<endl;
   return 0;
}
```

**私有(private)成员**

私有成员变量或函数在类的外部是不可访问的，甚至是不可查看的。只有类和友元函数可以访问私有成员。

默认情况下，类的所有成员都是私有的。例如在下面的类中，width 是一个私有成员，这意味着，如果您没有使用任何访问修饰符，类的成员将被假定为私有成员：

```c++
class Box
{
   double width;
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
};
```

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
 
   private:
      double width;
};
 
// 成员函数定义
double Box::getWidth(void)
{
    return width ;
}
 
void Box::setWidth( double wid )
{
    width = wid;
}
 
// 程序的主函数
int main( )
{
   Box box;
 
   // 不使用成员函数设置长度
   box.length = 10.0; // OK: 因为 length 是公有的
   cout << "Length of box : " << box.length <<endl;
 
   // 不使用成员函数设置宽度
   // box.width = 10.0; // Error: 因为 width 是私有的
   box.setWidth(10.0);  // 使用成员函数设置宽度
   cout << "Width of box : " << box.getWidth() <<endl;
 
   return 0;
}
```

**保护（protected）成员**

保护成员变量或函数与私有成员十分相似，但有一点不同，保护成员在派生类（即子类）中是可访问的。

在下一个章节中，您将学习到派生类和继承的知识。现在您可以看到下面的实例中，我们从父类 Box 派生了一个子类 smallBox。

下面的实例与前面的实例类似，在这里 width 成员可被派生类 smallBox 的任何成员函数访问。

```c++
#include <iostream>
using namespace std;
 
class Box
{
   protected:
      double width;
};
 
class SmallBox:Box // SmallBox 是派生类
{
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};
 
// 子类的成员函数
double SmallBox::getSmallWidth(void)
{
    return width ;
}
 
void SmallBox::setSmallWidth( double wid )
{
    width = wid;
}
 
// 程序的主函数
int main( )
{
   SmallBox box;
 
   // 使用成员函数设置宽度
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;
 
   return 0;
}
```

**继承中的特点**

有public, protected, private三种继承方式，它们相应地改变了基类成员的访问属性。

1. `public 继承：`:基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private
2. `protected 继承：`:基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private
3. `private 继承：`:基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private

注意：*private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；protected 成员可以被派生类访问。*

```c++
#include<iostream>
#include<assert.h>
using namespace std;
 
class A{
public:
  int a;
  A(){
    a1 = 1;
    a2 = 2;
    a3 = 3;
    a = 4;
  }
  void fun(){
    cout << a << endl;    //正确
    cout << a1 << endl;   //正确
    cout << a2 << endl;   //正确
    cout << a3 << endl;   //正确
  }
public:
  int a1;
protected:
  int a2;
private:
  int a3;
};
class B : public A{
public:
  int a;
  B(int i){
    A();
    a = i;
  }
  void fun(){
    cout << a << endl;       //正确，public成员
    cout << a1 << endl;       //正确，基类的public成员，在派生类中仍是public成员。
    cout << a2 << endl;       //正确，基类的protected成员，在派生类中仍是protected可以被派生类访问。
    cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
  }
};
int main(){
  B b(10);
  cout << b.a << endl;
  cout << b.a1 << endl;   //正确
  cout << b.a2 << endl;   //错误，类外不能访问protected成员
  cout << b.a3 << endl;   //错误，类外不能访问private成员
  system("pause");
  return 0;
}
```

* **构造函数 & 析构函数**-类的构造函数是一种特殊的函数，在创建一个新的对象时调用。类的析构函数也是一种特殊的函数，在删除所创建的对象时调用

```c++
#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // 这是构造函数
 
   private:
      double length;
};
 
// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}
// 程序的主函数
int main( )
{
   Line line;
 
   // 设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
```

**带参数的构造函数**

默认的构造函数没有任何参数，但如果需要，构造函数也可以带有参数。这样在创建对象时就会给对象赋初始值，如下面的例子所示：

```c++
#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // 这是构造函数
 
   private:
      double length;
};
 
// 成员函数定义，包括构造函数
Line::Line( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}
// 程序的主函数
int main( )
{
   Line line(10.0);
 
   // 获取默认设置的长度
   cout << "Length of line : " << line.getLength() <<endl;
   // 再次设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
```

**使用初始化列表来初始化字段**

```c++
Line::Line( double len): length(len)
{
    cout << "Object is being created, length = " << len << endl;
}

Line::Line( double len)
{
    length = len;
    cout << "Object is being created, length = " << len << endl;
}
```

假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，同理地，可以使用上面的语法，只需要在不同的字段使用逗号进行分隔，如下所示：

```c++
C::C( double a, double b, double c): X(a), Y(b), Z(c)
{
  ....
}
```

**类的析构函数**

类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。

析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。

下面的实例有助于更好地理解析构函数的概念：

```c++
#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // 这是构造函数声明
      ~Line();  // 这是析构函数声明
 
   private:
      double length;
};
 
// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}
// 程序的主函数
int main( )
{
   Line line;
 
   // 设置长度
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
```

* **C++ 拷贝构造函数**-拷贝构造函数，是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象.构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。构造函数可用于为某些成员变量设置初始值。

拷贝构造函数的用途：
* 通过使用另一个同类型的对象来初始化新创建的对象。
* 复制对象把它作为参数传递给函数。
* 复制对象，并从函数返回这个对象。

如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。拷贝构造函数的最常见形式如下：

```c++
classname (const classname &obj) {
   // 构造函数的主体
}
```

```c++
#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      int getLength( void );
      Line( int len );             // 简单的构造函数
      Line( const Line &obj);      // 拷贝构造函数
      ~Line();                     // 析构函数
 
   private:
      int *ptr;
};
 
// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
 
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}
 
Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}
 
void display(Line obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;
}
 
// 程序的主函数
int main( )
{
   Line line(10);
 
   display(line);
 
   return 0;
}
```

```c++
#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      int getLength( void );
      Line( int len );             // 简单的构造函数
      Line( const Line &obj);      // 拷贝构造函数
      ~Line();                     // 析构函数
 
   private:
      int *ptr;
};
 
// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
 
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}
 
Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}
 
void display(Line obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;
}
 
// 程序的主函数
int main( )
{
   Line line1(10);
 
   Line line2 = line1; // 这里也调用了拷贝构造函数
 
   display(line1);
   display(line2);
 
   return 0;
}
```

* **C++ 友元函数**-友元函数可以访问类的 private 和 protected 成员

尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。

友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。

如果要声明函数为一个类的友元，需要在类定义中该函数原型前使用关键字 friend，如下所示：

```c++
class Box
{
   double width;
public:
   double length;
   friend void printWidth( Box box );
   void setWidth( double wid );
};
```

声明类 ClassTwo 的所有成员函数作为类 ClassOne 的友元，需要在类 ClassOne 的定义中放置如下声明：

```c++
friend class ClassTwo;
```

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};

// 成员函数定义
void Box::setWidth( double wid )
{
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth( Box box )
{
   /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
   cout << "Width of box : " << box.width <<endl;
}
 
// 程序的主函数
int main( )
{
   Box box;
 
   // 使用成员函数设置宽度
   box.setWidth(10.0);
   
   // 使用友元函数输出宽度
   printWidth( box );
 
   return 0;
}
```

* **C++ 内联函数**-通过内联函数，编译器试图在调用函数的地方扩展函数体中的代码

C++ 内联函数是通常与类一起使用。如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。

对内联函数进行任何修改，都需要重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将会继续使用旧的函数。

如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字 inline，在调用函数之前需要对函数进行定义。如果已定义的函数多于一行，编译器会忽略 inline 限定符。

在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。

下面是一个实例，使用内联函数来返回两个数中的最大值：

```c++
#include <iostream>
 
using namespace std;

inline int Max(int x, int y)
{
   return (x > y)? x : y;
}

// 程序的主函数
int main( )
{

   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   return 0;
}
```

Tip： 只有当函数只有 10 行甚至更少时才将其定义为内联函数.

定义: 当函数被声明为内联函数之后, 编译器会将其内联展开, 而不是按通常的函数调用机制进行调用.

优点: 当函数体比较小的时候, 内联该函数可以令目标代码更加高效. 对于存取函数以及其它函数体比较短, 性能关键的函数, 鼓励使用内联.

缺点: 滥用内联将导致程序变慢. 内联可能使目标代码量或增或减, 这取决于内联函数的大小. 内联非常短小的存取函数通常会减少代码大小, 但内联一个相当大的函数将戏剧性的增加代码大小. 现代处理器由于更好的利用了指令缓存, 小巧的代码往往执行更快。

结论: 一个较为合理的经验准则是, 不要内联超过 10 行的函数. 谨慎对待析构函数, 析构函数往往比其表面看起来要更长, 因为有隐含的成员和基类析构函数被调用!

另一个实用的经验准则: 内联那些包含循环或 switch 语句的函数常常是得不偿失 (除非在大多数情况下, 这些循环或 switch 语句从不被执行).

有些函数即使声明为内联的也不一定会被编译器内联, 这点很重要; 比如虚函数和递归函数就不会被正常内联. 通常, 递归函数不应该声明成内联函数.(递归调用堆栈的展开并不像循环那么简单, 比如递归层数在编译时可能是未知的, 大多数编译器都不支持内联递归函数). 虚函数内联的主要原因则是想把它的函数体放在类定义内, 为了图个方便, 抑或是当作文档描述其行为, 比如精短的存取函数.

* **C++ 中的 this 指针**-每个对象都有一个特殊的指针 this，它指向对象本身

在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址。this 指针是所有成员函数的隐含参数。因此，在成员函数内部，它可以用来指向调用对象。

友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。

下面的实例有助于更好地理解 this 指针的概念：

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};
 
int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
 
   if(Box1.compare(Box2))
   {
      cout << "Box2 is smaller than Box1" <<endl;
   }
   else
   {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
   return 0;
}
```


* **C++ 中指向类的指针**-指向类的指针方式如同指向结构的指针。实际上，类可以看成是一个带有函数的结构

一个指向 C++ 类的指针与指向结构的指针类似，访问指向类的指针的成员，需要使用成员访问运算符 ->，就像访问指向结构的指针一样。与所有的指针一样，您必须在使用指针之前，对指针进行初始化。

下面的实例有助于更好地理解指向类的指针的概念：

```c++
#include <iostream>
 
using namespace std;

class Box
{
   public:
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
   Box *ptrBox;                // Declare pointer to a class.

   // 保存第一个对象的地址
   ptrBox = &Box1;

   // 现在尝试使用成员访问运算符来访问成员
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;

   // 保存第二个对象的地址
   ptrBox = &Box2;

   // 现在尝试使用成员访问运算符来访问成员
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
  
   return 0;
}
```

* **C++ 类的静态成员**-类的数据成员和函数成员都可以被声明为静态的

我们可以使用 static 关键字来把类成员定义为静态的。当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。

静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化，如下面的实例所示。

下面的实例有助于更好地理解静态成员数据的概念：

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};
 
// 初始化类 Box 的静态成员
int Box::objectCount = 0;
 
int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2
 
   // 输出对象的总数
   cout << "Total objects: " << Box::objectCount << endl;
 
   return 0;
}
```

**静态成员函数**

如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。

静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。

静态成员函数有一个类范围，他们不能访问类的 this 指针。您可以使用静态成员函数来判断类的某些对象是否已被创建。

-----------------

*静态成员函数与普通成员函数的区别：*
* 静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
* 普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。

```c++
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      static int getCount()
      {
         return objectCount;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};
 
// 初始化类 Box 的静态成员
int Box::objectCount = 0;
 
int main(void)
{
  
   // 在创建对象之前输出对象的总数
   cout << "Inital Stage Count: " << Box::getCount() << endl;
 
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2
 
   // 在创建对象之后输出对象的总数
   cout << "Final Stage Count: " << Box::getCount() << endl;
 
   return 0;
}
```

**C++继承**

面向对象程序设计中最重要的一个概念是继承。继承允许我们依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。这样做，也达到了重用代码功能和提高执行时间的效果。

当创建一个类时，您不需要重新编写新的数据成员和成员函数，只需指定新建的类继承了一个已有的类的成员即可。这个已有的类称为基类，新建的类称为派生类。

继承代表了 is a 关系。例如，哺乳动物是动物，狗是哺乳动物，因此，狗是动物，等等。

**基类 & 派生类**

一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。定义一个派生类，我们使用一个类派生列表来指定基类。类派生列表以一个或多个基类命名，形式如下：

```c++
class derived-class: access-specifier base-class
```

其中，访问修饰符 access-specifier 是 `public`、`protected` 或 `private` 其中的一个，base-class 是之前定义过的某个类的名称。如果未使用访问修饰符 access-specifier，则默认为 private。

假设有一个基类 `Shape`，`Rectangle` 是它的派生类，如下所示：

```c++
#include <iostream>
 
using namespace std;
 
// 基类
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};
 
// 派生类
class Rectangle: public Shape
{
   public:
      int getArea()
      { 
         return (width * height); 
      }
};
 
int main(void)
{
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
 
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
 
   return 0;
}
```

**访问控制和继承**

派生类可以访问基类中所有的非私有成员。因此基类成员如果不想被派生类的成员函数访问，则应在基类中声明为 private。

我们可以根据访问权限总结出不同的访问类型，如下所示：

访问	|public	|protected	|private
-|-|-|-
同一个类	|yes	|yes	|yes
派生类	|yes	|yes	|no
外部的类	|yes	|no	|no

一个派生类继承了所有的基类方法，但下列情况除外：
* 基类的构造函数、析构函数和拷贝构造函数
* 基类的重载运算符
* 基类的友元函数

**继承类型**

当一个类派生自基类，该基类可以被继承为 public、protected 或 private 几种类型。继承类型是通过上面讲解的访问修饰符 access-specifier 来指定的。

我们几乎不使用 protected 或 private 继承，通常使用 public 继承。当使用不同类型的继承时，遵循以下几个规则：

* **公有继承（public）：**-当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
* **保护继承（protected）：**-当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
* **私有继承（private）：**-当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。

**多继承**

多继承即一个子类可以有多个父类，它继承了多个父类的特性。

C++ 类可以从多个类继承成员，语法如下：
```c++
class <派生类名>:<继承方式1><基类名1>,<继承方式2><基类名2>,…
{
<派生类类体>
};
```

其中，访问修饰符继承方式是 `public`、`protected` 或 `private` 其中的一个，用来修饰每个基类，各个基类之间用逗号分隔，

```c++
#include <iostream>
 
using namespace std;
 
// 基类 Shape
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};
 
// 基类 PaintCost
class PaintCost 
{
   public:
      int getCost(int area)
      {
         return area * 70;
      }
};
 
// 派生类
class Rectangle: public Shape, public PaintCost
{
   public:
      int getArea()
      { 
         return (width * height); 
      }
};
 
int main(void)
{
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
 
   area = Rect.getArea();
   
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
 
   // 输出总花费
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
 
   return 0;
}
```

**C++ 重载运算符和重载函数**

C++ 允许在同一作用域中的某个函数和运算符指定多个定义，分别称为**函数重载**和**运算符重载**。

重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，但是它们的参数列表和定义（实现）不相同。

当调用一个重载函数或重载运算符时，编译器通过把您所使用的参数类型与定义中的参数类型进行比较，决定选用最合适的定义。选择最合适的重载函数或重载运算符的过程，称为重载决策。

**C++中的函数重载**

在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。不能仅通过返回类型的不同来重载函数。

下面的实例中，同名函数 print() 被用于输出不同的数据类型：

```c++
#include <iostream>
using namespace std;
 
class printData
{
   public:
      void print(int i) {
        cout << "整数为: " << i << endl;
      }
 
      void print(double  f) {
        cout << "浮点数为: " << f << endl;
      }
 
      void print(char c[]) {
        cout << "字符串为: " << c << endl;
      }
};
 
int main(void)
{
   printData pd;
 
   // 输出整数
   pd.print(5);
   // 输出浮点数
   pd.print(500.263);
   // 输出字符串
   char c[] = "Hello C++";
   pd.print(c);
 
   return 0;
}
```

**C++ 中的运算符重载**

可以重定义或重载大部分 C++ 内置的运算符。这样，您就能使用自定义类型的运算符。

重载的运算符是带有特殊名称的函数，函数名是由关键字 operator 和其后要重载的运算符符号构成的。与其他函数一样，重载运算符有一个返回类型和一个参数列表。

```c++
Box operator+(const Box&);
```

声明加法运算符用于把两个 Box 对象相加，返回最终的 Box 对象。大多数的重载运算符可被定义为普通的非成员函数或者被定义为类成员函数。如果我们定义上面的函数为类的非成员函数，那么我们需要为每次操作传递两个参数，如下所示：

```c++
Box operator+(const Box&, const Box&);
```

```c++
#include <iostream>
using namespace std;
 
class Box
{
   public:
 
      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }
 
      void setBreadth( double bre )
      {
          breadth = bre;
      }
 
      void setHeight( double hei )
      {
          height = hei;
      }
      // 重载 + 运算符，用于把两个 Box 对象相加
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};
// 程序的主函数
int main( )
{
   Box Box1;                // 声明 Box1，类型为 Box
   Box Box2;                // 声明 Box2，类型为 Box
   Box Box3;                // 声明 Box3，类型为 Box
   double volume = 0.0;     // 把体积存储在该变量中
 
   // Box1 详述
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // Box2 详述
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // Box1 的体积
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // Box2 的体积
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // 把两个对象相加，得到 Box3
   Box3 = Box1 + Box2;
 
   // Box3 的体积
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
 
   return 0;
}
```

**可重载运算符/不可重载运算符**

运算符|列表
-|-
双目算术运算符	|+ (加)，-(减)，*(乘)，/(除)，% (取模)
关系运算符	|==(等于)，!= (不等于)，< (小于)，> (大于>，<=(小于等于)，>=(大于等于)
逻辑运算符	|\|\|(逻辑或)，&&(逻辑与)，!(逻辑非)
单目运算符	|+ (正)，-(负)，*(指针)，&(取地址)
自增自减运算符	|++(自增)，--(自减)
位运算符	|\| (按位或)，& (按位与)，~(按位取反)，^(按位异或),，<< (左移)，>>(右移)
赋值运算符|	=, +=, -=, *=, /= , % = , &=, |=, ^=, <<=, >>=
空间申请与释放	|new, delete, new[ ] , delete[]
其他运算符	|()(函数调用)，->(成员访问)，,(逗号)，\[\](下标)

下面是不可重载的运算符列表：
* `.`:成员访问运算符
* `.*,->*`:成员指针访问运算符
* `::`:域运算符
* `sizeof`:长度运算符
* `?:`:条件运算符
* `#`:预处理符号

*运算符重载注意*

* 运算重载符不可以改变语法结构
* 运算重载符不可以改变操作数的个数
* 运算重载符不可以改变优先级
* 运算重载符不可以改变结合性

类重载、覆盖、重定义之间的区别：

重载指的是函数具有的不同的参数列表，而函数名相同的函数。重载要求参数列表必须不同，比如参数的类型不同、参数的个数不同、参数的顺序不同。如果仅仅是函数的返回值不同是没办法重载的，因为重载要求参数列表必须不同。（发生在同一个类里）

 覆盖是存在类中，子类重写从基类继承过来的函数。被重写的函数不能是static的。必须是virtual的。但是函数名、返回值、参数列表都必须和基类相同（发生在基类和子类）

 重定义也叫做隐藏，子类重新定义父类中有相同名称的非虚函数 ( 参数列表可以不同 ) 。（发生在基类和子类）

**C++多态**

多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。

C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。

下面的实例中，基类 Shape 被派生为两个类，如下所示：

```c++
#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// 程序的主函数
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   // 存储矩形的地址
   shape = &rec;
   // 调用矩形的求面积函数 area
   shape->area();
 
   // 存储三角形的地址
   shape = &tri;
   // 调用三角形的求面积函数 area
   shape->area();
   
   return 0;
}
```

**虚函数**

`虚函数` 是在基类中使用关键字 `virtual` 声明的函数。在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。

我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为`动态链接`，或`后期绑定`。

**纯虚函数**

您可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，但是您在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数。

我们可以把基类中的虚函数 area() 改写如下：
```c++
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      // pure virtual function
      virtual int area() = 0;
};
```

**C++数据抽象**

数据抽象是指，只向外界提供关键信息，并隐藏其后台的实现细节，即只表现必要的信息而不呈现细节。

数据抽象是一种依赖于接口和实现分离的编程（设计）技术。

让我们举一个现实生活中的真实例子，比如一台电视机，您可以打开和关闭、切换频道、调整音量、添加外部组件（如喇叭、录像机、DVD 播放器），但是您不知道它的内部实现细节，也就是说，您并不知道它是如何通过缆线接收信号，如何转换信号，并最终显示在屏幕上。

因此，我们可以说电视把它的内部实现和外部接口分离开了，您无需知道它的内部实现原理，直接通过它的外部接口（比如电源按钮、遥控器、声量控制器）就可以操控电视。

现在，让我们言归正传，就 C++ 编程而言，C++ 类为数据抽象提供了可能。它们向外界提供了大量用于操作对象数据的公共方法，也就是说，外界实际上并不清楚类的内部实现。

例如，您的程序可以调用 `sort()` 函数，而不需要知道函数中排序数据所用到的算法。实际上，函数排序的底层实现会因库的版本不同而有所差异，只要接口不变，函数调用就可以照常工作。

在 C++ 中，我们使用类来定义我们自己的抽象数据类型（ADT）。可以使用类 `iostrea`m 的 `cout` 对象来输出数据到标准输出，

**访问标签强制抽象**

在 C++ 中，我们使用访问标签来定义类的抽象接口。一个类可以包含零个或多个访问标签：
* 使用公共标签定义的成员都可以访问该程序的所有部分。一个类型的数据抽象视图是由它的公共成员来定义的
* 使用私有标签定义的成员无法访问到使用类的代码。私有部分对使用类型的代码隐藏了实现细节

访问标签出现的频率没有限制。每个访问标签指定了紧随其后的成员定义的访问级别。指定的访问级别会一直有效，直到遇到下一个访问标签或者遇到类主体的关闭右括号为止

------------

**数据抽象的好处**

数据抽象有两个重要的优势：
* 类的内部受到保护，不会因无意的用户级错误导致对象状态受损
* 类实现可能随着时间的推移而发生变化，以便应对不断变化的需求，或者应对那些要求不改变用户级代码的错误报告

如果只在类的私有部分定义数据成员，编写该类的作者就可以随意更改数据。如果实现发生改变，则只需要检查类的代码，看看这个改变会导致哪些影响。如果数据是公有的，则任何直接访问旧表示形式的数据成员的函数都可能受到影响

**数据抽象的实例**

```c++
#include <iostream>
using namespace std;
 
class Adder{
   public:
      // 构造函数
      Adder(int i = 0)
      {
        total = i;
      }
      // 对外的接口
      void addNum(int number)
      {
          total += number;
      }
      // 对外的接口
      int getTotal()
      {
          return total;
      };
   private:
      // 对外隐藏的数据
      int total;
};
int main( )
{
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);
 
   cout << "Total " << a.getTotal() << endl;
   return 0;
}
```

**C++数据封装**

所有的 C++ 程序都有以下两个基本要素：

* **程序语句（代码）**-这是程序中执行动作的部分，它们被称为函数
* **程序数据**-数据是程序的信息，会受到程序函数的影响

封装是面向对象编程中的把数据和操作数据的函数绑定在一起的一个概念，这样能避免受到外界的干扰和误用，从而确保了安全。数据封装引申出了另一个重要的 OOP 概念，即数据隐藏。

数据封装是一种把数据和操作数据的函数捆绑在一起的机制，数据抽象是一种仅向用户暴露接口而把具体的实现细节隐藏起来的机制。

C++ 通过创建类来支持封装和数据隐藏（public、protected、private）。我们已经知道，类包含私有成员（private）、保护成员（protected）和公有成员（public）成员。默认情况下，在类中定义的所有项目都是私有的。例如：
```c++
class Box
{
   public:
      double getVolume(void)
      {
         return length * breadth * height;
      }
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};
```

**数据封装的实例**

```c++
#include <iostream>
using namespace std;
 
class Adder{
   public:
      // 构造函数
      Adder(int i = 0)
      {
        total = i;
      }
      // 对外的接口
      void addNum(int number)
      {
          total += number;
      }
      // 对外的接口
      int getTotal()
      {
          return total;
      };
   private:
      // 对外隐藏的数据
      int total;
};
int main( )
{
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);
 
   cout << "Total " << a.getTotal() <<endl;
   return 0;
}
```

C++中, 虚函数可以为private, 并且可以被子类覆盖（因为虚函数表的传递），但子类不能调用父类的private虚函数。虚函数的重载性和它声明的权限无关。

一个成员函数被定义为private属性，标志着其只能被当前类的其他成员函数(或友元函数)所访问。而virtual修饰符则强调父类的成员函数可以在子类中被重写，因为重写之时并没有与父类发生任何的调用关系，故而重写是被允许的。

编译器不检查虚函数的各类属性。被virtual修饰的成员函数，不论他们是private、protect或是public的，都会被统一的放置到虚函数表中。对父类进行派生时，子类会继承到拥有相同偏移地址的虚函数表（相同偏移地址指，各虚函数相对于VPTR指针的偏移），则子类就会被允许对这些虚函数进行重载。且重载时可以给重载函数定义新的属性，例如public，其只标志着该重载函数在该子类中的访问属性为public，和父类的private属性没有任何关系！

纯虚函数可以设计成私有的，不过这样不允许在本类之外的非友元函数中直接调用它，子类中只有覆盖这种纯虚函数的义务，却没有调用它的权利。

**C++接口(抽象类)**

接口描述了类的行为和功能，而不需要完成类的特定实现。

C++ 接口是使用抽象类来实现的，抽象类与数据抽象互不混淆，数据抽象是一个把实现细节与相关的数据分离开的概念。

如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的，如下所示：

```c++
class Box
{
   public:
      // 纯虚函数
      virtual double getVolume() = 0;
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};
```

设计`抽象类`（通常称为 ABC）的目的，是为了给其他类提供一个可以继承的适当的基类。抽象类不能被用于实例化对象，它只能作为接口使用。如果试图实例化一个抽象类的对象，会导致编译错误。

因此，如果一个 ABC 的子类需要被实例化，则必须实现每个虚函数，这也意味着 C++ 支持使用 ABC 声明接口。如果没有在派生类中重写纯虚函数，就尝试实例化该类的对象，会导致编译错误。

可用于实例化对象的类被称为`具体类`

**抽象类的实例**

```c++
#include <iostream>
 
using namespace std;
 
// 基类
class Shape 
{
public:
   // 提供接口框架的纯虚函数
   virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};
 
// 派生类
class Rectangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height); 
   }
};
class Triangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height)/2; 
   }
};
 
int main(void)
{
   Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   // 输出对象的面积
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
 
   Tri.setWidth(5);
   Tri.setHeight(7);
   // 输出对象的面积
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
 
   return 0;
}
```

**设计策略**

面向对象的系统可能会使用一个抽象基类为所有的外部应用程序提供一个适当的、通用的、标准化的接口。然后，派生类通过继承抽象基类，就把所有类似的操作都继承下来。

外部应用程序提供的功能（即公有函数）在抽象基类中是以纯虚函数的形式存在的。这些纯虚函数在相应的派生类中被实现。

这个架构也使得新的应用程序可以很容易地被添加到系统中，即使是在系统被定义之后依然可以如此。

**C++ override**

C++11 中的 override 关键字，可以显式的在派生类中声明，哪些成员函数需要被重写，如果没被重写，则编译器会报错。

```c++
class Derived: public Base {
public:
    virtual void mf1() override;
    virtual void mf2(unsigned int x) override;
    virtual void mf3() && override;
    virtual void mf4() const override;
};
```

**C++文件和流**

到目前为止，我们已经使用了 `iostream` 标准库，它提供了 `cin` 和 `cout` 方法分别用于从标准输入读取流和向标准输出写入流。

本教程介绍如何从文件读取流和向文件写入流。这就需要用到 C++ 中另一个标准库 `fstream`，它定义了三个新的数据类型：

数据类型	|描述
-|-
ofstream	|该数据类型表示输出文件流，用于创建文件并向文件写入信息。
ifstream	|该数据类型表示输入文件流，用于从文件读取信息。
fstream	|该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。

**打开文件**

在从文件读取信息或者向文件写入信息之前，必须先打开文件。ofstream 和 fstream 对象都可以用来打开文件进行写操作，如果只需要打开文件进行读操作，则使用 ifstream 对象。

下面是 open() 函数的标准语法，open() 函数是 fstream、ifstream 和 ofstream 对象的一个成员。

```c++
void open(const char *filename, ios::openmode mode);
```

在这里，open() 成员函数的第一参数指定要打开的文件的名称和位置，第二个参数定义文件被打开的模式。

模式标志	|描述
-|-
ios::app	|追加模式。所有写入都追加到文件末尾。
ios::ate	|文件打开后定位到文件末尾。
ios::in	|打开文件用于读取。
ios::out	|打开文件用于写入。
ios::trunc	|如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。

**关闭文件**

当 C++ 程序终止时，它会自动关闭刷新所有流，释放所有分配的内存，并关闭所有打开的文件。但程序员应该养成一个好习惯，在程序终止前关闭所有打开的文件。

下面是 close() 函数的标准语法，close() 函数是 fstream、ifstream 和 ofstream 对象的一个成员

```c++
void close();
```

**写入文件**

在 C++ 编程中，我们使用流插入运算符（ << ）向文件写入信息，就像使用该运算符输出信息到屏幕上一样。唯一不同的是，在这里您使用的是 ofstream 或 fstream 对象，而不是 cout 对象。

**读取文件**

在 C++ 编程中，我们使用流提取运算符（ >> ）从文件读取信息，就像使用该运算符从键盘输入信息一样。唯一不同的是，在这里您使用的是 `ifstream` 或 `fstream` 对象，而不是 `cin` 对象

**读取 & 写入实例**

```c++
#include <fstream>
#include <iostream>
using namespace std;
 
int main ()
{
    
   char data[100];
 
   // 以写模式打开文件
   ofstream outfile;
   outfile.open("afile.dat");
 
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);
 
   // 向文件写入用户输入的数据
   outfile << data << endl;
 
   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // 再次向文件写入用户输入的数据
   outfile << data << endl;
 
   // 关闭打开的文件
   outfile.close();
 
   // 以读模式打开文件
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 
 
   // 在屏幕上写入数据
   cout << data << endl;
   
   // 再次从文件读取数据，并显示它
   infile >> data; 
   cout << data << endl; 
 
   // 关闭打开的文件
   infile.close();
 
   return 0;
}
```

**文件位置指针**

`istream` 和 `ostream` 都提供了用于重新定位文件位置指针的成员函数。这些成员函数包括关于 `istream` 的 `seekg`（"seek get"）和关于 ostream 的 seekp（"seek put"）。

seekg 和 seekp 的参数通常是一个长整型。第二个参数可以用于指定查找方向。查找方向可以是 `ios::beg`（默认的，从流的开头开始定位），也可以是 `ios::cur`（从流的当前位置开始定位），也可以是 `ios::end`（从流的末尾开始定位）。

文件位置指针是一个整数值，指定了从文件的起始位置到指针所在位置的字节数。下面是关于定位 "get" 文件位置指针的实例：

```c++
// 定位到 fileObject 的第 n 个字节（假设是 ios::beg）
fileObject.seekg( n );
 
// 把文件的读指针从 fileObject 当前位置向后移 n 个字节
fileObject.seekg( n, ios::cur );
 
// 把文件的读指针从 fileObject 末尾往回移 n 个字节
fileObject.seekg( n, ios::end );
 
// 定位到 fileObject 的末尾
fileObject.seekg( 0, ios::end );
```

**C++ 异常处理**

异常是程序在执行期间产生的问题。C++ 异常是指在程序运行时发生的特殊情况，比如尝试除以零的操作。

异常提供了一种转移程序控制权的方式。C++ 异常处理涉及到三个关键字：`try`、`catch`、`throw`。

* `throw`: 当问题出现时，程序会抛出一个异常。这是通过使用 `throw` 关键字来完成的
* `catch`: 在您想要处理问题的地方，通过异常处理程序捕获异常。`catch` 关键字用于捕获异常
* `try`: `try` 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块

```c++
try
{
   // 保护代码
}catch( ExceptionName e1 )
{
   // catch 块
}catch( ExceptionName e2 )
{
   // catch 块
}catch( ExceptionName eN )
{
   // catch 块
}
```

**抛出异常**

可以使用 throw 语句在代码块中的任何地方抛出异常。throw 语句的操作数可以是任意的表达式，表达式的结果的类型决定了抛出的异常的类型。

以下是尝试除以零时抛出异常的实例：

```c++
double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}
```

**捕获异常**

`catch` 块跟在 `try` 块后面，用于捕获异常。您可以指定想要捕捉的异常类型，这是由 `catch` 关键字后的括号内的异常声明决定的

```c++
try
{
   // 保护代码
}catch( ExceptionName e )
{
  // 处理 ExceptionName 异常的代码
}
```

```c++
try
{
   // 保护代码
}catch(...)
{
  // 能处理任何异常的代码
}
```

```c++
#include <iostream>
using namespace std;
 
double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}
 
int main ()
{
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
     z = division(x, y);
     cout << z << endl;
   }catch (const char* msg) {
     cerr << msg << endl;
   }
 
   return 0;
}
```

**C++标准的异常**

C++ 提供了一系列标准的异常，定义在 <exception> 中，我们可以在程序中使用这些标准的异常。它们是以父子类层次结构组织起来的

异常	|描述
-|-
std::exception	|该异常是所有标准 C++ 异常的父类。
std::bad_alloc	|该异常可以通过 new 抛出。
std::bad_cast	|该异常可以通过 dynamic_cast 抛出。
std::bad_exception	|这在处理 C++ 程序中无法预期的异常时非常有用。
std::bad_typeid	|该异常可以通过 typeid 抛出。
std::logic_error	|理论上可以通过读取代码来检测到的异常。
std::domain_error	|当使用了一个无效的数学域时，会抛出该异常。
std::invalid_argument	|当使用了无效的参数时，会抛出该异常。
std::length_error	|当创建了太长的 std::string 时，会抛出该异常。
std::out_of_range	|该异常可以通过方法抛出，例如 std::vector 和 std::bitset<>::operator\[\]()。
std::runtime_error	|理论上不可以通过读取代码来检测到的异常。
std::overflow_error	|当发生数学上溢时，会抛出该异常。
std::range_error	|当尝试存储超出范围的值时，会抛出该异常。
std::underflow_error	|当发生数学下溢时，会抛出该异常。

**定义新的异常**

```c++
#include <iostream>
#include <exception>
using namespace std;
 
struct MyException : public exception
{
  const char * what () const throw ()
  {
    return "C++ Exception";
  }
};
 
int main()
{
  try
  {
    throw MyException();
  }
  catch(MyException& e)
  {
    std::cout << "MyException caught" << std::endl;
    std::cout << e.what() << std::endl;
  }
  catch(std::exception& e)
  {
    //其他的错误
  }
}
```

**C++动态内存**

了解动态内存在 C++ 中是如何工作的是成为一名合格的 C++ 程序员必不可少的。C++ 程序中的内存分为两个部分：
* **栈**：在函数内部声明的所有变量都将占用栈内存
* **堆**：这是程序中未使用的内存，在程序运行时可用于动态分配内存

很多时候，无法提前预知需要多少内存来存储某个定义变量中的特定信息，所需内存的大小需要在运行时才能确定。

在 C++ 中，您可以使用特殊的运算符为给定类型的变量在运行时分配堆内的内存，这会返回所分配的空间地址。这种运算符即 `new` 运算符。

如果您不再需要动态分配的内存空间，可以使用 `delete` 运算符，删除之前由 `new` 运算符分配的内存

**new 和 delete 运算符**

```c++
new data-type;
```

在这里，`data-type` 可以是包括数组在内的任意内置的数据类型，也可以是包括类或结构在内的用户自定义的任何数据类型。让我们先来看下内置的数据类型。例如，我们可以定义一个指向 double 类型的指针，然后请求内存，该内存在执行时被分配。我们可以按照下面的语句使用 `new` 运算符来完成这点：

```c++
double* pvalue  = NULL; // 初始化为 null 的指针
pvalue  = new double;   // 为变量请求内存
```

如果自由存储区已被用完，可能无法成功分配内存。所以建议检查 new 运算符是否返回 NULL 指针，并采取以下适当的操作：

```c++
double* pvalue  = NULL;
if( !(pvalue  = new double ))
{
   cout << "Error: out of memory." <<endl;
   exit(1);
}
```

`malloc()` 函数在 C 语言中就出现了，在 C++ 中仍然存在，但建议尽量不要使用 malloc() 函数。`new` 与 `malloc()` 函数相比，其主要的优点是，new 不只是分配了内存，它还创建了对象。

在任何时候，当觉得某个已经动态分配内存的变量不再需要使用时，您可以使用 delete 操作符释放它所占用的内存，如下所示：

```c++
delete pvalue;        // 释放 pvalue 所指向的内存
```

```c++
#include <iostream>
using namespace std;
 
int main ()
{
   double* pvalue  = NULL; // 初始化为 null 的指针
   pvalue  = new double;   // 为变量请求内存
 
   *pvalue = 29494.99;     // 在分配的地址存储值
   cout << "Value of pvalue : " << *pvalue << endl;
 
   delete pvalue;         // 释放内存
 
   return 0;
}
```

**数组的动态内存分配**

假设我们要为一个字符数组（一个有 20 个字符的字符串）分配内存，我们可以使用上面实例中的语法来为数组动态地分配内存，如下所示：

```c++
char* pvalue  = NULL;   // 初始化为 null 的指针
pvalue  = new char[20]; // 为变量请求内存
```

要删除刚才创建的数组，语句如下：

```c++
delete [] pvalue;        // 删除 pvalue 所指向的数组
```

下面是 new 操作符的通用语法，可以为多维数组分配内存，如下所示：

*一维数组*

```c++
// 动态分配,数组长度为 m
int *array=new int [m]；
 
//释放内存
delete [] array;
```

*二维数组*

```c++
int **array
// 假定数组第一维长度为 m， 第二维长度为 n
// 动态分配空间
array = new int *[m];
for( int i=0; i<m; i++ )
{
    array[i] = new int [n]  ;
}
//释放
for( int i=0; i<m; i++ )
{
    delete [] array[i];
}
delete [] array;
```

```c++
#include <iostream>
using namespace std;
 
int main()
{
    int **p;   
    int i,j;   //p[4][8] 
    //开始分配4行8列的二维数据   
    p = new int *[4];
    for(i=0;i<4;i++){
        p[i]=new int [8];
    }
 
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //打印数据   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0) cout<<endl;   
            cout<<p[i][j]<<"\t";   
        }
    }   
    //开始释放申请的堆   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    delete [] p;   
    return 0;
}
```

**对象的动态内存分配**

```c++
#include <iostream>
using namespace std;
 
class Box
{
   public:
      Box() { 
         cout << "调用构造函数！" <<endl; 
      }
      ~Box() { 
         cout << "调用析构函数！" <<endl; 
      }
};
 
int main( )
{
   Box* myBoxArray = new Box[4];
 
   delete [] myBoxArray; // 删除数组
   return 0;
}
```

**C++命名空间**

假设这样一种情况，当一个班上有两个名叫 Zara 的学生时，为了明确区分它们，我们在使用名字之外，不得不使用一些额外的信息，比如他们的家庭住址，或者他们父母的名字等等。

同样的情况也出现在 C++ 应用程序中。例如，您可能会写一个名为 xyz() 的函数，在另一个可用的库中也存在一个相同的函数 xyz()。这样，编译器就无法判断您所使用的是哪一个 xyz() 函数。

因此，引入了命名空间这个概念，专门用于解决上面的问题，它可作为附加信息来区分不同库中相同名称的函数、类、变量等。使用了命名空间即定义了上下文。本质上，命名空间就是定义了一个范围。

```c++
namespace namespace_name {
   // 代码声明
}
```

为了调用带有命名空间的函数或变量，需要在前面加上命名空间的名称，如下所示：
```c++
name::code;  // code 可以是变量或函数
```

```c++
#include <iostream>
using namespace std;
 
// 第一个命名空间
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// 第二个命名空间
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}
int main ()
{
 
   // 调用第一个命名空间中的函数
   first_space::func();
   
   // 调用第二个命名空间中的函数
   second_space::func(); 
 
   return 0;
}
```

**using指令**

```c++
您可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称。
```

```c++
#include <iostream>
using namespace std;
 
// 第一个命名空间
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// 第二个命名空间
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}
using namespace first_space;
int main ()
{
 
   // 调用第一个命名空间中的函数
   func();
   
   return 0;
}
```

`using` 指令引入的名称遵循正常的范围规则。名称从使用 `using` 指令开始是可见的，直到该范围结束。此时，在范围以外定义的同名实体是隐藏的。

**不连续的命名空间**

命名空间可以定义在几个不同的部分中，因此命名空间是由几个单独定义的部分组成的。一个命名空间的各个组成部分可以分散在多个文件中。

所以，如果命名空间中的某个组成部分需要请求定义在另一个文件中的名称，则仍然需要声明该名称。下面的命名空间定义可以是定义一个新的命名空间，也可以是为已有的命名空间增加新的元素：
```c++
namespace namespace_name {
   // 代码声明
}
```

**嵌套的命名空间**

```c++
namespace namespace_name1 {
   // 代码声明
   namespace namespace_name2 {
      // 代码声明
   }
}
```

**C++模板**

模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码。

模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器和算法，都是泛型编程的例子，它们都使用了模板的概念。

每个容器都有一个单一的定义，比如 向量，我们可以定义许多不同类型的向量，比如 `vector\<int\>` 或 `vector\<string\>`

**函数模板**

```c++
template <class type> ret-type func-name(parameter list)
{
   // 函数的主体
}
```

```c++
#include <iostream>
#include <string>
 
using namespace std;
 
template <typename T>
inline T const& Max (T const& a, T const& b) 
{ 
    return a < b ? b:a; 
} 
int main ()
{
 
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl; 
 
    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl; 
 
   return 0;
}
```

**类模板**

```c++
template <class type> class class-name {
.
.
.
}
```

```c++
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
 
using namespace std;
 
template <class T>
class Stack { 
  private: 
    vector<T> elems;     // 元素 
 
  public: 
    void push(T const&);  // 入栈
    void pop();               // 出栈
    T top() const;            // 返回栈顶元素
    bool empty() const{       // 如果为空则返回真。
        return elems.empty(); 
    } 
}; 
 
template <class T>
void Stack<T>::push (T const& elem) 
{ 
    // 追加传入元素的副本
    elems.push_back(elem);    
} 
 
template <class T>
void Stack<T>::pop () 
{ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::pop(): empty stack"); 
    }
    // 删除最后一个元素
    elems.pop_back();         
} 
 
template <class T>
T Stack<T>::top () const 
{ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::top(): empty stack"); 
    }
    // 返回最后一个元素的副本 
    return elems.back();      
} 
 
int main() 
{ 
    try { 
        Stack<int>         intStack;  // int 类型的栈 
        Stack<string> stringStack;    // string 类型的栈 
 
        // 操作 int 类型的栈 
        intStack.push(7); 
        cout << intStack.top() <<endl; 
 
        // 操作 string 类型的栈 
        stringStack.push("hello"); 
        cout << stringStack.top() << std::endl; 
        stringStack.pop(); 
        stringStack.pop(); 
    } 
    catch (exception const& ex) { 
        cerr << "Exception: " << ex.what() <<endl; 
        return -1;
    } 
}
```

**C++预处理器**

预处理器是一些指令，指示编译器在实际编译之前所需完成的预处理。

所有的预处理器指令都是以井号（#）开头，只有空格字符可以出现在预处理指令之前。预处理指令不是 C++ 语句，所以它们不会以分号（;）结尾。

我们已经看到，之前所有的实例中都有 #include 指令。这个宏用于把头文件包含到源文件中。

C++ 还支持很多预处理指令，比如 #include、#define、#if、#else、#line 等，让我们一起看看这些重要指令

**#define预处理**

\#define 预处理指令用于创建符号常量。该符号常量通常称为宏，指令的一般形式是：

```c++
#define macro-name replacement-text 
```

```c++
#include <iostream>
using namespace std;
 
#define PI 3.14159
 
int main ()
{
 
    cout << "Value of PI :" << PI << endl; 
 
    return 0;
}
```

**参数宏**

可以使用 #define 来定义一个带有参数的宏，如下所示：
```c++
#include <iostream>
using namespace std;
 
#define MIN(a,b) (a<b ? a : b)
 
int main ()
{
   int i, j;
   i = 100;
   j = 30;
   cout <<"较小的值为：" << MIN(i, j) << endl;
 
    return 0;
}
```

**条件编译**

```c++
#include <iostream>
using namespace std;
#define DEBUG
 
#define MIN(a,b) (((a)<(b)) ? a : b)
 
int main ()
{
   int i, j;
   i = 100;
   j = 30;
#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl;
#endif
 
#if 0
   /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif
 
   cout <<"The minimum is " << MIN(i, j) << endl;
 
#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif
    return 0;
}
```

**# 和 ## 运算符**

\# 和 ## 预处理运算符在 C++ 和 ANSI/ISO C 中都是可用的。# 运算符会把 replacement-text 令牌转换为用引号引起来的字符串。

请看下面的宏定义：

```c++
#include <iostream>
using namespace std;
 
#define MKSTR( x ) #x
 
int main ()
{
    cout << MKSTR(HELLO C++) << endl;
 
    return 0;
}
```

```c++
#include <iostream>
using namespace std;
 
#define concat(a, b) a ## b
int main()
{
   int xy = 100;
   
   cout << concat(x, y);
   return 0;
}
```

**C++中的预定义宏**

宏	|描述
-|-
\_\_LINE\_\_	|这会在程序编译时包含当前行号。
\_\_FILE\_\_	|这会在程序编译时包含当前文件名。
\_\_DATE\_\_	|这会包含一个形式为 month/day/year 的字符串，它表示把源文件转换为目标代码的日期。
\_\_TIME\_\_	|这会包含一个形式为 hour:minute:second 的字符串，它表示程序被编译的时间

```c++
#include <iostream>
using namespace std;
 
int main ()
{
   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;
   return 0;
}
```

**C++信号处理**

信号是由操作系统传给进程的中断，会提早终止一个程序。在 UNIX、LINUX、Mac OS X 或 Windows 系统上，可以通过按 Ctrl+C 产生中断。

有些信号不能被程序捕获，但是下表所列信号可以在程序中捕获，并可以基于信号采取适当的动作。这些信号是定义在 C++ 头文件 `<csignal>` 中。

信号	|描述
-|-
SIGABRT	|程序的异常终止，如调用 abort。
SIGFPE	|错误的算术运算，比如除以零或导致溢出的操作。
SIGILL	|检测非法指令。
SIGINT	|接收到交互注意信号。
SIGSEGV	|非法访问内存。
SIGTERM	|发送到程序的终止请求。

**signal() 函数**

C++ 信号处理库提供了 signal 函数，用来捕获突发事件。以下是 signal() 函数的语法：
```c++
void (*signal (int sig, void (*func)(int)))(int);
```

这个函数接收两个参数：第一个参数是一个整数，代表了信号的编号；第二个参数是一个指向信号处理函数的指针。

让我们编写一个简单的 C++ 程序，使用 signal() 函数捕获 SIGINT 信号。不管您想在程序中捕获什么信号，您都必须使用 signal 函数来注册信号，并将其与信号处理程序相关联。看看下面的实例：

```c++
#include <iostream>
#include <csignal>
#include <unistd.h>
 
using namespace std;
 
void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
 
    // 清理并关闭
    // 终止程序  
 
   exit(signum);  
 
}
 
int main ()
{
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);  
 
    while(1){
       cout << "Going to sleep...." << endl;
       sleep(1);
    }
 
    return 0;
}
```

**raise() 函数**

可以使用函数 raise() 生成信号，该函数带有一个整数信号编号作为参数，语法如下：
```c++
int raise (signal sig);
```

在这里，sig 是要发送的信号的编号，这些信号包括：SIGINT、SIGABRT、SIGFPE、SIGILL、SIGSEGV、SIGTERM、SIGHUP。以下是我们使用 raise() 函数内部生成信号的实例：

```c++
#include <iostream>
#include <csignal>
#include <unistd.h>
 
using namespace std;
 
void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
 
    // 清理并关闭
    // 终止程序 
 
   exit(signum);  
 
}
 
int main ()
{
    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);  
 
    while(++i){
       cout << "Going to sleep...." << endl;
       if( i == 3 ){
          raise( SIGINT);
       }
       sleep(1);
    }
 
    return 0;
}
```

**C++多线程**

多线程是多任务处理的一种特殊形式，多任务处理允许让电脑同时运行两个或两个以上的程序。一般情况下，两种类型的多任务处理：`基于进程和基于线程`。

* 基于进程的多任务处理是程序的并发执行
* 基于线程的多任务处理是同一程序的片段的并发执行

多线程程序包含可以同时运行的两个或多个部分。这样的程序中的每个部分称为一个线程，每个线程定义了一个单独的执行路径。

本教程假设您使用的是 Linux 操作系统，我们要使用 POSIX 编写多线程 C++ 程序。POSIX Threads 或 Pthreads 提供的 API 可在多种类 Unix POSIX 系统上可用，比如 FreeBSD、NetBSD、GNU/Linux、Mac OS X 和 Solaris

**创建线程**

```c++
#include <pthread.h>
pthread_create (thread, attr, start_routine, arg) 
```

在这里，pthread_create 创建一个新的线程，并让它可执行。下面是关于参数的说明：
参数|描述
-|-
thread	|指向线程标识符指针。
attr	|一个不透明的属性对象，可以被用来设置线程属性。您可以指定线程属性对象，也可以使用默认值 NULL。
start_routine	|线程运行函数起始地址，一旦线程被创建就会执行。
arg	|运行函数的参数。它必须通过把引用作为指针强制转换为 void 类型进行传递。如果没有传递参数，则使用 NULL。

**终止线程**

```c++
#include <pthread.h>
pthread_exit (status) 
```

在这里，`pthread_exit` 用于显式地退出一个线程。通常情况下，pthread_exit() 函数是在线程完成工作后无需继续存在时被调用。

如果 main() 是在它所创建的线程之前结束，并通过 pthread_exit() 退出，那么其他线程将继续执行。否则，它们将在 main() 结束时自动被终止。

```c++
#include <iostream>
// 必须的头文件
#include <pthread.h>
 
using namespace std;
 
#define NUM_THREADS 5
 
// 线程的运行函数
void* say_hello(void* args)
{
    cout << "Hello Runoob！" << endl;
    return 0;
}
 
int main()
{
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);
}
```

```c++
//文件名：test.cpp
 
#include <iostream>
#include <cstdlib>
#include <pthread.h>
 
using namespace std;
 
#define NUM_THREADS     5
 
void *PrintHello(void *threadid)
{  
   // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
   int tid = *((int*)threadid);
   cout << "Hello Runoob! 线程 ID, " << tid << endl;
   pthread_exit(NULL);
}
 
int main ()
{
   pthread_t threads[NUM_THREADS];
   int indexes[NUM_THREADS];// 用数组来保存i的值
   int rc;
   int i;
   for( i=0; i < NUM_THREADS; i++ ){      
      cout << "main() : 创建线程, " << i << endl;
      indexes[i] = i; //先保存i的值
      // 传入的时候必须强制转换为void* 类型，即无类型指针        
      rc = pthread_create(&threads[i], NULL, 
                          PrintHello, (void *)&(indexes[i]));
      if (rc){
         cout << "Error:无法创建线程," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}
```

**向线程传递函数**

```c++
#include <iostream>
#include <cstdlib>
#include <pthread.h>
 
using namespace std;
 
#define NUM_THREADS     5
 
struct thread_data{
   int  thread_id;
   char *message;
};
 
void *PrintHello(void *threadarg)
{
   struct thread_data *my_data;
 
   my_data = (struct thread_data *) threadarg;
 
   cout << "Thread ID : " << my_data->thread_id ;
   cout << " Message : " << my_data->message << endl;
 
   pthread_exit(NULL);
}
 
int main ()
{
   pthread_t threads[NUM_THREADS];
   struct thread_data td[NUM_THREADS];
   int rc;
   int i;
 
   for( i=0; i < NUM_THREADS; i++ ){
      cout <<"main() : creating thread, " << i << endl;
      td[i].thread_id = i;
      td[i].message = (char*)"This is message";
      rc = pthread_create(&threads[i], NULL,
                          PrintHello, (void *)&td[i]);
      if (rc){
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}
```

**连接和分离线程**

```c++
pthread_join (threadid, status) 
pthread_detach (threadid) 
```

pthread_join() 子程序阻碍调用程序，直到指定的 threadid 线程终止为止。当创建一个线程时，它的某个属性会定义它是否是可连接的（joinable）或可分离的（detached）。只有创建时定义为可连接的线程才可以被连接。如果线程创建时被定义为可分离的，则它永远也不能被连接。

这个实例演示了如何使用 pthread_join() 函数来等待线程的完成。

```c++
#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>
 
using namespace std;
 
#define NUM_THREADS     5
 
void *wait(void *t)
{
   int i;
   long tid;
 
   tid = (long)t;
 
   sleep(1);
   cout << "Sleeping in thread " << endl;
   cout << "Thread with id : " << tid << "  ...exiting " << endl;
   pthread_exit(NULL);
}
 
int main ()
{
   int rc;
   int i;
   pthread_t threads[NUM_THREADS];
   pthread_attr_t attr;
   void *status;
 
   // 初始化并设置线程为可连接的（joinable）
   pthread_attr_init(&attr);
   pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
 
   for( i=0; i < NUM_THREADS; i++ ){
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, wait, (void *)&i );
      if (rc){
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
 
   // 删除属性，并等待其他线程
   pthread_attr_destroy(&attr);
   for( i=0; i < NUM_THREADS; i++ ){
      rc = pthread_join(threads[i], &status);
      if (rc){
         cout << "Error:unable to join," << rc << endl;
         exit(-1);
      }
      cout << "Main: completed thread id :" << i ;
      cout << "  exiting with status :" << status << endl;
   }
 
   cout << "Main: program exiting." << endl;
   pthread_exit(NULL);
}
```

**C++ STL**

在前面的章节中，我们已经学习了 C++ 模板的概念。C++ STL（标准模板库）是一套功能强大的 C++ 模板类，提供了通用的模板类和函数，这些模板类和函数可以实现多种流行和常用的算法和数据结构，如向量vector、链表list、队列queue、栈stack、集合set、哈希map。

C++ 标准模板库的核心包括以下三个组件：

组件	|描述
-|-
容器（Containers）	|容器是用来管理某一类对象的集合。C++ 提供了各种不同类型的容器，比如 deque、list、vector、map 等。
算法（Algorithms）	|算法作用于容器。它们提供了执行各种操作的方式，包括对容器内容执行初始化、排序、搜索和转换等操作。
迭代器（iterators）	|迭代器用于遍历对象集合的元素。这些集合可能是容器，也可能是容器的子集。

这三个组件都带有丰富的预定义函数，帮助我们通过简单的方式处理复杂的任务。

下面的程序演示了向量容器（一个 C++ 标准的模板），它与数组十分相似，唯一不同的是，向量在需要扩展大小的时候，会自动处理它自己的存储需求：

```c++
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
   // 创建一个向量存储 int
   vector<int> vec; 
   int i;
 
   // 显示 vec 的原始大小
   cout << "vector size = " << vec.size() << endl;
 
   // 推入 5 个值到向量中
   for(i = 0; i < 5; i++){
      vec.push_back(i);
   }
 
   // 显示 vec 扩展后的大小
   cout << "extended vector size = " << vec.size() << endl;
 
   // 访问向量中的 5 个值
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }
 
   // 使用迭代器 iterator 访问值
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }
 
   return 0;
}
```

*vector注意*

* push_back() 成员函数在向量的末尾插入值，如果有必要会扩展向量的大小
* size() 函数显示向量的大小
* begin() 函数返回一个指向向量开头的迭代器
* end() 函数返回一个指向向量末尾的迭代器

C++ STL 之 vector 的 capacity 和 size 属性区别

size 是当前 vector 容器真实占用的大小，也就是容器当前拥有多少个容器。

capacity 是指在发生 realloc 前能允许的最大元素数，即预分配的内存空间。

当然，这两个属性分别对应两个方法：resize() 和 reserve()。

使用 resize() 容器内的对象内存空间是真正存在的。

使用 reserve() 仅仅只是修改了 capacity 的值，容器内的对象并没有真实的内存空间(空间是"野"的)。

此时切记使用 [] 操作符访问容器内的对象，很可能出现数组越界的问题。

下面用例子进行说明：

**C++标准库**

C++ 标准库可以分为两部分：

* 标准函数库： 这个库是由通用的、独立的、不属于任何类的函数组成的。函数库继承自 C 语言。
* 面向对象类库： 这个库是类及其相关函数的集合。

C++ 标准库包含了所有的 C 标准库，为了支持类型安全，做了一定的添加和修改。

**标准函数库**

标准函数库分为以下几类：
* 输入/输出 I/O
* 字符串和字符处理
* 数学
* 时间、日期和本地化
* 动态分配
* 其他
* 宽字符函数

**面向对象类库**

标准的 C++ 面向对象类库定义了大量支持一些常见操作的类，比如输入/输出 I/O、字符串处理、数值处理。面向对象类库包含以下内容：

* 标准的 C++ I/O 类
* String 类
* 数值类
* STL 容器类
* STL 算法
* STL 函数对象
* STL 迭代器
* STL 分配器
* 本地化库
* 异常处理类
* 杂项支持库

**C++ 11 14 17**

[链接](https://github.com/Peefy/VisualCpp2017/tree/master/VisualCpp2017) 

*C++ 11*

```c++
using namespace std;

namespace cpp11
{
    Cpp11::Cpp11()
    {

    }

    Cpp11::~Cpp11()
    {

    }

    /*
    * auto 自动类型推导
    */
    void Cpp11::AutoTypeDerivation()
    {
        auto int_var = 0;
        auto float_var = 0.0f;
        auto double_var = 0.0;
        auto bool_var = true;
        auto char_var = 'c';
        auto str_var = "ok";
        auto vec = vector<int>();
        vec.push_back(1);
        vec.push_back(2);
        cout << int_var << " ";
        cout << float_var << " ";
        cout << double_var << " ";
        cout << bool_var << " ";
        cout << char_var << " ";
        cout << str_var << " ";
        cout << vec.size() << " ";
        cout << endl;
        for (auto iter = vec.cbegin(); iter != vec.cend(); iter++)
        {
            cout << *iter << " ";
        }
    }

    /*
    * decltype 获取类型关键字
    */
    void Cpp11::Decltype()
    {
        auto x = 1;
        // decltype 从变量或者类获取类型
        decltype(x) y = 1;
        auto str = "ok";
        decltype("ok") str_tmp = "ok";
        cout << x << " " << y;
        cout << str << endl;
        cout << str_tmp << endl;
        string cstr = "ok";
        cstr.at(0) = 'a';
        cout << cstr << endl;
    }

    /*
    * nullptr 关键字，空指针元素，区别于NULL
    */
    void Cpp11::Nullptr()
    {
        int a = NULL;
        int * p = NULL;
        int * q = nullptr;
        cout << (p == q) << endl;
    }

    /*
    * for(auto list : lists) 类似于C#的foreach in Python的for in ,用法同Java
    */
    void Cpp11::Foreach()
    {
        auto x = new vector<int>;
        // 左值引用&与右值引用&&
        x->push_back(1);
        x->push_back(2);
        x->push_back(3);
        for (auto val : *x)
        {
            cout << val << " ";
        }
        delete x;
        vector<int> vals{ 1,2,3,4,5 };
        for (auto val : vals)
        {
            cout << val << " ";
        }
        auto list = { 1, 2, 3, 4 };
        for_each(list.begin(), list.end(), [](int i) {return i * 2; });
        for (auto i : list)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    * lambda 表达式
    */
    void Cpp11::Lambda()
    {
        auto func = [=](int a, int b) -> int { return a + b; };
        cout << func(1, 2) << endl;
        vector<int> vals{ 1,2,3,4,5 };
        for_each(vals.begin(), vals.end(), [](int a) {return a * 2; });
        for (auto val : vals)
        {
            cout << val << " ";
        }
        for (auto& val : vals)
        {
            val = 0;
        }
        for (auto val : vals)
        {
            cout << val << " ";
        }
        printf("lambda 捕获选项 \r\n");
        printf("[]  不捕获任何变量\r\n");
        printf("[&] 以引用方式捕获所有变量\r\n");
        printf("[=] 用值的方式捕获所有变量（可能被编译器优化为const &)\r\n");
        printf("[=, &foo] 以引用捕获foo, 但其余变量都靠值捕获\r\n");
        printf("[bar] 以值方式捕获bar; 不捕获其它变量\r\n");
        printf("[this] 捕获所在类的this指针\r\n");
    }

    template<typename T, typename T1>
    void Print(T1 str, T tu)
    {
        if (str != NULL)
        {
            cout << str << " " << tu;
        }
    }

    /*
    * 变长模板 以及 make_pair
    */
    void Cpp11::VariableLengthTemplate()
    {
        auto dic = make_pair("name", 1);
        cout << dic.first << " " << dic.second << endl;
        Print(1, 1.0);
    }

    /*
    * 集合默认初始化
    */
    void Cpp11::CollectionInit()
    {
        auto hash = new map<string, int>
        {
            { "123", 123 },
            { "456", 456 }
        };
        auto v = vector<int>{ 1, 2, 3, 45 };
        for (auto val : *hash)
        {
            cout << val.first << " " << val.second << endl;
        }
    }

    auto Multiply(double a, double b) -> double
    {
        return a * b;
    }

    /*
    * 函数返回值用 -> int 表示，类似于python
    */
    void Cpp11::NewFunctionName()
    {
        auto func = [](double a, double b) -> double {return a * b; };
        cout << Multiply(2, 5) << endl;
        cout << func(2, 5) << endl;
    }

    /*
    * throw关键字，类似于Java
    */
    void Cpp11::Throw()
    {
        auto func = [](double a, double b) throw () 
        {
            a = 0; 
            return 2 / a; 
        };
        try
        {
            cout << func(0, 0) << endl;
        }
        catch (exception* e)
        {
            cout << "error\r\n";
        }

    }

    constexpr double AddConst(double& a)
    {
        a++;
        return a;
    }

    /*
    编译时计算 constexpr 关键字
    */
    void Cpp11::Constexpr()
    {
        auto a = 2.0;
        const auto b = AddConst(a);
        cout << b << endl;
    }

    /*
    static_assert 关键字,编译是进行断言，运行时不进行断言
    */
    void Cpp11::StaticAssert()
    {
        auto a = 0;
        static_assert(sizeof(void*) == 4, "not supported");       
    }

    void Cpp11::SmartPointer()
    {
        // auto ptr;
        //auto_ptr<Cpp11> auto_p(new Cpp11);
        //auto_p->Lambda();
        //auto ptr = auto_p.release();
        //delete ptr;
        // unique_ptr; 独占指针使用权，不能随便赋值
        unique_ptr<Cpp11> unique_p(new Cpp11);
        auto p1 = move(unique_p);
        if (p1.get() != nullptr)
        {
            printf("p1 != nullptr \r\n");
        }
        if (unique_p.get() != nullptr)
        {
            printf("unique_p != nullptr \r\n");
        }
        // share_ptr
        shared_ptr<Cpp11> share_p(new Cpp11);
        auto share_p1 = share_p;
        auto share_p2 = share_p;
        if (share_p.get() != nullptr)
        {
            printf("share_p != nullptr \r\n");
        }
    }

    void Cpp11::MultiByteChar()
    {
        char str1[] = "哈哈哈";
        wchar_t str2[] = L"哈哈哈";
        char16_t str3[] = u"哈哈哈";
        char32_t str4[] = U"哈哈哈";
        cout << str1 << endl;
        cout << str2 << endl;
        cout << str3 << endl;
        cout << str4 << endl;
    }

}
```

*C++ 14*

```c++
using namespace std;

namespace cpp14
{
    Cpp14::Cpp14()
    {

    }

    Cpp14::~Cpp14()
    {

    }

    /*
     * 泛型Lambda表达式
    */
    void Cpp14::GenericLambda()
    {
        //c++ 11
        auto func = [](double a, double b)->double {return a * b; };
        cout << func(2, 5) << endl;
        //c++ 14
        auto generic_func = [](auto a, auto b) {return a * b; };
        cout << generic_func(3.5, 5) << endl;
    }

    class ReturnS
    {
    public:
        string str;
        int id;
        ReturnS(string str, int id) : str(str), id(id) {}
        explicit ReturnS(string str) : str(str) {}
    };

    auto GetValue(int id)   
    {
        if (id == 0)
        {
            auto r = new ReturnS("123", id);
            return r;
        }
        else
        {
            string str = "0000";
            auto r = new ReturnS(str);
            return r;
        }

    }

    void Cpp14::ReturnTypeDeduction()
    {
        cout << GetValue(0)->str << endl;
        cout << GetValue(1)->str << endl;
    }

    void [[deprecated]] Cpp14::InitializedLambdaCaptures()
    {
        // unique_ptr没有拷贝构造函数
        unique_ptr<int> p(new int);
        *p = 11;
        auto y = [p = std::move(p)]() {  
            *p = *p + 2;
            std::cout << "inside: " << *p << "\n"; 
        };
        y();
        if (p.get() != nullptr)
            std::cout << "outside: " << *p << "\n";
        else
            cout << "Capture successful!\r\n";
    }

    /*
    弃用的函数
    */
    [[deprecated("Consider using something other than cranky")]]
    void Cpp14::DeprecatedFunction()
    {

    }

    void Cpp14::NumberSeparator()
    {
        auto num = 0b1111'0000;
        cout << num << " " << 1'000'000 << endl;
    }

    void Cpp14::MakeSmartPointer()
    {
        auto p = make_unique<ReturnS>("123", 0);
        cout << p->id << endl;
        cout << p->str << endl;
        p.reset();      
    }

    void Cpp14::TypeTuple()
    {
        tuple<int, string, float> t(1, "123", 1.1f);
        auto val = get<int>(t);
        auto index_val = get<1>(t);
        cout << val << " " << index_val << endl;
    }

}
```

*C++ 17*

```c++
#include "stdafx.h"
#include "cpp17.h"

using namespace std;

namespace cpp17::NestNamespace
{
    Cpp17::Cpp17()
    {
    }


    Cpp17::~Cpp17()
    {
    }

    void NestNamespace::Cpp17::ShowNestNamespace()
    {
        cout << "cpp17::NestNamespace" << endl;
    }

    void Cpp17::StructuredBinding()
    {
        auto m = new map<string, int>
        {
            { "123", 123 },
            { "456", 456 },
            { "789", 789 }
        };
        //for(auto [key, value] : m)
        //{

        //}
    }

    void Cpp17::ClassTemplateArgumentDeduction()
    {
        // before
        pair<int, int> p(1, 1);
        // after
        
    }

}

```

## C++知识点

* **智能指针**

C++程序设计中使用堆内存是非常频繁的操作，堆内存的申请和释放都是程序员自己管理。程序员自己管理内存可以提高程序的效率，但是整体来说堆内存的管理是麻烦的，C++引入智能指针的概念，方便内存管理。使用普通指针，容易造成内存泄露(忘记释放),二次释放,程序发生异常内存泄露等问题,使用智能指针能更好的管理内存

智能指针的原理:
* 1.智能指针使用了`RALL` `(获取资源即初始化)`的技术对普通的指针进行封装,使得智能的指针实质是个对象,行为表现却像一个指针
* 2.智能指针的作用是防止忘记调用delete释放内存和程序异常的进入catch块忘记释放内存.另外指针的释放时机非常考究，多次释放同一个指针会造成程序崩溃
* 3.智能指针的作用还有一个作用是把值语义转变为引用语义

*C++11*版本后提供，包含在头文件\<memory\>的*std*命名空间中,
*shared_ptr*,*unique_ptr*,*weak_ptr*,*auto_ptr*

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

* **auto_ptr**

auto_ptr的出现，主要是为了解决“有异常抛出时发生内存泄漏”的问题。auto_ptr的构造函数为explicit，阻止了一般指针隐式类型转换为auto_ptr的构造，所以如下的创建方式是编译不过的。auto_ptr对象被拷贝或者被赋值后，已经失去了对原指针的所有权，此时，对这个auto_ptr的读取操作是不安全的。auto_ptr支持所拥有的指针类型之间的隐式类型转换。
auto_ptr对象的提领操作：以像使用一般指针一样，通过*和->运算符对auto_ptr所有用的指针进行提领操作。首先必须确保这个auto_ptr对象确实拥有某个指针。auto_ptr的辅助函数：T\* get(),获得auto_ptr所拥有的指针。T\* release(), 释放auto_ptr的所有权，并将所有用指针返回。void reset(T\* ptr=0), 接收所有权，接收之前拥有其它指针的话，必须先释放其空间。

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

* **C++局部变量、全局变量、静态变量（堆、栈、静态存储区）**

* **堆**-亦称动态内存分配。程序在运行的时候用malloc或new申请任意大小的内存，程序员自己负责在适当的时候用free或delete释放内存。
```c++
char* str = new char[100];
delete[] str;
str = 0;
```
* **栈**-在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。
* **全局/静态存储区**-内存在程序编译的时候就已经分配好，这块内存在程序的整个运行期间都存在。它主要存放静态数据、全局数据和常量

* **自由存储区**-由malloc等分配的内存块，和堆类似，由free释放。
* **常量存储区**-比较特殊的存储区，存放常量，且不允许修改。

**C++堆和栈的区别总结**

堆和栈的不同|不同
-|-
管理方式不同|堆：释放工作由程序员控制，容易产生memory leak;栈：编译器自动管理。
空间大小不同|堆：32位系统下为4G。|栈：默认是1M，但是可以手动修改。
能否产生碎片不同|堆：频繁的new/delete势必会造成空间的不连续，造成大量碎片。|栈：不存在该问题。
生长方向不同|堆：向上生长，即向着内存地址增加的方向。|栈：向下生长，即向着内存地址减小的方向。
分配方式不同|堆：都是动态分配的，不存在静态分配。|栈：静态分配有编译器完成，比如局部变量的分配；动态分配由alloca函数分配。但是栈的动态分配由编译器释放，无需程序员操作。
分配效率不同|堆：C/C++函数库提供，库函数按照指定算法搜索大小够用的空间。|栈：计算机提供的数据结构，计算机分配专门的寄存器存放栈的地址，入栈出栈都有专门的指令执行。栈的效率明显高于堆。

**C++ cast**

1. **C风格强制转换**

```c++
int a = 1;
char b = (char)a;
```

2. **const_cast**

用法：const_cast\<type_id\> (expression)。用于修改类型的const或volatile属性，一般用于强制消除对象的常量性，c中不提供消除这const的机制

3. **static_cast**

用法：static_cast\<type_id\> (expression).该转换和c风格的转换很类似，没有运行时类型检查，所以无法保证转换的安全性。主要有以下几种用法：

（1）用于基本数据类型，或者non_const到const（反过来必须用const_cast)

（2）把空指针转换为目标类型的指针

（3）将任何类型的表达式转换为void类型

（4）可以将子类类型的指针转换为父类类型的指针（这种转换的安全性需要开发人员来保证）

4. **dynamic_cast**

用法：dynamic_cast\<type*\>(expression).只用于对象和引用，主要用于执行安全的向下转型，他可以将指向子类的父类指针转换为子类指针，但是要求父类有虚函数，如果转换为指针类型失败则返回NULL，如果是引用类型转换失败则跑出bad_cast的异常

只用于对象和引用，主要用于执行安全的向下转型，他可以将指向子类的父类指针转换为子类指针，但是要求父类有虚函数，如果转换为指针类型失败则返回NULL，如果是引用类型转换失败则跑出bad_cast的异常

5. **reinpreter_cast**

用法：reinpreter_cast\<type_id\> (expression).type_id可以是指针，引用，算术类型，函数指针或者成员指针，这个操作符可以在非相关的类型之间转换，操作只是简单的从一个指针到别的指针的值得二进制拷贝，在类型之间指向的内容不作任何类型的检查和转换

**static_cast 和 dynamic_cast的区别：**

* static在转换时不进行安全性检查，完全需要开发者自己考虑, dynamic 在转换的时候会进行安全性检查，如果是指针类型的转换失败返回NULL，如果是引用类型的转换失败，则跑出bad_cast 异常
* static主要是用于值类型之间的转换，而dynamic只能用于对象的指针和引用的cast，dynamic是向下的转换，而且要求父类有虚函数，否则会编译出错

**C++ STL标准模板库 详细版**

C++ STL中最基本以及最常用的类或容器：

* **string**

```c++
string s1;//初始化字符串，空字符串
string s2 = s1; //拷贝初始化，深拷贝字符串
string s3 = "I am Yasuo"; //直接初始化，s3存了字符串
string s4(10, 'a'); //s4存的字符串是aaaaaaaaaa
string s5(s4); //拷贝初始化，深拷贝字符串
string s6("I am Ali"); //直接初始化
string s7 = string(6, 'c'); //拷贝初始化，cccccc
string s1 = s2 + ", "; //正确
string s3 = "s " + ", "; //错误
string s4 = "hello" + ", " + s1; //错误
string s5 = s1 + "hello " + ", "; //改一下顺序，s1放前头，正确了，注意理解=号右边的运算顺序
```

*处理string中的每个字符*

```c++
for (int i = 0; i < s3.size(); i++)
{
    cout << s3[i] << endl;
    s3[i] = 's';
}

string str("hi sysu");
for (string::iterator it = str.begin(); it != str.end(); it++)
{
    cout << *it << endl;
}
```

*string find子串*

```c++
string sq("heoolo sdaa ss");
cout << s.find("aa", 0) << endl; //返回的是子串位置。第二个参数是查找的起始位置，如果找不到，就返回string::npos
if (s.find("aa1", 0) == string::npos)
{
    cout << "找不到该子串！" << endl;
}
```

*c++分割字符串*

```c++
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char sentence[]="This is a sentence with 7 tokens";
    cout << "The string to be tokenized is:\n" << sentence << "\n\nThe tokens are:\n\n";
    char *tokenPtr=strtok(sentence," ");//sentence必须是一个char数组，不能是定义成指针形式
    while(tokenPtr!=NULL)　{
        cout<<tokenPtr<<'\n';
        tokenPtr=strtok(NULL," ");
    }
    //cout << "After strtok,sentence=" << tokenPtr<<endl;
    return 0;
}
```

* **vector**

*vector初始化*

```c++
vector<int> v1;
vector<father> v2;
vector<string> v3;
vector<vector<int> >;  //注意空格。这里相当于二维数组int a[n][n];
vector<int> v5 = { 1,2,3,4,5 }; //列表初始化,注意使用的是花括号
vector<string> v6 = { "hi","my","name","is","lee" };
vector<int> v7(5, -1); //初始化为-1,-1,-1,-1,-1。第一个参数是数目，第二个参数是要初始化的值
vector<string> v8(3, "hi");
vector<int> v9(10); //默认初始化为0
vector<int> v10(4); //默认初始化为空字符串
```

*vector的基本操作*

```c++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void showvector(vector<T> v){
    for (vector<T>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   for (int i = 0; i < v1.size(); i++){
      cout << v1[i] << endl;
      v1[i] = 100;
      cout << v1[i] << endl;
   }
   vector<string> v6 = { "hi","my","name","is","lee" };
   for (vector<string>::iterator iter = v6.begin(); iter != v6.end(); iter++){
      cout << *iter << endl;
      //下面两种方法都行
      cout << (*iter).empty() << endl;
      cout << iter->empty() << endl; 
   }
   vector<int> v5 = { 1,2,3,4,5 }; //列表初始化,注意使用的是花括号
   cout << v5.front() << endl; //访问第一个元素
   cout << v5.back() << endl; //访问最后一个元素

   showvector(v5);
   v5.pop_back(); //删除最后一个元素
   showvector(v5);
   v5.push_back(6); //加入一个元素并把它放在最后
   showvector(v5);
   v5.insert(v5.begin()+1,9); //在第二个位置插入新元素
   showvector(v5);
   v5.erase(v5.begin() + 3);  //删除第四个元素
   showvector(v5);
   v5.insert(v5.begin() + 1, 7,8); //连续插入7个8
   showvector(v5);
   v5.clear(); //清除所有内容
   showvector(v5);
   return 0;
}

```

* **set**

set跟vector差不多，它跟vector的唯一区别就是，set里面的元素是有序的且唯一的，只要你往set里添加元素，它就会自动排序，而且，如果你添加的元素set里面本来就存在，那么这次添加操作就不执行。要想用set先加个头文件set。

```c++
#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename T>
void showset(set<T> v)
{
    for (set<T>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    set<int> s1{9,8,1,2,3,4,5,5,5,6,7,7 }; //自动排序，从小到大,剔除相同项
    showset(s1);
    set<string> s2{ "hello","sysy","school","hello" }; //字典序排序
    showset(s2);
    s1.insert(9); //有这个值了，do nothing
    showset(s1);
    s2.insert("aaa"); //没有这个字符串，添加并且排序
    showset(s2);
    
    system("pause");
    return 0;
}
```

* **list**

list就是链表，在C语言中我们想使用链表都是自己去实现的，实现起来倒不难，但是如果有现成的高效的链表可以使用的话，我们就不需要重复造轮子了。STL就提供了list容器给我们。

list是一个双向链表，而单链表对应的容器则是foward_list。

list即双向链表的优点是插入和删除元素都比较快捷，缺点是不能随机访问元素。

初始化方式就大同小异了，跟vector基本一样。要想用list先加个头文件list。

```c++
#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T>
void showlist(list<T> v)
{
    for (list<T>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    list<int> l1{ 1,2,3,4,5,5,6,7,7 };
    showlist(l1);
    list<double> l2;
    list<char> l3(10);
    list<int> l4(5, 10); //将元素都初始化为10
    showlist(l4);

    
    system("pause");
    return 0;
} 
```

* **map**

map运用了哈希表地址映射的思想，也就是key-value的思想，来实现的。

首先给出map最好用也最最常用的用法例子，就是用字符串作为key去查询操作对应的value。

要使用map得先加个头文件map

```c++
#include <iostream>
#include <map>
#include <string>

using namespace std;

void showmap(map<string, int> v)
{
    for (map<string, int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << "  " << it->second << endl;  //注意用法，不是用*it来访问了。first表示的是key，second存的是value
    }
    cout << endl;
}

int main()
{
    map<string, int> m1; //<>里的第一个参数表示key的类型,第二个参数表示value的类型
    m1["Kobe"] = 100;
    m1["James"] = 99;
    m1["Curry"] = 98;

    string s("Jordan");
    m1[s] = 90;

    cout << m1["Kobe"] << endl;
    cout << m1["Jordan"] << endl;
    cout << m1["Durant"] << endl; //不存在这个key，就显示0

    m1.erase("Curry");//通过关键字来删除
    showmap(m1);
    m1.insert(pair<string, int>("Harris", 89)); //也可以通过insert函数来实现增加元素
    showmap(m1);
    m1.clear(); //清空全部


    system("pause");
    return 0;
}
```

*map判断某元素是否存在*

```c++
if (m1.count("Lee"))
{
    cout << "Lee is in m1!" << endl;
}
else
{
    cout << "Lee do not exist!" << endl;
}
```

*map用迭代器访问元素*

```c++
for (map<string, int>::iterator it = m1.begin(); it != m1.end(); it++)
{
    cout << it->first<<"  "<<it->second << endl;  //注意用法，不是用*it来访问了。first表示的是key，second存的是value
}
```

**C++顺序容器和关联容器**

* **顺序容器**-array, vector, heap, priority_queue, list, slist, deque, stack, queue

Vector中所采用的数据结构非常简单：线性连续空间。当分配空间被占满而仍然需要添加元素时，vector便会进行一场空间重新配置的大工程！在这里，程序员需要注意的是，一旦引起空间重新配置，之前指向原vector的所有迭代器就都失效了，这一点在工程中容易引起bug。

List则对空间的运用有绝对的精准，一点也不浪费。注意，list内部构成的实际是一个环状的双向链表！所以只需要一个指针，便可以完整地表现整个链表。

Deque相比于vector而言，它没有容量的概念，因为deque是动态地以分段连续空间组合而成，随时都可以增加一段新的空间并链接起来。为了使得deque在逻辑上看起来是连续空间，在STL内部实现实际是使用了一块map(不是STL中的map容器)作为主控，map是一小块连续空间，其中每个元素都是指针，指向另一段较大的连续线性空间，称为缓冲区，这些缓冲区才是真正存放deque元素的主体。

Stack在缺省的情况下是使用deque作为底部结构，只需要封闭deque一端的操作即可，也可以指定其他的容器作为底部结构，例如list。

同样，queue也是基于deque实现。

Slist则是一个单向链表，没有push_back，只有push_front和pop_front。

* **关联容器**-RB-tree, set, map, multiset, multimap, hashtable, hash_set, hash_map, hash_multiset, hash_multimap

与之前的顺序容器有别的是，关联容器在存储时是以关键字key为下标进行存储的，标准的STL关联容器分为set和map两大类，之后的衍生版本有multiset和multimap，它们的区别是在存储时是否容许出现关键字key相同的情况。这些容器的底层机制均以`RB-tree`(红黑树)完成。此外，SGI STL还提供了一个不在标准规格之列的关联式容器：hash table，以及基于hash table而完成的hash_set和hash_map。但在C++11中，因为标准化的推进，unordered_map原来属于boost分支和std::tr1中，而hash_map属于非标准容器。尽量使用unordered_，代替hash_，二者在底层上实现机理是一样的

*set map*

一般来说，关联式容器的内部结构是一个平衡二叉树，以便获得良好的搜寻效率，平衡二叉树有很多种类型，包括AVL-tree，RB-tree等，最被广泛使用的是RB-tree。

(1)   搜索二叉树，因为它的查找平均性能是O(lgN)，因此查询中多用这种结构，但如果建立搜索二叉树的时候数据不够随机，可能会导致这棵二叉树出现“左重右轻“之类的失衡情况，这个时候平衡二叉树便体现出它的作用了。5

(2)   所谓的树形平衡与否，并没有一个绝对的测量标准，大致意义是没有任何一个节点过深。AVL树中定义是任何节点的左右子树高度相差最多为1，在插入新的元素的时候，可能会导致这棵AVL树失去平衡，这个时候就需要用到”单旋转”和“双旋转”两种操作来调节AVL树使之重新平衡。

(3)   RB-tree是另一种二叉平衡树，它对“平衡”的定义更弱，它的规则如下：

A． 每个节点不是红色就是黑色

B． 根节点为黑色

C． 如果节点为红色，那么它的子节点必须为黑色

D． 任一节点至NULL的任何路径中，所含的黑色节点数必须相同

所以对于RB-tree的插入和删除是一个很复杂的过程，其中，插入有3中情况，删除有4中情况，但是它能很好地保证查询的效率，通常来说，比其他的平衡二叉树提高25%。

在RB-tree中，有两个函数很重要，一个是pair\<iterator,bool\>insert_unique(const Value_type &x)，这个是将x插入到红黑树中，并且保持节点的独一无二(通常来说，如果使用insert函数在map插入新的元素，如果是重复元素，则不会真正插入，而是直接返回)，返回值是一个pair类型，bool标志插入是否成功，iterator根据插入是否成功则指向新插入的节点或者NULL，另外一个是pair\<iterator,bool\> insert_equal(constValue_type &x)，这个函数再插入节点时允许节点关键字key重复，这便是multiset和multimap实现的关键了，这也是它们和set及map最大的区别了。

了解了红黑树的基本操作之后，就可以很自然地知道set和map的实现原理了，基本上set和map中的函数在RB-tree中均有实现，因此set和map只需要调用即可。值得注意的一个问题是，在关联容器中应该使用关联容器自身实现的find进行查找，因为它是充分利用了平衡二叉树的特性的，查找效率高，而普通的STL中的find算法则是循序查找。

*hash_set, hash_map*

二叉搜索树具有对数平均时间的表现，但这样的表构建在一个假设之：输入数据足够随机。除此之外，还有另外一种数据结构，它在插入、删除、搜寻等操作上也具有常数平均时间，而且这种表现是以统计为基础，不需要依赖元素的随机性，它就是hash table。

哈希表在处理冲突时有线性探测，二次探测以及开链等方式，SGI则是采用开链的方式，即将冲突的元素构成一个链表，在SGI提供的hashtable中表格内的元素为桶子(bucket)，它是用vector来承载元素。

虽然在开链法中并不要求表格大小必须为质数，但是SGI STL仍然以质数来设计表格，它是将预先选取的28个质数保存在表中，当用户要求分配多少个桶时，则返回不小于且最接近的一个质数作为表格大小。

Hash_set和hash_map同样只需要调用hashtable中的函数即可。由于现在经常使用unordered_系列代替了hash_，所以对于hash_的具体用法就不赘述了。

*unordered_map, unordered_set*

**C++泛型算法**

标准容器（the standard container）定义了很少的操作。标准库并没有为每种容器类型都定义实现这些操作的成员函数，而是定义了一组泛型算法：因为它们实现共同的操作，所以称之为“算法”；而“泛型”指的是它们可以操作在多种容器类型上——不但可作用于 vector 或 list 这些标准库类型，还可用在内置数组类型、甚至其他类型的序列上.

标准算法固有地独立于类型，与容器的类型无关：在前面的描述中，没有任何内容依赖于容器类型。这种算法只在一点上隐式地依赖元素类型：必须能够对元素做比较运算。该算法的明确要求如下：
* 需要某种遍历集合的方式：能够从一个元素向前移到下一个元素。
* 必须能够知道是否到达了集合的末尾
* 必须能够对容器中的每一个元素与被查找的元素进行比较
* 需要一个类型指出元素在容器中的位置，或者表示找不到该元素

标准库提供了超过 100 种算法。与容器一样，算法有着一致的结构。

泛型算法本身从不执行容器操作，只是单独依赖迭代器和迭代器操作实现。算法基于迭代器及其操作实现，而并非基于容器操作。这个事实也许比较意外，但本质上暗示了：使用“普通”的迭代器时，算法从不修改基础容器的大小。正如我们所看到的，算法也许会改变存储在容器中的元素的值，也许会在容器内移动元素，但是，算法从不直接添加或删除元素。

*C++泛型算法头文件*

```c++
#include <algorithm>
#include <numeric>
```

除了少数例外情况，所有算法都在一段范围内的元素上操作，我们将这段范围称为“输出范围（input range）”

accumulate 带有三个形参。头两个形参指定要累加的元素范围。第三个形参则是累加的初值。

find_first_of 函数。这个算法带有两对迭代器参数来标记两段元素范围，在第一段范围内查找与第二段范围中任意元素匹配的元素，然后返回一个迭代器，指向第一个匹配的元素。如果找不到元素，则返回第一个范围的 end 迭代器。

写入到输入序列的一个简单算法是 fill 函数，带有一对迭代器形参，用于指定要写入的范围，而所写的值是它的第三个形参的副本。

fill_n 函数带有的参数包括：一个迭代器、一个计数器以及一个值。该函数从迭代器指向的元素开始，将指定数量的元素设置为给定的值。fill_n 函数假定对指定数量的元素做写操作是安全的。常犯的错误的是：在没有元素的空容器上调用 fill_n 函数

 

确保算法有足够的元素存储输出数据的一种方法是使用插入迭代器。插入迭代器是可以给基础容器添加元素的迭代器。通常，用迭代器给容器元素赋值时，被赋值的是迭代器所指向的元素。而使用插入迭代器赋值时，则会在容器中添加一个新元素，其值等于赋值运算的右操作数的值。

back_inserter 的程序必须包含 iterator 头文件。

back_inserter 函数是迭代器适配器。与容器适配器一样，迭代器适配器使用一个对象作为实参，并生成一个适应其实参行为的新对象。

```c++
vector<int> vec; // empty vector
// ok: back_inserter creates an insert iterator that adds elements to vec
fill_n (back_inserter(vec), 10, 0); // appends 10 elements to vec
```

copy函数带有三个迭代器参数：头两个指定输入范围，第三个则指向目标序列的一个元素。传递给 copy 的目标序列必须至少要与输入范围一样大。

```c++
vector<int> ivec; // empty vector
// copy elements from ilst into ivec
copy (ilst.begin(), ilst.end(), back_inserter(ivec));
```

replace函数带有四个形参：一对指定输入范围的迭代器和两个值。

```c++
// replace any element with value of 0 by 42
replace(ilst.begin(), ilst.end(), 0, 42);
```

replace_copy算法接受第三个迭代器实参，指定保存调整后序列的目标位置。

```c++
// create empty vector to hold the replacement
vector<int> ivec;

// use back_inserter to grow destination as needed
replace_copy (ilst.begin(), ilst.end(),back_inserter(ivec), 0, 42);
```

sort 算法带有两个迭代器实参，指出要排序的元素范围。这个算法使用小于（<）操作符比较元素。

unique 算法带有两个指定元素范围的迭代器参数。该算法删除相邻的重复元素，然后重新排列输入范围内的元素，并且返回一个迭代器，表示无重复的值范围的结束。unique 实际上并没有删除任何元素，而是将无重复的元素复制到序列的前端，从而覆盖相邻的重复元素。unique 返回的迭代器指向超出无重复的元素范围末端的下一位置。

算法不直接修改容器的大小。如果需要添加或删除元素，则必须使用容器操作。

谓词是做某些检测的函数，返回用于条件判断的类型，指出条件是否成立。

stable_sort 算法保留相等元素的原始相对位置。

count_if 算法返回使谓词函数返回条件成立的元素个数。

**插入迭代器**

插入迭代器：这类迭代器与容器绑定在一起，实现在容器中插入元素的功能。

iostream 迭代器：这类迭代器可与输入或输出流绑定在一起，用于迭代遍历所关联的 IO 流。

反向迭代器：这类迭代器实现向后遍历，而不是向前遍历。所有容器类型都定义了自己的 reverse_iterator 类型，由 rbegin 和 rend 成员函数返回。

插入器是一种迭代器适配器，带有一个容器参数，并生成一个迭代器，用于在指定容器中插入元素。通过插入

迭代器赋值时，迭代器将会插入一个新的元素。C++ 语言提供了三种插入器，其差别在于插入元素的位置不同。

* back_inserter，创建使用 push_back 实现插入的迭代器。
* front_inserter，使用 push_front 实现插入。
* inserter，使用 insert 实现插入操作。除了所关联的容器外，inserter还带有第二实参：指向插入起始位置的迭代器。

```c++
list<int> ilst, ilst2, ilst3; // empty lists

// after this loop ilst contains: 3 2 1 0

for (list<int>::size_type i = 0; i != 4; ++i)
ilst.push_front(i);

// after copy ilst2 contains: 0 1 2 3
copy (ilst.begin(), ilst.end(), front_inserter(ilst2));

// after copy, ilst3 contains: 3 2 1 0
copy (ilst.begin(), ilst.end(), inserter (ilst3, ilst3.begin()));
```

**iostream 迭代器**

标准库提供了在 iostream 对象上使用的迭代器：istream_iterator 用于读取输入流，而 ostream_iterator 则用于写输出流。

iostream|迭代器的构造函数
-|-
istream_iterator<T> in(strm); | 创建从输入流   strm 中读取 T 类型对象的istream_iterator 对象
istream_iterator<T> in; | istream_iterator   对象的超出末端迭代器
ostream_iterator<T> in(strm); | 创建将 T   类型的对象写到输出流 strm 的ostream_iterator 对象
ostream_iterator<T>   in(strm, delim); | 创建将 T 类型的对象写到输出流 strm 的ostream_iterator 对象，在写入过程中使用 delim作为元素的分隔符。delim   是以空字符结束的字符数组

istream_iterator|操作
-|-
it1 == it2; it1 != it2 | 比较两上   istream_iterator 对象是否相等（不等）。迭代器读取的必须是相同的类型。如果两个迭代器都是 end   值，则它们相等。对于两个都不指向流结束位置的迭代器，如果它们使用同一个输入流构造，则它们也相等
*it | 返回从流中读取的值
it->mem | 是 (*it).mem 的同义诩。返回从流中读取的对象的 mem 成员
++it; it++ | 通过使用元素类型提供的   >> 操作从输入流中读取下一个元素值，使迭代器向前移动。通常，前缀版本使用迭代器在流中向前移动，并返回对加 1   后的迭代器的引用。而后缀版本使迭代器在流中向前移动后，返回原值

流迭代器都是类模板：任何已定义输入操作符（>> 操作符）的类型都可以定义 istream_iterator。类似地，任何已定义输出操作符（<< 操作符）的类型也可定义 ostream_iterator。在创建流迭代器时，必须指定迭代器所读写的对象类型：

```c++
istream_iterator<int> cin_it(cin); // reads ints1 from cin
istream_iterator<int> end_of_stream; // end iterator value
// writes Sales_items from the ofstream named outfile
// each element is followed by a space
ofstream outfile;
ostream_iterator<Sales_item> output(outfile, " ");
```

ostream_iterator 对象必须与特定的流绑定在一起。在创建istream_iterator 时，可直接将它绑定到一个流上。

```c++
istream_iterator<int> in_iter(cin); // read ints from cin
istream_iterator<int> eof; // istream "end" iterator
// read until end of file, storing what was read in vec
while (in_iter != eof)
// increment advances the stream to the next value dereference reads next value from the istream
vec.push_back(*in_iter++);
```

eof 迭代器定义为空的istream_iterator 对象，用作结束迭代器。绑在流上的迭代器在遇到文件结束或某个错误时，将等于结束迭代器的值。

```c++
istream_iterator<int> in_iter(cin); // read ints from cin
istream_iterator<int> eof; // istream "end" iterator
vector<int> vec(in_iter, eof); // construct vec from an iteratorrange
```

可使用 ostream_iterator 对象将一个值序列写入流中，其操作的过程与使用迭代器将一组值逐个赋给容器中的元素相同：

```c++
// write one string per line to the standard output
ostream_iterator<string> out_iter(cout, "\n");
// read strings from standard input and the end iterator
istream_iterator<string> in_iter(cin), eof;
// read until eof and write what was read to the standard output
while (in_iter != eof)
// write value of in_iter to standard output and then increment the iterator to get the next value from cin
*out_iter++ = *in_iter++;
```

这个程序读 cin，并将每个读入的值依次写到 cout 中不同的行中。

流迭代器有下面几个重要的限制：

* 不可能从 ostream_iterator 对象读入，也不可能写到istream_iterator 对象中。
* 一旦给 ostream_iterator 对象赋了一个值，写入就提交了。赋值后，没有办法再改变这个值。此外，ostream_iterator 对象中每个不同的值都只能正好输出一次。
* ostream_iterator 没有 -> 操作符。

在一些泛型算法上使用流类迭代器。

```c++
istream_iterator<int> cin_it(cin); // reads ints from cin
istream_iterator<int> end_of_stream; // end iterator value
// initialize vec from the standard input:
vector<int> vec(cin_it, end_of_stream);
sort(vec.begin(), vec.end());
// writes ints to cout using " " as the delimiter
ostream_iterator<int> output(cout, " ");
// write only the unique elements in vec to the standard output
unique_copy(vec.begin(), vec.end(), output);
```

**反向迭代器**

反向迭代器是一种反向遍历容器的迭代器。也就是，从最后一个元素到第一个元素遍历容器。反向迭代器将自增（和自减）的含义反过来了：对于反向迭代器，++ 运算将访问前一个元素，而 -- 运算则访问下一个元素。

```c++
// reverse iterator of vector from back to front
vector<int>::reverse_iterator r_iter;
for (r_iter = vec.rbegin(); // binds r_iter to last element
r_iter != vec.rend(); // rend refers 1 before 1st element
++r_iter) // decrements iterator one element
cout << *r_iter << endl; // prints 9,8,7,...0
```

从一个既支持 -- 也支持 ++ 的迭代器就可以定义反向迭代器，流迭代器不能创建反向迭代器。

反向迭代器与其他迭代器之间的关系

```c++
// find first element in a comma-separated list
string::iterator comma = find(line.begin(), line.end(), ',');
cout << string(line.begin(), comma) << endl;
// find last element in a comma-separated list
string::reverse_iterator rcomma = find(line.rbegin(), line.rend(), ',');
// wrong: will generate the word in reverse order
cout << string(line.rbegin(), rcomma) << endl;
// ok: get a forward iterator and read to end of line
cout << string(rcomma.base(), line.end()) << endl;
```

**泛型算法的结构**

算法最基本的性质是需要使用的迭代器种类。所有算法都指定了它的每个迭代器形参可使用的迭代器类型。

另一种算法分类的方法，根据对元素的操作将算法分为下面几种：

* 只读算法，不改变元素的值顺序。
* 给指定元素赋新值的算法。
* 将一个元素的值移给另一个元素的算法。

**泛型算法的形参模式**

* alg (beg, end, other parms);
* alg (beg, end, dest, other parms);
* alg (beg, end, beg2, other parms);
* alg (beg, end, beg2, end2, other parms);

算法的命名规范：包括两种重要模式：第一种模式包括测试输入范围内元素的算法，第二种模式则应用于对输入范围内元素重新排序的算法。

重新对容器元素排序的算法要使用 < 操作符。这些算法的第二个重载版本带有一个额外的形参，表示用于元素排序的不同运算：

sort (beg, end); // use < operator to sort the elements

sort (beg, end, comp); // use function named comp to sort the elements

检查指定值的算法默认使用 == 操作符。系统为这类算法提供另外命名的（而非重载的）版本，带有谓词函数形参。带有谓词函数形参的算法，其名字带有后缀 _if：

find(beg, end, val); // find first instance of val in the input range

find_if(beg, end, pred); // find first instance for which pred is true

区别是否实现复制的算法版本

标准库也为这些算法提供另外命名的版本，将元素写到指定的输出目标。此版本的算法在名字中添加了_copy 后缀：

reverse(beg, end);

reverse_copy(beg, end, dest);

**C++模板和泛型**

* 定义一个通用模板
* 模板特化和偏特化
* 模板实例化与匹配
* 可变参数模板

泛型编程是指独立与任何类型的方式编写代码。泛型编程和面向对象编程，都依赖与某种形式的多态。面向对象编程的多态性在运行时应用于存在继承关系的类，一段代码可以可以忽略基类和派生类之间的差异。在泛型编程中，编写的代码可以用作多种类型的对象。面向对象编程所依赖的多态性称为运行时多态性，泛型编程所依赖的多态性称为编译时多态性或参数式多态性。

**函数模板**

模板定义以关键字 template 开始，后接模板形参表，模板形参表是用尖括号括住的一个或多个模板形参的列表，形参之间以逗号分隔。模板形参表不能为空。模板函数的类型形参跟在关键字 class 或 typename 之后定义.在函数模板形参表中，关键字 typename 和 class 具有相同含义，可以互换使用，两个关键字都可以在同一模板形参表中使用。函数模板可以用与非模板函数一样的方式声明为 inline。说明符放在模板形参表之后、返回类型之前，不能放在关键字 template 之前。函数模板调用方式。在发生函数模板的调用时，不显示给出模板参数而经过参数推演，称之为函数模板的隐式模板实参调用（隐式调用）在发生函数模板的调用时，显示给出模板参数而不需要经过参数推演，称之为函数模板的显示模板实参调用（显示调用）。显示模板实参调用在参数推演不成功的情况下是有必要的。函数模板与函数重载。函数模板实际上是建立一个通用函数，其函数类型和形参类型不具体指定，用一个虚拟的类型来代表，凡是函数体相同的函数都可以用这个模板来代替，不必定以多个函数。重载函数的参数个数、参数类型或参数顺序3者中必须至少有一种不同，函数返回值类型可以相同也可以不同，函数体可以相同。

```c++
template <typename T>
inline bool isEqual(const T& t1, const T& t2) {
   return t1 == t2;
}
```

**类模板**

* 类模板也是模板，因此必须以关键字 template 开头，后接模板形参表
* 除了模板形参表外，类模板的定义看起来与任意其他类问相似。类模板可以定义数据成员、函数成员和类型成员，也可以使用访问标号控制对成员的访问，还可以定义构造函数和析构函数等等。
* 与调用函数模板形成对比，使用类模板时，必须为模板形参显式指定实参，类模板的形参不存在实参推演的。

```c++
const size_t MAXSIZE = 100;
template<class T>
class Stack{
private:
    T elements[MAXSIZE];
public:
    //others
};
```

**模板参数**

* 类型模板形参：类型形参由关见字class或typename后接说明符构成，如template\<class T\> void getMaxVal(const T& a，const T& b){};其中T就是一个类型形参，类型形参的名字由用户自已确定。
* 非类型模板形参：模板的非类型形参也就是内置类型形参，如template\<class T, int X\> greaterThanX(const T& a);其中int X就是非类型的模板形参。非类型形参在模板定义的内部是常量值，也就是说非类型形参在模板的内部是常量。非类型的模板参数是有限制的,一般是一个整型，它们可以是常整数（包括枚举类型）或者指向外部链接对象的指针。浮点数和类对象是不允许作为非类型模板参数的。
* 模板的默认参数。*可以为类模板的类型形参提供默认值，但不能为函数模板的类型形参提供默认值*。函数模板和类模板都可以为模板的非类型形参提供默认参数。类模板类型形参默认值和函数的默认参数一样，如果有多个类型形参则从第一个形参设定了默认值之后的所有模板形参都要设定默认值。类模板的类型形参默认值形式为：template\<class T1, class T2=int\> class A{};为第二个模板类型形参T2提供int型的默认值，在类模板的外部定义类中的成员时template 后的形参表应省略默认的形参类型。比如template\<class  T1, class T2=int\> class A{public: void h();}; 定义方法为template\<class T1,class T2\> void A<T1,T2>::h(){}

```c++
template<typename T,int X = 5>
inline bool isEqualToX(const T& a) {
    return a == X;
}

template<class T,int MAXSIZE=100>
class Stack {
private:
    T elements[MAXSIZE];
public:
    //others
};
```

**模板特化与偏特化**

有时为了需要,针对特定的类型,需要对模板进行特化,也就是特殊处理。 例如，stack类模板针对bool类型，因为实际上bool类型只需要一个二进制位，就可以对其进行存储，使用一个字或者一个字节都是浪费存储空间的.。特化必须在同一命名空间下进行，可以特化类模板也可以特化函数模板，但类模板可以偏特化和全特化，而函数模板只能全特化。模板的偏特化是指需要根据模板的某些但不是全部的参数进行特化。严格的来说，函数模板并不支持偏特化，但由于可以对函数进行重载，所以可以达到类似于类模板偏特化的效果。模板实例化时会优先匹配”模板参数”最相符的那个特化版本。template \< \>告诉编译器这是一个特化的模板。

```c++
template<class T,int MAXSIZE=100>
class Stack {
private:
    T elements[MAXSIZE];
public:
    //others
};

//template specializations aim at bool
template<>
class Stack<bool>{

};
```

```c++
template<typename T>
inline bool isEqual(const T t1, const T t2) {
    return t1 == t2;
}

//针对int型的指针做特化
template<>
inline bool isEqual(const int* p1,const int* p2){
    return *p1 == *p2;
}
```

```c++
template <class T, class Allocator>
class vector { // … // };
template <class Allocator>
class vector<bool, Allocator> { //…//};
```

**模板实例化与匹配规则**

* **隐式实例化**在使用模板函数和模板类时，不存在指定类型的模板函数和模板类的实体时，由编译器根据指定类型参数隐式生成模板函数或者模板类的实体称之为模板的隐式实例化。函数模板隐式实例化指的是在发生函数调用的时候，如果没有发现相匹配的函数存在，编译器就会寻找同名函数模板，如果可以成功进行参数类型推演，就对函数模板进行实例化。类模板隐式实例化指的是在使用模板类时才将模板实例化。
* **显示实例化**显示实例化也称为外部实例化。在不发生函数调用的时候将函数模板实例化，或者在不适用类模板的时候将类模板实例化称之为模板显示实例化。对于函数模板而言，不管是否发生函数调用，都可以通过显示实例化声明将函数模板实例化，定义函数模板为：template函数返回类型 函数模板名<实际类型列表>（函数参数列表），显示实例化为template void func<int>(const int&);类模板的显示实例化，对于类模板而言，不管是否生成一个模板类的对象，都可以直接通过显示实例化声明将类模板实例化，定义类模板格式为：template class 类模板名<实际类型列表>，显示实例化为template class theclass<int>;
* **匹配规则**类模板的匹配规则。最优化的优于次特化的，即模板参数最精确匹配的具有最高的优先权，每个类型都可以用作普通型（a）的参数，但只有指针类型才能用作（b）的参数，而只有void*才能作为(c)的参数。

```c++
template <class T> class vector{//…//}; // (a) 普通型
template <class T> class vector<T*>{//…//}; // (b) 对指针类型特化
template <> class vector <void*>{//…//}; // (c) 对void*进行特化
```

```c++
template <class T> void f(T); // (d)
template <class T> void f(int, T, double); // (e)
template <class T> void f(T*); // (f)
template <> void f<int> (int) ; // (g)
void f(double); // (h)
bool b;
int i;
double d;
f(b); // 以 T = bool 调用 （d）
f(i,42,d) // 以 T = int 调用（e）
f(&i) ; // 以 T = int* 调用（f）
f(d); // 调用（g）
```

**可变参数模板**

可变参数模板是C++11新增的特性之一，它对参数高度泛化，他能表示0到任意个数、任意类型的参数。可变模板参数之前会带有省略号，把带省略号的参数称为“参数包”，它里面包含了0到N（N>=0）个模版参数。我们无法直接获取参数包args中的每个参数的，只能通过展开参数包的方式来获取参数包中的每个参数，这是使用可变模版参数的一个主要特点。可变模版参数和普通的模版参数语义是一致的，所以可以应用于函数和类，即可变模版参数函数和可变模版参数类，然而，模版函数不支持偏特化，所以可变模版参数函数和可变模版参数类展开可变模版参数的方法还不尽相同。

递归函数方式展开参数包。通过递归函数展开参数包，需要提供一个参数包展开的函数和一个递归终止函数，递归终止函数正是用来终止递归的。
逗号方式展开参数包

```c++
#include <iostream>
using namespace std;
//递归终止函数
void print()
{
   cout << "empty" << endl;
}
//展开函数
template <class T, class ...Args>
void print(T head, Args... rest)
{
   cout << "parameter " << head << endl;
   print(rest...);
}


int main(void)
{
   print(1,2,3,4);
   return 0;
}
```

```c++
template <class T>
void printarg(T t)
{
   cout << t << endl;
}

template <class ...Args>
void expand(Args... args)
{
   int arr[] = {(printarg(args), 0)...};
}

expand(1,2,3,4);
```

可变参数模板类的参数包展开的方式和可变参数模板函数的展开方式不同，可变参数模板类的参数包展开需要通过模板特化和继承方式去展开，展开方式比可变参数模板函数要复杂。可变参数模板类是一个带可变模板参数的模板类，比如C++11中的元祖std::tuple就是一个可变模板类，它的定义如下，这个可变参数模板类可以携带任意类型任意个数的模板参数。

```c++
template< class... Types >
class tuple; 
std::tuple<int> tp1 = std::make_tuple(1);
std::tuple<int, double> tp2 = std::make_tuple(1, 2.5);
std::tuple<int, double, string> tp3 = std::make_tuple(1, 2.5, “”);
std::tuple<> tp;//可变参数模板的模板参数个数可以为0个，所以下面的定义也是也是合法的：
```

****

**C++函数指针**

函数指针指向某种特定类型，函数的类型由其参数及返回类型共同决定，与函数名无关。举例如下：

```c++
int add(int nLeft,int nRight);//函数定义  
```

该函数类型为int(int,int),要想声明一个指向该类函数的指针，只需用指针替换函数名即可：

```c++
int (*pf)(int,int);//未初始化  
```

则pf可指向int(int,int)类型的函数。pf前面有*，说明pf是指针，右侧是形参列表，表示pf指向的是函数，左侧为int，说明pf指向的函数返回值为int。则pf可指向int(int,int)类型的函数。而add类型为int(int,int),则pf可指向add函数。

```c++
pf = add;//通过赋值使得函数指针指向某具体函数  
```

```c++
int *pf(int,int);//此时pf是一个返回值为int*的函数，而非函数指针  
```

普通函数指针定义

```c++
int (*pf)(int,int);  
```

使用typedef定义函数指针类型

```c++
typedef int (*PF)(int,int);  
PF pf;//此时，为指向某种类型函数的函数指针类型，而不是具体指针，用它可定义具体指针
```

函数指针的普通使用

```c++
pf = add;  
pf(100, 100);//与其指向的函数用法无异  
(*pf)(100, 100);//此处*pf两端括号必不可少  
```

函数指针作为形参
```c++
//第二个形参为函数类型，会自动转换为指向此类函数的指针  
Void fuc(int nValue, int pf(int, int));  
  
//等价的声明，显示的将形参定义为指向函数的指针  
Void fuc(int nValue, int (*pf)(int, int));  
Void fuc(int nValue, PF);  
```

形参中有函数指针的函数调用，以fuc为例：
```c++
pf = add;//pf是函数指针  
fuc(1, add);//add自动转换为函数指针  
fuc(1, pf);  
```

使用typedef定义的函数指针类型作为返回参数
```c++
PF fuc2(int);//PF为函数指针类型  
```

```c++
int (*fuc2(int))(int, int);//显示定义  
```

由于C++完全兼容C，则C中可用的函数指针用法皆可用于C++

typedef与decltype组合定义函数类型

```c++
typedef decltype(add) add2; 
```

typedef与decltype组合定义函数指针类型

```c++
typedef decltype(add)* PF2;//PF2与1.1PF意义相同
PF2 pf;// pf指向int(int,int)类型的函数指针，未初始化 
```

使用推断类型关键字auto定义函数类型和函数指针

```c++
auto pf = add;//pf可认为是add的别名(个人理解)   
auto *pf = add;//pf为指向add的指针 
```

函数指针形参

```c++
typedef decltype(add) add2;  
typedef decltype(add)* PF2;  
void fuc2 (add2 add);//函数类型形参，调用自动转换为函数指针  
void fuc2 (PF2 add);//函数指针类型形参，传入对应函数(指针)即可  
```

使用auto关键字

```c++
auto fuc2(int)-> int(*)(int,int) //fuc2返回函数指针为int(*)(int,int)
```

使用decltype关键字

```c++
decltype(add)* fuc2(int)//明确知道返回哪个函数，可用decltype关键字推断其函数类型
```

```c++
class A//定义类A  
{  
private:  
  
       int add(int nLeft, int nRight)  
  
       {  
              return (nLeft + nRight);  
       }  
  
public:  
  
       void fuc()  
  
       {  
              printf("Hello  world\n");  
             
       }  
};  
  
   
typedef void(A::*PF1)();//指针名前需加上类名限定  
  
PF1 pf1 = &A::fuc; //必须有&  
  
A a;//成员函数地址解引用必须附驻与某个对象地址，所以必须创建一个队形  
  
(a.*pf1)();//使用成员函数指针调用函数  
```

普通成员函数指针使用举例 

```c++
class A//定义类A  
{  
private:  
  
       int add(int nLeft, int nRight)  
  
       {  
              return (nLeft + nRight);  
       }  
  
public:  
  
       void fuc()  
  
       {  
              printf("Hello  world\n");  
             
       }  
};  
  
   
typedef void(A::*PF1)();//指针名前需加上类名限定  
  
PF1 pf1 = &A::fuc; //必须有&  
  
A a;//成员函数地址解引用必须附驻与某个对象地址，所以必须创建一个队形  
  
(a.*pf1)();//使用成员函数指针调用函数  
```

继承中的函数指针使用举例

```c++
class A  
{  
public:  
       void fuc()  
       {  
              printf("Hello fuc()\n");  
       }  
  
       void fuc2()  
       {  
              printf("Hello A::fuc2()\n");  
       }  
};  
  
class B:public A  
{  
public:  
       virtual void fuc2()  
       {  
              printf("Hello B::fuc2()\n");  
       }  
  
};  
  
typedef void(A::*PF1)();  
typedef void(B::*PF2)();  
  
PF1 pf1 = &A::fuc;  
  
int main()         
{  
       A a;  
       B b;  
       (a.*pf1)();  //调用A::fuc  
       (b.*pf1)();   //调用A::fuc  
  
       pf1 = &A::fuc2;  
       (a.*pf1)();  //调用A::fuc2  
       (b.*pf1)();  //调用A::fuc2  
  
       PF2 pf2 = &A::fuc2;   
       (b.*pf2)(); //调用A::fuc2  
}  
```

重载函数fuc

```c++
Void fuc();  
Void fuc(int);  
```

重载函数的函数指针

```c++
void (*PF)(int) = fuc;//PF指向fuc(int)  
int(*pf2)(int) = fuc;//错误没有匹配的类型
```

