#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Hello!";
    printf("%s length %d\n", a, strlen(a));

    char str[] = "This is a string";
    char dest[200];
    strcpy(dest, str);
    printf("%s\n", dest);
    strcat(dest, " with JOPA");
    printf("%s\n", dest);
}
