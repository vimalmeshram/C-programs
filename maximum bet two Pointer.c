#include<stdio.h>
int main(){
	int a, b, max;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	int *x, *y;
	x=&a;
	y=&b;
	if(*x>*y){
	printf("value %d of a is Maximum", *x);	
	}else{
		printf("value %d of b is Maximum", *y);	
	}
	
	
}
