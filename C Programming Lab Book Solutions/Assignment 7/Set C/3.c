#include <stdio.h>

void main(){
	int i, arr[10], opt, sum = 0, flag = 0;
	
	printf("Enter elements in your array: ");
	for(i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	
	do{
		printf("\nWhat do you want to do?\n\t1: Sum of even elements\n\t2: Sum of odd elements\n\t3: Exit\n\tEnter your option: ");
		scanf("%d", &opt);
		switch(opt){
			case 1:	{
				for(i = 0; i < 10; i++){
					if(arr[i] % 2 == 0){
						sum = sum + arr[i];
					}
				}
				flag = 1;
				break;
			}
			case 2: {
				for(i = 0; i < 10; i++){
					if(arr[i] % 2 != 0){
						sum = sum + arr[i];
					}
				}
				break;
			}
			case 3: printf("\nExiting...");
			default: printf("Enter correct option!\n");
		}
		if(flag){
			printf("\nSum of even numbers of your array is %d\n", sum);
		}
		else{
			printf("\nSum of odd numbers of your array is %d\n", sum);
		}
		sum = 0;
		flag = 0;
	}while(opt != 3);
	printf("Bye!\n");
}