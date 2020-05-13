
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <memory>
#include <atomic>
#include <stdio.h>
#include <thread>
#include <sstream>

//#include "demo.h"
//#include "smartpointer.h"
#include "iir.h"

using namespace std;

int main()
{ 
    //thread_local std::vector<int> v;

    //demo::typeOfDataDemo();
    //demo::noteDemo();

    //DuGu::smartPointerDemo();

    //auto plane = PlaneType::Bo737;
    //atomic<int> foo(0);
    //map<int, int> m;
    filter_test();
    return 0;
}

