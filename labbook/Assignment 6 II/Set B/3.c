#include <stdio.h>

int sum_digits(int n){
	int sum;
    if (n < 10)
		return n;
    sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum_digits(sum);
}

int main(){
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = sum_digits(num);
    printf("Sum of digits until single digit: %d\n", sum);
    return 0;
}