#include <stdio.h>

int main()
{
    int p[] = {1,2,3,4};

    int* a1 = p;
    printf("%p\n", a1);

    int a1v = *a1;
    printf("%d\n", a1v);

    int* a2 = &p[1];
    printf("%p\n", a2);

    int a2v = *a2;
    printf("%d\n", a2v);

    int* p1 = p;
    printf("%p\n", p1);
    printf("%d\n", *p1);


    int* p2 = p1 + 1;
    printf("%p\n", p2);
    printf("%d\n", *p2);

    char str[] = "Hello";

    char *letter = str;
    printf("[%p]=%c\n", letter, *letter);
    *letter++;
    printf("[%p]=%c\n", letter, *letter);
    *letter++;
    printf("[%p]=%c\n", letter, *letter);
    *letter++;
    printf("[%p]=%c\n", letter, *letter);
    *letter++;
    printf("[%p]=%c\n", letter, *letter);
    *letter++;
    printf("[%p]=%c\n", letter, *letter);
    *letter++;
    printf("[%p]=%c\n", letter, *letter);

}