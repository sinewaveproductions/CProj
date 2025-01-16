#include <stdio.h>

void swap(int *ptr1,int *ptr2){
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void main(){
	int a, b;
	printf("Enter two values: ");
	scanf("%d%d", &a, &b);
	printf("\nBefore swapping: a = %d, b = %d", a, b);
	swap(&a, &b);
	printf("\nAfter swapping: a = %d, b = %d", a, b);
}