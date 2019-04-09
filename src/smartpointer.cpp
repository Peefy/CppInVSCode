
#include "smartpointer.h"

#include <memory>

namespace DuGu
{
static void sharedptrDemo(){
    //auto ptr = std::shared_ptr<int>(1);
    printf("hello shared_ptr\n");
    int a = 10;
    //std::shared_ptr<int> ptra = std::make_shared<int>(a);
    std::shared_ptr<int> ptra = std::shared_ptr<int>(&a);
    std::shared_ptr<int> ptra2(ptra);
    printf("the use count of ptra is %d\n", ptra.use_count());
    int b = 20;
    int *pb = &a;
    //std::shared_ptr<int> ptrb = pb;  //error
    std::shared_ptr<int> ptrb = std::shared_ptr<int>(&b);
    //std::shared_ptr<int> ptrb = std::make_shared<int>(b);
    printf("the use count of ptrb is %d\n", ptrb.use_count());
    ptra = ptrb;
    pb = ptrb.get();
    printf("the use count of ptra is %d\n", ptra.use_count());
    printf("the use count of ptrb is %d\n", ptrb.use_count());
}

static void uniqueptrDemo(){
    std::unique_ptr<int> uptr(new int(10));
    std::unique_ptr<int> uptr2 = std::move(uptr);
    uptr2.release();
}

static void weakptrDemo(){
    int a = 10;
    std::shared_ptr<int> sh_ptr = std::shared_ptr<int>(&a);
    printf("the use count of shared ptr is %d\n", sh_ptr.use_count());

    std::weak_ptr<int> wp(sh_ptr);
    printf("the use count of weak ptr is %d\n", wp.use_count());

    if(!wp.expired()){
        std::shared_ptr<int> sh_ptr2 = wp.lock(); 
        *sh_ptr = 100;
        printf("the use count of weak ptr is %d\n", wp.use_count());
    }
}

static void mySmartPointerDemo(){
    Smartpointer<TempClass> sp1(new TempClass(1));
    Smartpointer<TempClass> sp2(sp1);
    Smartpointer<TempClass> sp3(new TempClass(2));
    sp2 = sp3;
    printf("the use count of sp1 ptr is %d\n", sp1.use_count());
    printf("the use count of sp3 ptr is %d\n", sp3.use_count());
}

void smartPointerDemo(){
    sharedptrDemo();
    uniqueptrDemo();
    weakptrDemo();
    mySmartPointerDemo();
}
}


