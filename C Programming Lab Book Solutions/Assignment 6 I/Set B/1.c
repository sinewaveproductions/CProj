#include <stdio.h>

void max(int *ptr1,int *ptr2,int *ptr3){
	if(*ptr1 > *ptr2){
		if(*ptr1 > *ptr3){
			printf("%d is greatest", *ptr1);
		}
	}
	else if(*ptr2 > *ptr3){
		printf("%d is greatest", *ptr2);
	}
	else{
		printf("%d is greatest", *ptr3);
	}
}

void main(){
	int n1, n2, n3;
	printf("Enter your three numbers: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	max(&n1, &n2, &n3);
	printf("\n");
}