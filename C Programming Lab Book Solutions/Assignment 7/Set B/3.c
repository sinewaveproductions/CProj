#include <stdio.h>

int inr(int a){
	return a+=1;
}

void main(){
	int n, i;
	printf("Enter the number of elements of your array: ");
	scanf("%d", &n);
	
	int array[n];
	int iArray[n];
	n
	printf("Enter elements in your array: ");
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
		iArray[i] = inr(array[i]);
	}
	printf("\n|Original Array\t| |Incremented Array|\t\n");
	for(i = 0; i < n; i++){
		printf("|%d\t\t| |%d\t\t|\n", array[i], iArray[i]);
	}
}