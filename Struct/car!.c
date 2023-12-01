#include <stdio.h>
#include <string.h>

//ini dari bapakny

struct car
{
int year;
char model[10];
char plate[7];  int odometer;
double engine_size;
};

typedef struct car car_t;

void main()
{
    car_t myCar;    
    printf("size of myCar %d \n", sizeof(myCar));
    myCar.year = 2023;
    strcpy(myCar.model, "Yamaha");
    strcpy(myCar.plate, "AB1234JY");
    myCar.odometer=1000;
    myCar.engine_size=3000;

    printf("Year = %d\n", myCar.year);
    printf("Model = %s\n", myCar.model);
    printf("Plate = %s\n", myCar.plate);
    printf("Odometer = %d\n", myCar.odometer);
    printf("Engine Size = %f\n", myCar.engine_size);
}