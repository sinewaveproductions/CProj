#include <stdio.h>

int gcd(int a, int b){
    int remainder;
	if (b == 0)
		return a;
    remainder = a % b;
    return gcd(b, remainder);
}

int main(){
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}