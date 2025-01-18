#include <stdio.h>

int power(int base, int exp){
	int result;
    if(exp == 0)
		return 1;
    if (exp == 1)
		return base;
    result = base * power(base, exp -1);
    return result;
}

int main(){
    int base, exponent, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    result = power(base, exponent);
    printf("%d raised to the power %d is %d\n", base, exponent, result);
    return 0;
}