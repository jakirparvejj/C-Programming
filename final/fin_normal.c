#include<stdio.h>
int main()
{
    int i,n,fst=0,snd=1,next;
    printf("Enter Positive Number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            next=i;

        }
        else
        {
            next=fst+snd;
            fst=snd;
            snd=next;
        }

        printf("%d ",next);

    }

}
