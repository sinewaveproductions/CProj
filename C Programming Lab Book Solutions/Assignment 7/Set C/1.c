#include <stdio.h>

void findLS(int arr[], int size, int *L, int *sL) {
    *L = arr[0];
    *sL = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *L) {
            *sL = *L;
            *L = arr[i];
        } else if (arr[i] > *sL && arr[i] != *L) {
            *sL = arr[i];
        }
    }
}

int findS(int arr[], int size) {
    int s = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < s) {
            s = arr[i];
        }
    }

    return s;
}

int main() {
    int n, L, sL, s;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter your elements in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findLS(arr, n, &L, &sL);

    s = findS(arr, n);

    printf("Largest: %d\n", L);
    printf("Second Largest: %d\n", sL);
    printf("Smallest: %d\n", s);

    return 0;
}