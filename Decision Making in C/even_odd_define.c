// Write a program that Decide Even and Odd Number

#include <stdio.h>
#include <math.h>
int main ()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d",&num);

    if (num%2==0)
        printf("Even \n");
    else
        printf("Odd \n");

    return  0;
}
