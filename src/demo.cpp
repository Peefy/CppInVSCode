
#include "demo.h"

static void constDemo(){
    int a1 = 3;   ///non-const data
    const int a2 = a1;    ///const data
    int * a3 = &a1;   ///non-const data,non-const pointer
    const int * a4 = &a1;   ///const data,non-const pointer
    int * const a5 = &a1;   ///non-const data,const pointer
    int const * const a6 = &a1;   ///const data,const pointer
    const int * const a7 = &a1;   ///const data,const pointer
}
