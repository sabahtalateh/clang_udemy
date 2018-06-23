#include <stdio.h>

int main() {
    int x = 10;
    int y = x++;
    printf("x = %d, y = %d\n", x, y);

    x = 10;
    y = ++x;
    printf("x = %d, y = %d\n", x, y);

    int a = 5;
    int b = 2;
    float c = (float)a / b;
    printf("c = %f\n", c);

    return 0;
}
