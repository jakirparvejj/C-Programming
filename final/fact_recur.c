
#include <stdio.h>
int factorial(int n)
{
    int i,fact=1;
    for (i = 1; i <= n; i++)
    {

        fact= fact*i;
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter Positive Number: ");
    scanf("%d",&num);

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
