
#include "demo.h"
#include "stack.h"

#include <fstream>
#include <iostream>  
#include <cstring>
#include <string>  
#include <limits>  
#include <ctime>
#include <exception>
#include <mutex>
#include <pthread.h>

using namespace std;  

#define concat(a, b) a ## b

struct Books{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;

double Box::getWidth(void){
    return width;
}
 
void Box::setWidth( double wid ){
    width = wid;
}

// 初始化类 Box 的静态成员
int Box::objectCount = 0;

// 成员函数定义
double Line::getLength(void)
{
    return length ;
}
 
void Line::setLength( double len )
{
    length = len;
}

struct MyException : public exception
{
  const char * what () const throw ()
  {
    return "C++ Exception";
  }
};

template <typename T>
inline T const& Max (T const& a, T const& b) 
{ 
    return a < b ? b:a; 
} 

static void constDemo(){
    int a1 = 3;   ///non-const data
    const int a2 = a1;    ///const data
    int * a3 = &a1;   ///non-const data,non-const pointer
    const int * a4 = &a1;   ///const data,non-const pointer
    int * const a5 = &a1;   ///non-const data,const pointer
    int const * const a6 = &a1;   ///const data,const pointer
    const int * const a7 = &a1;   ///const data,const pointer
}

static double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}

mutex lockobj;

static void* say_hello(void* args){
    if (lockobj.try_lock()){
        auto arg = *(static_cast<int*>(args));
        cout << "Hello dugu " << arg << endl;
        lockobj.unlock();
    }
    return 0;
}

BEGIN_DEMO_NAMESPACE

void typeOfDataDemo(){
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
}

void noteDemo(){
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
   
    // 把 now 转换为字符串形式
    char* dt = ctime(&now);
 
    cout << "本地日期和时间：" << dt << endl;
 
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间："<< dt << endl;

    // 基于当前系统的当前日期/时间
    now = time(0);

    cout << "1970 到目前经过秒数:" << now << endl;
 
    tm *ltm = localtime(&now);
 
    // 输出 tm 结构的各个组成部分
    cout << "年: "<< 1900 + ltm->tm_year << endl;
    cout << "月: "<< 1 + ltm->tm_mon<< endl;
    cout << "日: "<<  ltm->tm_mday << endl;
    cout << "时间: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;

    char str[] = "Unable to read....";
 
    clog << "Error message : " << str << endl;

    strcpy( book.title, "C++ 教程");
    strcpy( book.author, "Runoob"); 
    strcpy( book.subject, "编程语言");
    book.book_id = 12345;
    cout << book.author << endl;

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
    
    Line line;
 
    // 设置长度
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;
 
    // 不使用成员函数设置长度
    line.length = 10.0; // OK: 因为 length 是公有的
    cout << "Length of line : " << line.length <<endl;

    B b(10);
    cout << b.a << endl;
    cout << b.a1 << endl;   //正确
    //cout << b.a2 << endl;   //错误，类外不能访问protected成员
    //cout << b.a3 << endl;   //错误，类外不能访问private成员
    cout << ++Box::objectCount << endl;

    Rectangle Rect;
 
    cout << "Total area: " << Rect.area() << endl;

    cout << (Box(2) + Box(1)).getIndex() << endl;

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

    Adder a;
    
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    
    cout << "Total " << a.getTotal() << endl;

    char data[100];
 
    // 以写模式打开文件
    ofstream outfile;
    outfile.open("afile.dat");
    
    cout << "Writing to the file" << endl;
    cout << "Enter your name: "; 
    //cin.getline(data, 100);
    
    // 向文件写入用户输入的数据
    outfile << data << endl;
    
    cout << "Enter your age: "; 
    //cin >> data;
    //cin.ignore();
    
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

    int x = 50;
    int y = 0;
    double z = 0;
    
    try {
        z = division(x, y);
        cout << z << endl;
    }catch (const char* msg) {
        cerr << msg << endl;
    }

    double* pvalue  = NULL; // 初始化为 null 的指针
    pvalue  = new double;   // 为变量请求内存
    
    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    
    delete pvalue;         // 释放内存

    int **arr;
    int mm = 3;
    int n = 3;
    // 假定数组第一维长度为 m， 第二维长度为 n
    // 动态分配空间
    arr = new int *[mm];
    for( int i=0; i<mm; i++ )
    {
        arr[i] = new int [n]  ;
    }
    //释放
    for( int i=0; i<mm; i++ )
    {
        delete [] arr[i];
    }
    delete [] arr;

    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl; 
 
    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
/*
    try{
        Stack<int> intStack;       // int 类型的栈
        Stack<string> stringStack; // string 类型的栈

        // 操作 int 类型的栈
        intStack.push(7);
        cout << intStack.top() << endl;

        // 操作 string 类型的栈
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const &ex){
        cerr << "Exception: " << ex.what() << endl;
    }
    */
    int xy = 100;
    cout << concat(x, y) << endl;

    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    const int NUM_THREADS = 5;
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    int indexes[NUM_THREADS];// 用数组来保存i的值
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        indexes[i] = i;
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, (void*)&indexes[i]);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    //pthread_exit(NULL);

// 创建一个向量存储 int
   vector<int> vec; 
 
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

    for (auto iter : vec){
        cout << "value of v = " << iter << endl;
    }

}

END_DEMO_NAMESPACE
