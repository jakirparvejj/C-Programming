// Write a program that Define Factorial value Number?

#include <stdio.h>
#include <math.h>
int main ()
{
    int i,fact=1,n;

    printf("Enter a Fact Num: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    printf("%d",fact);
    getch();
}
