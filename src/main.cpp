
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
    printf("hello cpp in vs code\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", i);
    }

    typeOfDataDemo();

    DuGu::smartPointerDemo();

    return 0;
}

