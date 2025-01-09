#include<stdio.h>
int main(){
	int value;
	printf("enter value");
	scanf("%d", &value);
	
	switch(value){
		   case 1:
		   printf("Today is Monday");
			break;
			case 2:
			printf("Today is Tuesday");
			break;
			case 3:
			printf("Today is Wednesday");
			break;
			case 4:
			printf("Today is Thursday");
			break;
			default:
			printf("Today is Friday");
			break;
	}
}
