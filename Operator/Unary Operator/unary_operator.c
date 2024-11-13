// Write a program that Unary  operator

#include <stdio.h>
#include <math.h>
int main ()
{
    int x=16;

    printf("%d\n",++x);     //x=17
    printf("%d\n",x);          //x=17
    printf("%d\n",++x);     //x=18
    printf("%d\n",x);         //x=18
    printf("%d\n",--x);      //x=17
    printf("%d\n",--x);      //x=16
    printf("%d\n",x++);    //x=16
    printf("%d\n",++x);    //x=18

    return  0;
}
