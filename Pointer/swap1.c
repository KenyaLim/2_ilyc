#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Sebelum penggantian:\nx = %d\ny = %d\n", x, y);
    swap(&x, &y);
    printf("Sesudah penggantian:\nx = %d\ny = %d\n", x, y);

    return 0;
}