#include<stdio.h>
void func (int j)
{
    int i,fst=0,snd=1,next;
    for(i=0; i<j; i++)
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
int main()
{
    int n;
    printf("Enter Positive Number: ");
    scanf("%d",&n);
    func(n);
}

