#include<stdio.h>
int main(){
	int year;
	printf("enter Year: ");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=0 || year%400==0){
			printf("%d is a leap Year ", year);

	}
	else
	{
		printf("%d is not a leap Year ", year);
	}
}
