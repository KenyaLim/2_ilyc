#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* strcamp untuk membandingkan username password, kalau cocok lanjut
kalau tidak berhenti */

void order() {
    int nights;
    printf("Masukkan berapa malam: ");
    scanf("%d", &nights);
    printf("Terima kasih! Anda telah memesan %d malam.\n", nights);
}

int main() {
    char username[50], password[50];
    int password_verification;

    printf("Masukkan username: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    // pengecekan username dan password
    if (strcmp(username, "user") == 0 && strcmp(password, "pass") == 0) {
        order();
    } else {
        printf("Username atau password salah. Program akan berhenti.\n");
        password_verification = 0;
    }

    return password_verification;
}