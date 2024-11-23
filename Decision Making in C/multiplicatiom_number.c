// Write a program that Multiplication Number?

#include <stdio.h>
#include <math.h>
int main ()
{
    int num,i;
    while (1)
    {
        printf("Enter a Number: ");
        scanf("%d",&num);

        for (i=1; i<=10; i++)
            printf("%d X %d = %d\n",num,i,num*i);

    }
    getch();
}
