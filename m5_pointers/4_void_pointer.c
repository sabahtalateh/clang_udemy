#include <stdio.h>

enum value_type {
    INT,
    CHAR,
    STRING
};

void print_value(void* p, enum value_type type)
{
    switch (type) {
        case INT:
            printf("%d\n", *((int*) p));
            break;
        
        case CHAR:
            printf("%c\n", *((char*) p));
            break;

        case STRING:
            printf("%s\n", ((char*) p));
            break;

        default:
            printf("Wrong type\n");
            break;
    }
}

int main()
{
    int number = 10;
    char character = 'A';
    char str[] = "HELLO!";

    print_value(&number, INT);
    print_value(&character, CHAR);
    print_value(&str, STRING);
}
