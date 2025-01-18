#include <stdio.h>

int main() {
    int n, i, pos, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Current array:\n");
    for(i = 0; i < n; i++){
        printf("[%d]\t%d\n", i, arr[i]);
    }
    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    for (i = n; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("[%d]\t%d\n", i, arr[i]);
    }
    printf("\n");
    return 0;
}