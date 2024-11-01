// Write a program that Fahrenheit to Centigrade

#include <stdio.h>
int main ()
{
    float f,C;

    printf("Enter Fahrenheit: ");
    scanf(" %f",&f);

    C= (f-32)/1.8;

    printf("The Centigrade is: %.2f",C);


    return  0;
}
