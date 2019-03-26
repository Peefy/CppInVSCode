
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

#endif
