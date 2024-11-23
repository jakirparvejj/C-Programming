// Write a program that sum and average of an Array?

#include <stdio.h>
#include <math.h>
int main ()
{
    int numbers[5],i,sum=0;
    float avg;

    for(i=0; i<5;i++)
    {
        printf("Number [%d] = ", i);
        scanf("%d",&numbers[i]);
    }

    for (i=0; i<5;i++)
    {
        sum = sum + numbers[i];
        avg = (float)sum/5;
    }

    printf("The Sum is : %d\n",sum);
    printf("The Avg: %.2f\n",avg);

    getch();
}
