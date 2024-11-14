// Write a program that switch for making a calculator?

#include <stdio.h>
#include <math.h>
int main ()
{
    double num1,num2;
    char op;

    printf("Enter operator (+,-,*,/): ");
    scanf("%c",&op);

    printf("Enter two Number: ");
    scanf("%lf %lf",&num1,&num2);

    switch (op)
    {
    case '+' :
    {
        printf("%lf + %lf = %lf \n",num1,num2,num1+num2);
        break;
    }

    case '-' :
    {
        printf("%lf - %lf = %lf \n",num1,num2,num1-num2);
        break;
    }

    case '*' :
    {
        printf("%lf * %lf = %lf \n",num1,num2,num1*num2);
        break;
    }

    case '/' :
    {
        printf("%lf / %lf = %lf \n",num1,num2,num1/num2);
        break;
    }

    default:
        printf("Number are invalid");
    }

    getch();
}
