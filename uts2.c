#include<stdio.h>
int main(){
    char op;
    double n1,n2,n3;
    printf("Pilih operator matematika >>> (+, -, *, / ): ");
    scanf("%c", &op);
    
    printf("Bilangan pertama = ");
    scanf("%d", &n1);
    printf("\nBilangan kedua = ");
    scanf("%d", &n2);

    switch (op)
    {
    case '+' :
    n3 = n1 + n2;
    printf("Hasilnya = ");
    printf("%.d\n", n3);
        break;
    case '-' :
    n3 = n1 - n2;
    printf("Hasilnya = ");
    printf("%.d\n", n3);
        break;
    case '*' :
    n3 = n1 * n2;
    printf("Hasilnya = ");
    printf("%.d\n", n3);
        break;
    case '/' :
    n3 = n1 / n2;
    printf("Hasilnya = ");
    printf("%.d\n", n3);
        break;
        default:
        printf("Operator salah.\n");
        break;
    }

    }