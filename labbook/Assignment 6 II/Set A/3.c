#include <stdio.h>
int count = 1;
int nsum(int a){
	printf("\niteration number: %d", count++);
	if (a == 1){
		return 1;
	}
	return a + nsum(a-1);
}

void main(){
	int lim, sum;
	
	printf("Enter limit of your natural numbers: ");
	scanf("%d", &lim);
	
	if (lim <= 0){
		printf("Please enter a positive number!\n");
	}
	else {
		sum = nsum(lim);
		printf("\nSum of natural numbers up to %d is %d\n", lim, sum);	
	}
}