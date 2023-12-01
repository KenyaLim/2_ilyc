#include <stdio.h>

// Struct Declaration
struct Programmer {
    char name[50];
    char language[20];
    int years_experience;
};

// Function to fill struct details
void fill_programmer_details(struct Programmer *programmer) {
    printf("Enter the name of the Programmer: ");
    scanf("%s", programmer->name);

    printf("Enter the primary programming language: ");
    scanf("%s", programmer->language);

    printf("Enter the number of years of experience: ");
    scanf("%d", &programmer->years_experience);
}

// Function to display struct details
void display_programmer_details(struct Programmer *programmer) {
    printf("\n\nDetails of the Programmer: ");
    printf("\nName: %s", programmer->name);
    printf("\nPrimary Programming Language: %s", programmer->language);
    printf("\nYears of Experience: %d\n\n", programmer->years_experience);
}

int main() {
    struct Programmer programmer;

    fill_programmer_details(&programmer);
    display_programmer_details(&programmer);

    return 0;
}