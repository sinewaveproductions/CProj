#include <stdio.h>

void evod(int lower, int upper){
	int i, evenFlag = 0;
	printf("\nEven Numbers:\t");
	for(i = lower; i <= upper; i++){
		if (i % 2 == 0){
			printf("%d\t", i);
		}
	}
	printf("\nOdd Numbers:\t");
	for(i = lower; i <= upper; i++){
		if (i % 2 != 0){
			printf("%d\t", i);
		}
	}	
}

void main(){
	int lBound, uBound;
	printf("Enter your lower bound: ");
	scanf("%d", &lBound);
	printf("\nEnter your upper bound: ");
	scanf("%d", &uBound);
	evod(lBound, uBound);
}