#include<stdio.h>
int main ()
{
    int i,n;
    int even=0, odd=0;

    printf("Enter how many number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter all number: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] %2 ==0)
        {
            even++;
            printf("%d\n",a[i]+2);
        }
        else
        {
            odd++;
            printf("%d\n",a[i]-3);
        }
    }

    printf("Even is %d \nodd is %d\n",even,odd);


}
