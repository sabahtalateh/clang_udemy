#include "libmlpic.h"
#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int c = ml_func(a, b);

    printf("%d\n", c);

    return 0;
}
