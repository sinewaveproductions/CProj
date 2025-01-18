#include <stdio.h>

int reverse(int n, int rev){
	int digit;
    if(n == 0)
		return rev;
    digit = n % 10;
    rev = rev * 10 + digit;
    return reverse(n/10, rev);
}

int main(){
    int num, reversed_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reversed_num = reverse(num, 0);
    printf("Reversed number: %d\n", reversed_num);
    return 0;
}