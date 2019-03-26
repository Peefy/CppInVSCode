
#include <iostream>
#include <vector>
#include <map>
#include <memory>

#include <stdio.h>

#include "demo.h"
#include "smartpointer.h"

using namespace std;

int main()
{ 
    printf_s("hello cpp in vs code\n");
    for(int i = 0; i < 3; i++)
    {
        printf_s("%d\n", i);
    }

    DuGu::smartPointerDemo();

    return 0;
}

