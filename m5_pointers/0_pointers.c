#include <stdio.h>

void swap(int* pa, int* pb) 
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int v1 = 2;
    int v2 = 3;

    printf("v1=%d, v2=%d\n", v1, v2);
    swap(&v1, &v2);
    printf("v1=%d, v2=%d\n", v1, v2);

    int a = 1;
    int* p = &a;

    printf("%p\n", p);
    printf("%d\n", *p);

    *p = 15;
    printf("%p\n", p);
    printf("%d\n", *p);

    a = 2;
    printf("%p\n", p);
    printf("%d\n", *p);
}
