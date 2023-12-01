#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *judul_buku;
    char *penulis;
} Buku;

void InfoBuku(Buku *buku) {
    printf("Judul Buku: %s\n", buku->judul_buku);
    printf("Penulis: %s\n", buku->penulis);
}

int main() {
    // Buat buku baru
    Buku *buku_baru = (Buku *) malloc(sizeof(Buku));

    buku_baru->judul_buku = "Pulang";
    buku_baru->penulis = "Leila S.Chudori";

    InfoBuku(buku_baru);

    free(buku_baru);

    return 0;
}