#include <stdio.h>

struct T_MyStruct
{
    /* data */
    int val1;
    char val2;
    char val3[3];
};

int main()
{
    struct T_MyStruct myStruct;
    myStruct.val1 = 35;
    myStruct.val2 = 'C';
    myStruct.val3[0] = 'H';
    myStruct.val3[1] = 'e';
    myStruct.val3[2] = 'j';

    printf("val1 = %d\n", myStruct.val1);
    printf("val2 = %c\n", myStruct.val2);
    printf("val3 = %s\n", myStruct.val3);

    return 0;
}