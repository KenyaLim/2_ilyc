#include <stdio.h>

void copyArray(int *source, int *destination, int length) {
    for (int i = 0; i < length; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    copyArray(source, destination, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}