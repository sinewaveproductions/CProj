#include <stdio.h>

int main() {
    int arr[20], i, sum = 0;
    float avg;
    printf("Enter 20 elements:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / 20;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
