#include <stdio.h>

int main()
{
    int a = 100, b = 200;
    int* pa = &a;               // pa is a pointer to integer.
    const int* pc = &a;         // pc is a pointer to constant integer.
    int const* pc2 = &a;        // same as pc.
    int* const pp = &a;         // contant pointer to int.
    
    const int* const ppc = &a;  // const pointer to const int.
    int const* const ppc2 = &a; // same as ppc.

    printf("====PA====\n");
    printf("[%p]=%d\n", pa, *pa);
    pa = &b;
    printf("[%p]=%d\n", pa, *pa);

    printf("====PC====\n");
    printf("[%p]=%d\n", pc, *pc);
    pc = &b;
    printf("[%p]=%d\n", pc, *pc);
    // *pc2 = 300;
}
