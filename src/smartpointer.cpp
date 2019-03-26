
#include "smartpointer.h"

#include <memory>

namespace DuGu
{
static void sharedptrDemo(){
    //auto ptr = std::shared_ptr<int>(1);
    printf("hello");
}

static void uniqueptrDemo(){
    
}

static void weakptrDemo(){
    
}

void smartPointerDemo(){
    sharedptrDemo();
    uniqueptrDemo();
    weakptrDemo();
}
}


