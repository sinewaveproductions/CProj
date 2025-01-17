#include<stdio.h>
int main()
{
    int i, n, x, exp=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &x);
    for(i=1; i<=x;){
        exp *= n;
        i++;
    }

    printf("The result is: %d\n", exp);

    return 0;
}