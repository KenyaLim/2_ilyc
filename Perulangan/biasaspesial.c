#include <stdio.h>

int main() {
    int n;

    // Meminta input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    // Memeriksa apakah bilangan adalah kelipatan 11
    if (n > 0 && n % 11 == 0) {
        printf("SPESIAL\n");
    } else {
        printf("BIASA\n");
    }

    return 0;
}
