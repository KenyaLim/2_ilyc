#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void validatePassword(char* username, char* password) {
    // contoh validasi password, cek username dan password di database
    if (strcmp(username, "user") == 0 && strcmp(password, "pass") == 0) {
        printf("Login berhasil\n");
    } else {
        printf("Password salah, silahkan coba lagi\n");
        exit(1);
    }
}

int main() {
    char username[100];
    char password[100];

    printf("Masukkan username: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    validatePassword(username, password);

    return 0;
}