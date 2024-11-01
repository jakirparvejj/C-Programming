// Write a program that calculate Three number area of tringle

#include <stdio.h>
int main ()
{
    float a,b,c,s,area;

    printf("Enter Three Value: ");
    scanf("%f %f %f",&a, &b, &c);

    s=(a+b+c)/2;

    area = sqrt (s*(s-a)*(s-b)*(s-c));

    printf(" The Area is : %.2f\n",area);


    return  0;
}
