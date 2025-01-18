#include <stdio.h>

void prog(int size){
	int i, arr[size];
	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	printf("\nElements at even positions of the array are: \nPosition\tElement\n");
	for(i = 0; i < size; i+=2){
		printf("[%d]\t\t%d\n", i, arr[i]);
	}
}

void main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	prog(n);
	printf("\n");
}