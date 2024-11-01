// Write a program that area of circle
#include <stdio.h>
int main ()
{
    float radious,area;

    printf("Enter Radious: ");
    scanf(" %f",&radious);
    area= 3.1416*radious*radious;

    printf("The area is: %.2f\n",area);


    return  0;
}
