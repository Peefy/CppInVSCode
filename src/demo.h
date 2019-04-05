
#ifndef _DEMO_H_
#define _DEMO_H_

#include <stdio.h>

class Demo
{
private:
    int m_index;
public:
    Demo(/* args */) { }
    ~Demo() { }
    void PrintInfo() const{
        printf("Hello Demo Class\n");
    }

    void setIndex(int index){
        if (index < 0){
            this->m_index = -index;
        }else{
            this->m_index = index;
        }
    }

};

enum class PlaneType
{
    Helicopter,
    Plane,
    Bo737
};

#endif
