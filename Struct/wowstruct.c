#include <stdio.h>
#include <string.h>

//deklarasi struct dengan nama struct stok berisi 
typedef struct {
	//tipe data char elemem nama
	char nama[100];
	//tipe data integer elemen jumlah
	char nim[20];
	//tipe data integer elemen harga
	char jurusan[100];
} mahasiswa;

typedef struct {
	int jam;
	int menit;
	mahasiswa siswa;
} kedatangan;

//deklarasi object dengan nama object persediaan sebagai nama alias dari struct stok
kedatangan datang[2];

int main()
{
	printf("=============================\n");
	printf(" STRUCT SUB STRUCT DAN ARRAY \n");
	printf("=============================\n\n");
	
	for(int i=0; i<=1; i++){
	//proses penginputan data dari elemen nama dan jumlah
	printf("Data ke-%d\n", i+1);
	printf("Nama Mahasiswa     : ");scanf("%s", datang[i].siswa.nama);
	printf("Jurusan Mahasiswa  : ");scanf("%s", datang[i].siswa.jurusan);
	printf("NIM Mahasiswa      : ");scanf("%s", datang[i].siswa.nim);
	printf("Jam Kedatangan     : jam ");scanf("%d", &datang[i].jam);
	printf("Menit Kedatangan   : ");scanf("%d", &datang[i].menit);
	printf("\n");
}
	int totalmenit;
	totalmenit = (datang[0].menit) - (datang[1].menit);
	printf("Selisih kedatangan kedua Mahasiswa : %d menit", totalmenit);
	
}