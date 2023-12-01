#include <stdio.h>
int main(){
  char operator;
  double angka1, angka2, hasil;

  printf("Pilih operator matematika >>> (+, -, *, / ): ");
  scanf("%c", &operator);

  printf("Masukan 2 operand: \n");
  scanf("%lf %lf", &angka1, &angka2);

  switch(operator) {
    case '+' :
      hasil = angka1 + angka2;
      printf("Hasil penjumlahan dari ");
      printf("%.1lf + %.1lf = %.1lf\n", angka1, angka2, hasil);
    break;
    case '-' :
      hasil = angka1 - angka2;
      printf("Hasil pengurangan dari ");
      printf("%.1lf - %.1lf = %.1lf\n", angka1, angka2, hasil); 
    break;
    case '*' :
      hasil = angka1 * angka2;
      printf("Hasil perkalian dari ");
      printf("%.1lf * %.1lf = %.1lf\n", angka1, angka2, hasil);
    break;
    case '/' :
      hasil = angka1 / angka2;
      printf("Hasil pembagian dari ");
      printf("%.1lf / %.1lf = %.1lf\n", angka1, angka2, hasil);
    break;
    default:
      printf("Maaf, operator tidak tersedia atau salah, silahkan coba lagi ya.");
    break;
  }

  return 0;
}