#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
enum CarFlags
{
    Manual = 1 << 0,
    Passenger = 1 << 1,
    Electric = 1 << 2,
    RightWeel = 1 << 3
};
 
void printCar(char car)
{
    if (car & Manual)
    {
        printf("Manual\n");
    }
    else
    {
        printf("Automatic\n");
    }
    if (car & Electric)
    {
        printf("Electric\n");
    }
    else
    {
        printf("Non electric\n");
    }
    if (car & RightWeel)
    {
        printf("Right wheel\n");
    }
    else
    {
        printf("Left wheel\n");
    }
    if (car & Passenger)
    {
        printf("Passenger\n");
    }
    else
    {
        printf("Cargo\n");
    }
}
 
void main()
{
    char car = 0;
    car |= RightWeel | Electric | Passenger;
 
    printCar(car);
   
    //
    car &= ~Electric & ~Passenger;
   
    printCar(car);
}
