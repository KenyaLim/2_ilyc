#include <stdio.h>

int add(int a, int b);
int min(int a, int b);
int mult(int a, int b);
int div(int a, int b);

int main(){
  int num1;
  int num2;
  int operation;
  printf("Mau Melakukan operasi apa?\n 1. Tambah\n 2. Kurang\n 3. Kali\n 4. Bagi\n");
  scanf("%d", &operation);

  if(operation == 1){
    printf("Masukkan angka: ");
    scanf("%d", &num1);
    printf("Masukkan angka ke 2: ");
    scanf("%d", &num2);
    printf("Hasil tambah: %d", add(num1, num2));
  } else if(operation == 2){
    printf("Masukkan angka: ");
    scanf("%d", &num1);
    printf("Masukkan angka ke 2: ");
    scanf("%d", &num2);
    printf("Hasil kurang: %d", min(num1, num2));
  }else if(operation == 3){
    printf("Masukkan angka: ");
    scanf("%d", &num1);
    printf("Masukkan angka ke 2: ");
    scanf("%d", &num2);
    printf("Hasil kali: %d", mult(num1, num2));
  }else if(operation == 4){
    printf("Masukkan angka: ");
    scanf("%d", &num1);
    printf("Masukkan angka ke 2: ");
    scanf("%d", &num2);
    printf("Hasil bagi: %d", div(num1, num2));
  }

  return 0;
}

int add(int a, int b){
  return a + b;
}
int min(int a, int b){
  return a - b;
}
int mult(int a, int b){
  return a * b;
}
int div(int a, int b){
  return a / b;
}