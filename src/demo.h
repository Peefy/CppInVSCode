
#ifndef _DEMO_H_
#define _DEMO_H_

#include <stdio.h>

class Demo
{
private:
    /* data */
public:
    Demo(/* args */) { }
    ~Demo() { }
    void PrintInfo() const{
        printf("Hello Demo Class\n");
    }
};

class Line{
   public:
      double length;
      void setLength( double len );
      double getLength( void );
};

class Box{
    private:
        double width;
    protected:
        int index;
    public:
        Box(int idx = 0) : index(idx){}
        Box(const Box& box){}
        Box operator+(const Box& box){
            return Box(box.index + this->index);
        }
        int getIndex() const{
            return index;
        }
        double length;   // 长度
        double breadth;  // 宽度
        double height;   // 高度
        void setWidth( double wid );
        double getWidth( void );
        double getVolume(void){
            return length * breadth * height;
        }
        static int objectCount;
};

class SmallBox : public Box
{
private:
    /* data */
public:
    SmallBox(int idx){
        this->index = idx;
    }
    ~SmallBox(){}
};

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
    
  }
};

// 基类
class Shape 
{
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
         //cout << "Parent class area :" <<endl;
         return 0;
      }
      virtual int shape() = 0;
      virtual int index(){
          return 0;
      }
};
 
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         //cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
      int shape(){
          return 1;
      }
      int index() override{
          return 1;
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         //cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
      int shape(){
          return 2;
      }
    int index() override{
          return 2;
      }
};

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

#define BEGIN_DEMO_NAMESPACE  namespace demo{
#define END_DEMO_NAMESPACE  }

BEGIN_DEMO_NAMESPACE
    void typeOfDataDemo();
    void noteDemo();
END_DEMO_NAMESPACE

#endif
