// Write a program that switch Vowel Consonant define?

#include <stdio.h>
#include <math.h>
int main ()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%ch",&ch);

    switch (ch)
{

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel \n");
    break;

    default:
        printf("Consonant \n");
}


    getch();
}
