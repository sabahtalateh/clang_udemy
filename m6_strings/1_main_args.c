#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++) {
        printf("[%d]=%s\n", i, argv[i]);
    }
}
