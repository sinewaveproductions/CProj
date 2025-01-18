#include <stdio.h>

int main() {
    float x, sum = 0;
    int n, i;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * x;
    }

    printf("Sum of the series: %.2f\n", sum);

    return 0;
}