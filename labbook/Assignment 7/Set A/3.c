#include<stdio.h>

int main() {
    int n, i, largest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    scanf("%d", &arr[0]);
    largest = arr[0];
    for (i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest number = %d\n", largest);
    return 0;
}