
#include <iostream>
#include <vector>
#include <map>
#include <memory>

#include <stdio.h>

#include "demo.h"

using namespace std;

int main()
{
    auto ptr = auto_ptr<Demo>(new Demo);
    ptr->PrintInfo();
    
    printf_s("hello cpp in vs code\n");
    for(int i = 0; i < 10; i++)
    {
        printf_s("%d\n", i);
    }

    auto release_ptr = ptr.release();
    delete release_ptr;

    return 0;
}

