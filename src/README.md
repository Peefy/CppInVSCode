
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

## C++知识点

* **智能指针**

C++程序设计中使用堆内存是非常频繁的操作，堆内存的申请和释放都是程序员自己管理。程序员自己管理内存可以提高程序的效率，但是整体来说堆内存的管理是麻烦的，C++引入智能指针的概念，方便内存管理。使用普通指针，容易造成内存泄露(忘记释放),二次释放,程序发生异常内存泄露等问题,使用智能指针能更好的管理内存

智能指针的原理:
* 1.智能指针使用了`RALL` `(获取资源即初始化)`的技术对普通的指针进行封装,使得智能的指针实质是个对象,行为表现却像一个指针
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

* **C++局部变量、全局变量、静态变量（堆、栈、静态存储区）**

* **堆**-亦称动态内存分配。程序在运行的时候用malloc或new申请任意大小的内存，程序员自己负责在适当的时候用free或delete释放内存。
```c++
char* str = new char[100];
delete[] str;
str = 0;
```
* **栈**-在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。
* **静态存储区**-内存在程序编译的时候就已经分配好，这块内存在程序的整个运行期间都存在。它主要存放静态数据、全局数据和常量

* **STL**
* **内存池**
* **cast函数**

C++11智能指针share_ptr<>、auto_ptr<>、make_ptr<>()

STL标准模板库 algorithm库

const、static、static_cast<>

C++内存池、内存管理、内存泄露

继承与多态override

