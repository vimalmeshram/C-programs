#include<stdio.h>
int main(){
	int number;
	printf("enter number: ");
	scanf("%d", &number);
	
	if(number%2==0){
			printf("%d is Even number ", number);

	}
	else
	{
		printf("%d is odd number ", number);
	}
}