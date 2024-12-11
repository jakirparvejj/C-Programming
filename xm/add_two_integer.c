#include <stdio.h>

int main()
{
    int num1, num2, result;
    char operation;

    // First operation
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operation (+, -, *, /):\n");
    scanf(" %c", &operation);

    if (operation == '+')
        result = num1 + num2;
    else if (operation == '-')
        result = num1 - num2;
    else if (operation == '*')
        result = num1 * num2;
    else if (operation == '/')
        result = num1 / num2;

    printf("Result: %d\n", result);

    // Second operation
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operation (+, -, *, /):\n");
    scanf(" %c", &operation);

    if (operation == '+')
        result = num1 + num2;
    else if (operation == '-')
        result = num1 - num2;
    else if (operation == '*')
        result = num1 * num2;
    else if (operation == '/')
        result = num1 / num2;

    printf("Result: %d\n", result);

    return 0;
}
