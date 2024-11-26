/*Write a program to determine if a given integer x is a palindrome. A palindrome reads the same backward as forward.

Example:
Input: x = 121
Output: true

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore, it is not a palindrome.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter an integer: ");
    scanf("%s", str);

    int len = strlen(str);
    int ispalindrome = 1;


    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            ispalindrome = 0;
            break;
        }
    }


    if (ispalindrome)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
