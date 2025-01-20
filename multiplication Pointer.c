#include<stdio.h>
int main(){
	int a=5, b=10, mul=0;
	int *x, *y;
	x=&a;
	y=&b;
	mul=*x * *y;
	
	printf("%d", mul);
}
