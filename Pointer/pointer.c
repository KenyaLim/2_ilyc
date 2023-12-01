#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
   for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("\n");

}

int main() {
    int source[] = {1, 2, 3, 4, 5, 6 ,7};
    int destination[5]; 
    int size = sizeof(source) / sizeof(source[0]);

    copyArray(source, destination, size);
}