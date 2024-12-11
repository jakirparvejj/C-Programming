#include <stdio.h>
void func(int j)
{
    int i;
    int fact=1;
    for (i = 1; i <= j; i++)
    {

        fact=fact* i;
    }
    printf("Factorial of %d = %d\n", j, fact);
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    func(num);


    return 0;
}
