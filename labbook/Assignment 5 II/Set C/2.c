#include <stdio.h>

void fibo(int lim){
	int prev, curr, next;
	prev = 0;
	curr = 1;
	next = prev + curr;
	printf("%d\t%d\t%d\t", prev, curr, next);
	for(int i = 3; i <= lim; i++){
		prev = curr;
		curr = next;
		next = prev + curr;
		printf("%d\t", next);
	}
}

void main(){
	int limit;
	printf("Enter your limit: ");
	scanf("%d", &limit);
	fibo(limit);
	printf("\n");
}