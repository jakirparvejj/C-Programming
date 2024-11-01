// Write a program that area of rectangle
#include <stdio.h>
int main ()
{
    float height,width,area;

    printf("Enter Height and Width: ");
    scanf("%f %f",&height,&width);

    area= height * width;

    printf("The area is: %.2f",area);

    return  0;
}
