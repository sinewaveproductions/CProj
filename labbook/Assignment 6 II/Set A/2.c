#include <stdio.h>
int flag = 0;
void printBinary(int n) {
    if (n == 0) {
        return;
    }
    printBinary(n / 2);
	printf("%d", n % 2);
	flag++;
    if (flag >= 4){
    	printf(" ");
    	flag = 0;
	}
	
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else if (num == 0) {
        printf("0\n");
    } else {
        printf("Binary equivalent: ");
        printBinary(num);
        printf("\n");
    }
    return 0;
}