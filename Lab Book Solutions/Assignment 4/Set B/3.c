#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("First ten multiples of %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d ", num * i);
    }

    printf("\n");

    return 0;
}