#include <stdio.h>
int main (){
int a[] = {1, 2, 3, 4, 5};
int *ptr = a;

// Print the values of the array
for (int i = 0; i < 5; i++) {
    printf("%d ", *ptr); // *ptr dereferences the pointer and gets the value stored at the address it points to
    ptr++; // Moves the pointer to the next integer in the array
}
}