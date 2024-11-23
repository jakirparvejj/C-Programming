// Write a program that Define Prime  Number?

#include <stdio.h>
#include <math.h>
int main ()
{
    int num,count=0,i;



    printf("Enter a Positive Number: ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime number \n",num);
    }
    else
    {
        printf("%d is not a prime number \n",num);
    }



    getch();
}
