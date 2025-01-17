#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for(i = 0; i < n; i++){
    	scanf("%d", &arr[i]);
	}
	printf("Alternate elements are: ");
	for(i = 0; i < n; i+=2){
		printf("%d ", arr[i]);
	}
}