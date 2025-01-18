#include <stdio.h>

int add(int a, int b){
	int ans;
	ans = a + b;
	return ans;
}
int sub(int a, int b){
	int ans;
	ans = a - b;
	return ans;
}
float div(int a, int b){
	float ans;
	ans = a / b;
	return ans;
}
int prod(int a, int b){
	int ans;
	ans = a * b;
	return ans;
}


void main(){
	float result; 
	int num1, num2, op;
	do{
		printf("Enter your numbers: ");
		scanf("%d %d", &num1, &num2);
		printf("\nEnter your option from the below option\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\5: Exit\nEnter here: ");
		scanf("%d", &op);
		switch(op){
			case 1:	result = add(num1, num2);
					break;
			case 2: result = sub(num1, num2);
					break;
			case 3: result = prod(num1, num2);
					break;
			case 4:	result = div(num1, num2);
					break;
			default:	printf("Enter appropriate option!\n");
		}
		printf("Result = %.2f\n", result);
	}while(op != 5);
}