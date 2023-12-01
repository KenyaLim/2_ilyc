#include <stdio.h>
#include <string.h>

// Car Struct
typedef struct {
    char make[50];
    char model[50];
    int year;
    float price;
} Car;

// Function to display Car details
void displayCarDetails(Car car) {
    printf("Car Details\n");
    printf("Make: %s\n", car.make);
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: $%.2f\n", car.price);
}

int main() {
    // Declare Car1 instance of Car Struct
    Car car1;

    // Get user inputs
    printf("Enter car make: ");
    fgets(car1.make, sizeof(car1.make), stdin);
    car1.make[strcspn(car1.make, "\n")] = '\0';

    printf("Enter car model: ");
    fgets(car1.model, sizeof(car1.model), stdin);
    car1.model[strcspn(car1.model, "\n")] = '\0';

    printf("Enter car year: ");
    scanf("%d", &car1.year);

    printf("Enter car price: ");
    scanf("%f", &car1.price);

    // Display Car1 details
    displayCarDetails(car1);

    return 0;
}