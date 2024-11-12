#include <stdio.h>
int main ()
{
    char lower,upper;


    printf("Enter any lowercase Letter: ");
    scanf("%c",&lower);

    upper= toupper(lower);
    printf("The Uppercase Letter is: %c \n",upper);


    return  0;
}