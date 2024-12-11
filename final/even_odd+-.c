#include<stdio.h>
int main ()
{
    int i;

    printf("Befor : ");
    for(i=1; i<=20; i++)
    {
        printf("%d ",i);
    }

    printf("\nAfter : ");
    for (i=1; i<=20; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i+2);
        }
        else
        {
            printf("%d ",i-1);
        }
    }
}
