#include "libmlpic.h"

int my_glob = 42;

int ml_util_func(int a)
{
    return a + 1;
}

int ml_func(int a, int b)
{
    int c = b + ml_util_func(a);
    my_glob += c;
    return b + my_glob;
}
