#include <stdio.h>
#include <string.h>

// Struct untuk data Buku
typedef struct {
    char judul_buku[50];
    char penulis[50];
} Buku;

// Fungsi untuk menampilkan informasi Buku
void InfoBuku(Buku buku) {
    printf("Judul Buku: %s\n", buku.judul_buku);
    printf("Penulis: %s\n", buku.penulis);
}

int main() {
    // Contoh data Buku
    Buku buku1;
    strcpy(buku1.judul_buku, "Pulang");
    strcpy(buku1.penulis, "Leila S.Chudori");

    // Menampilkan informasi Buku
    InfoBuku(buku1);

    return 0;
}