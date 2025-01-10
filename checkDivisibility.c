#include<stdio.h>
int main(){
	int number;
	printf("enter number: ");
	scanf("%d", &number);
	
	if(number%5==0, number%11==0){
			printf("%d is Divisible by 5 & 11 ", number);

	}
	else
	{
		printf("%d is not Divisible by 5 & 11 ", number);
	}
}
