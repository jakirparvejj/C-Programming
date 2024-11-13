// Write a program that Decide What is Largest number?

#include <stdio.h>
#include <math.h>
int main ()
{
    int num1,num2;

    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    

    if (num1>num2)
        printf("Large num is: %d\n",num1);
        
    else if (num2>num1)
        printf("Large num is : %d \n",num2);
        
    else
        printf("Numbers are equal");

    getch();
}
