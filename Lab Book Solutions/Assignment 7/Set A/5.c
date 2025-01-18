#include <stdio.h>

int main() {
    int arr[10], even[10], odd[10], i, even_count = 0, odd_count = 0;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[even_count] = arr[i];
            even_count++;
        } else {
            odd[odd_count] = arr[i];
        	odd_count++;
        }
    }
    printf("Even numbers: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}