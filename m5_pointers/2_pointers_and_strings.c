#include <stdio.h>

int is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

void print_vowels(char* p)
{
    while (*p != 0)
    {
        if (is_vowel(*p)) {
            printf("%c",*p);
        }
        p++;
    }
    printf("\n");
}

void remove_vowels(char* p)
{
    char* p_dst = p;
    
    while(*p != 0) 
    {
        if (!is_vowel(*p)) {
            *p_dst = *p;
            p_dst++;
        }
        p++;
    }
    *p_dst = 0;
}

int main()
{
    char str1[] = "Hello World!";

    print_vowels(str1);
    remove_vowels(str1);
    printf("%s\n", str1);
}
