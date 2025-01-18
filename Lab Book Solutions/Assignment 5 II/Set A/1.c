#include <stdio.h>

int squr(int a){
	int sq; 
	sq = a * a;
	return sq;
}

void main(){
	int num, ans; 
	printf("Enter your number: ");
	scanf("%d", &num);
	ans = squr(num);
	printf("Square of %d is %d", num, ans);
}