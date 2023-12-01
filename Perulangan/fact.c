#include <stdio.h>

// Fungsi untuk menghitung faktorial
unsigned long long factorial(int n);

int main() {
    int n;

    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &n);

    // Memanggil fungsi factorial dan mencetak hasilnya
    unsigned long long result = factorial(n);
    printf("Faktorial dari %d adalah %llu\n", n, result);

    return 0;
}

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Faktorial dari angka negatif tidak terdefinisi
    }
    if (n == 0 || n == 1) {
        return 1; // Faktorial dari 0 dan 1 adalah 1
    }

    unsigned long long fact = 1;
    while (n > 1) {
        fact *= n;
        n--;
    }
    return fact;
}