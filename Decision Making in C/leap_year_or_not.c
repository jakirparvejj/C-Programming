// Write a program that define leap year or not?

#include <stdio.h>
#include <math.h>
int main ()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if (year%400==0)
        printf("This is leap year! ",year);

    else if (year%4==0 && year%100!=0)
        printf("This is Leap year! ",year);

    else
        printf("This is not a Leap Year");


    getch();
}