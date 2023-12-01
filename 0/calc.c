#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

void main() {
    float num1, num2, result;
    char operator;

    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");
    printf("Pilih Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Bilangan Pertama: ");
    scanf("%f", &num1);

    printf("Bilangan Kedua: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Operator Tidak Valid.\n");
            return 1; // Exit with an error code
    }

    printf("Hasilnya: %.2f\n", result);

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Tidak Bisa dibagi 0.\n");
        return 0; // Return 0 in case of division by zero
    }
}