#include<stdio.h>
int main()
{
    int i,n,j,temp;
    printf("How many numbar of array:");
    scanf("%d",&n);
    int a[n];
     printf("Enter the numbar of array:");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);


     }
     for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;


             }

         }
     }
      for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }


 }