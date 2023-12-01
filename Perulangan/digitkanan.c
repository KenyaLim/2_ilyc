#include <stdio.h>

int main() {
    int a, b, c;

    // Meminta input tiga bilangan
    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", &a, &b, &c);

    // Mendapatkan digit paling kanan dari masing-masing bilangan
    int digit_a = a % 10;
    int digit_b = b % 10;
    int digit_c = c % 10;

    // Memeriksa apakah ada dua atau lebih bilangan dengan digit paling kanan yang sama
    if ((digit_a == digit_b) || (digit_b == digit_c) || (digit_a == digit_c)) {
        printf("SAMA\n");
    } else {
        printf("TIDAK SAMA\n");
    }

    return 0;
}
