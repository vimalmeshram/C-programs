#include<stdio.h>
int main(){
	int a, b, c;
	printf("enter value of a: ");
	scanf("%d", &a);
	printf("enter value of b: ");
	scanf("%d", &b);
	printf("enter value of c: ");
	scanf("%d", &c);
	if(a>b){
			printf("Value %d is maximum ", a);

	}
	else if(b>c)
	{
		printf("Value %d is maximum", b);
	}
	else if(c>a)
	{
		printf("Value %d is maximum", c);
	}
}
