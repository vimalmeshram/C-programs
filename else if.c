#include<stdio.h>
int main(){
	int age;
	printf("enter age");
	scanf("%d", &age);
	if(age>=18){
		
		printf("Yes vote");
	}
		else if(age<15)
	
	{
		printf("kid");
	}

	else
	{
		printf("not valid");
	}
}
