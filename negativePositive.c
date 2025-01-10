#include<stdio.h>
int main(){
	int number;
	printf("enter number: ");
	scanf("%d", &number);
	
	if(number>0){
			printf("%d is Positive number ", number);

	}
	else if(number<0)
	{
		printf("%d is Negative", number);
	}
	else
	{
		printf("%d is zero", number);
	}
}
