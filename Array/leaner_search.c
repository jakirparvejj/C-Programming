// Write a program that Leaner search an Array?

#include <stdio.h>
#include <math.h>
int main ()
{
    int n[] = {10,50,587,4754,4,1};
    int target = 1;
    int i;
    int found = -1;

    for (i = 0; i< 6; i++)
    {
        if (n[i] == target)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("The Number is Not Found!");
    }
    else
    {
        printf("The Number is found!");
    }

    getch();
}
