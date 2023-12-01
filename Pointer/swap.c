#include <stdio.h>

void tukar(int *a, int *b);

void main()
{
    int x = 1;
    int y = 2;

    printf("x = %i, y = %i\n", x, y);
    tukar(&x, &y);
    printf("x = %i, y = %i\n", x, y);
}

void tukar(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b=tmp;
}