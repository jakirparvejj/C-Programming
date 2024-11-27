#include <stdio.h>

// ফ্যাক্টোরিয়াল ফাংশন
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // 0! এবং 1! এর মান 1
    }
    return n * factorial(n - 1); // রিকার্সিভ কেস
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}
