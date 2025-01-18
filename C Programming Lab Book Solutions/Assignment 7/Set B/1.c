#include <stdio.h>

void sort(int arr[]) { 
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[10], sortedArray[10];

    printf("Enter elements of your array [max 10 characters]: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        sortedArray[i] = array[i]; 
    }

    sort(sortedArray); 

    printf("Sorted Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sortedArray[i]);
    }

    printf("\n");
    return 0;
}