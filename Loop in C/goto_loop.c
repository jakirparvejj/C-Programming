// Write a program that go to  loop?

#include <stdio.h>
#include <math.h>
int main ()
{
    int i = 11;
    if (i % 2 == 0)
    {

        printf("The number is even \n");
        goto last;
    }
    else
    {

        printf("The number is odd \n");
    }
last:
    printf("Jakir Parvej");


    getch();
}
