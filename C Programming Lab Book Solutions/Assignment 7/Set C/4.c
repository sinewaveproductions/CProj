#include <stdio.h>

int sqr(int a){
	return a*a;
}

void main(){
	int n, i, array[5], iArray[5];
	
	printf("Enter elements in your array: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &array[i]);
		iArray[i] = sqr(array[i]);
	}
	printf("\n|Original Array\t| |Squared Array|\t\n");
	for(i = 0; i < 5; i++){
		printf("|%d\t\t| |%d\t\t|\n", array[i], iArray[i]);
	}
}