#include <stdio.h>
int main ()
{
    char lower,upper;


    printf("Enter any uppercase Letter: ");
    scanf("%c",&upper);

    lower= tolower(upper);
    printf("The lower Letter is: %c \n",lower);


    return  0;
}
