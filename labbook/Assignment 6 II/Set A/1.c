#include <stdio.h>

float factorial(int n) {
    if (n == 0) {
        return 1.0f;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        float fact = factorial(num);
        printf("Factorial of %d is %.2f\n", num, fact);
    }
    return 0;
}