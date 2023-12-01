#include<stdio.h>
#include <string.h>

typedef struct {
    char judul_buku[50];
    char penulis[50];
} Buku;

void InfoBuku(Buku buku) {
    printf("Judul Buku: %s\n", buku.judul_buku);
    printf("Penulis: %s\n", buku.penulis);
}