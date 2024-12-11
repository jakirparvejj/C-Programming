#include <stdio.h>
#include <math.h>
int main ()
{
    int i,n,min;

    printf("Enter How Many Number: ");
    scanf("%d",&n);

    int a[n];


    printf("Enter Number:");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    min = a[0];

    for (i=1; i<n; i++)
    {
        if (min>a[i])
        {
            min = a[i];
        }
    }

    printf("Min Number is : %d \n",min);

    return 0;
}
