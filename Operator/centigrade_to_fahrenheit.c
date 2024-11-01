// Write a program that Centigrade to Fahrenheit
 
#include <stdio.h>
int main ()
{
    float c,F;

    printf("Enter Centigrade: ");
    scanf(" %f",&c);

    F= (1.8*c)+32;

    printf("The Fahrenheit is: %.2f",F);


    return  0;
}
