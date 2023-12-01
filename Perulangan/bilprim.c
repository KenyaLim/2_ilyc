#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (is_prime(n) == 1)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
    return 0;
}
