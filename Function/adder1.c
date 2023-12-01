#include <stdio.h>

// declare function prototype
int add_two_ints(int a, int b);

int main(void)
{
    int x, y, z;
    printf("Give me an integer : "); 
    scanf("%d", &x);
    printf("Give me another integer: "); 
    scanf("%d", &y);

    // add the two numbers together via a function call
    z = add_two_ints(x, y);

    // output the result
    printf("The sum of %d and %d is %d!\n", x, y ,z);
    return 0;

}

int add_two_ints(int a, int b)
{
    return a + b;
    
}