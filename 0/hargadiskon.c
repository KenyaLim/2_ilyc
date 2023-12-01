#include <stdio.h>

int main() {

    float harga, diskon, pembayaran;
    float jumlahDiskon;
    float hargaSetelahDiskon;


    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    printf("Masukkan diskon dalam persen: ");
    scanf("%f", &diskon);

    jumlahDiskon = (diskon / 100) * harga;
    hargaSetelahDiskon = harga - jumlahDiskon;

    // Menghitung jumlah pembayaran yang diperlukan
    printf("Harga sebelum diskon: %.2f\n", harga);
    printf("Jumlah diskon: %.2f\n", jumlahDiskon);
    printf("Jumlah pembayaran: %.2f\n", hargaSetelahDiskon);

    return 0;
}