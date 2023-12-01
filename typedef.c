#include <stdio.h>

// Creating an alias 'integer' for 'int' data type
typedef int integer;
typedef int array[5];

int main() {
    // Declaring a variable 'number' of type 'integer'
    integer number = 42;
    array arr = {1,2,3,4,5};

    printf("The answer to the ultimate question of life, the universe, and everything is %d.\n", number);
    printf("Array = ");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d \n", arr[i]);
    }
    return 0;
}