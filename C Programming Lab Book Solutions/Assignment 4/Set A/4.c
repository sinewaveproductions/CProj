#include<stdio.h>
int main()
{
    int n, c=0, i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        if (n % i == 0){
            c++;
        }
        i++;
    }
    
    if (c == 2){
        printf("%d is prime number \n", n);
    }
    else{
        printf("%d is not a prime number \n", n);
    }
    
    return 0;
}