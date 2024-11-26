#include<stdio.h>
int main ()
{
    int i,n;

    printf("Enter number: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter Array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int v,pos=-1;

    printf("Enter target :  ");
    scanf("%d",&v);

    for(i=0; i<n; i++)
    {
        if (v==a[i])
        {
            pos=1+i;
            break;
        }
    }

    if (pos==-1)
    {

        printf("Not Found");
    }
    else
    {

        printf("Found nuber %d id %d",v,pos);

    }
}

