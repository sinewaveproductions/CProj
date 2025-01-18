#include <stdio.h>

void find(int a, int b, int *ptrL) {
    int diff = a - b;
    if(diff > 0){
    	*ptrL = diff;
	}
	else{
		*ptrL = -diff;
	}
}

void main() {
    int n, i, l, large, n1, n2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
	
	int arr[n];

	printf("Enter elements in your array: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    large = 0;
    n1 = arr[0];
    n2 = arr[1];

    for (i = 0; i < n - 1; i++) {
        find(arr[i], arr[i + 1], &l);
        if (l > large) {
            large = l;
            n1 = arr[i];
            n2 = arr[i + 1];
        }
    }

    printf("The two numbers with highest difference are %d and %d and their difference is %d\n", n1, n2, large);
}