// Write a program that Nested  loop?

#include <stdio.h>
#include <math.h>
int main ()
{
    int i,j;

    for (i=1; i<=3; i++)
    {
        for (j=i; j<=i; j++)
        {
            printf("%d \n",i,j);
        }
        printf("\n");
    }

    printf("Loop End\n");


    getch();
}
