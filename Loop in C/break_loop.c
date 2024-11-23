// Write a program that Break loop?

#include <stdio.h>
#include <math.h>
int main ()
{
    char ch;
    printf("Time code:  ");
    scanf("%c",&ch);

    switch(ch)
    {

    case 'm':
        printf("Good Morning \n");
        break;

    case 'a':
        printf("Good Afternoon \n");
        break;

    case 'e':
        printf("Good Evening \n");
        break;

    default:
        printf("Hello");
    }

    getch();
}
