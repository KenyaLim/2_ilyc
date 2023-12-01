#include <stdio.h>

void main()
{
    char *s = "HI";

    printf("%s\n", s); //outputnya HI
    printf("%c\n", *s); //outputnya H
    printf("%c\n", *(s + 1)); //outputnya I
}