#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[100];
    char sekolah[100];
    unsigned int uangSaku;
} Siswa;

int main()
{
    Siswa siswa01;

    printf("==++ Pendaftaran Siswa Baru ++==\n");
    printf("Nama: ");
    fgets(siswa01.nama, sizeof(siswa01.nama), stdin);

    printf("Sekolah: ");
    fgets(siswa01.sekolah, sizeof(siswa01.sekolah), stdin);

    printf("Uang saku: ");
    scanf("%u", &siswa01.uangSaku);

    printf("\n");

    printf("%s bersekolah di %s", siswa01.nama, siswa01.sekolah);
    printf(" dengan uang saku %u per hari\n", siswa01.uangSaku);

    return 0;
}