
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <memory>

#include <stdio.h>

#include "demo.h"
#include "smartpointer.h"

using namespace std;

int main()
{ 
    printf("hello cpp in vs code\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", i);
    }

    thread_local std::vector<int> v;

    demo::typeOfDataDemo();
    demo::noteDemo();

    DuGu::smartPointerDemo();

    auto plane = PlaneType::Bo737;

    return 0;
}

