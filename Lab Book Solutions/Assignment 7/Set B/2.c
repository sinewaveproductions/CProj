#include <stdio.h>

int sqr(int a){
	return a * a;
}

void main(){
	int n, i;
	printf("Enter the number of elements of your array: ");
	scanf("%d", &n);
	
	int array[n];
	int sArray[n];
	
	printf("Enter elements in your array: ");
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
		sArray[i] = sqr(array[i]);
	}
	printf("\n|Original Array\t| |Sorted Array|\t\n");
	for(i = 0; i < n; i++){
		printf("|%d\t\t| |%d\t\t|\n", array[i], sArray[i]);
	}
}