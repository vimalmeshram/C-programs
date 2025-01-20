#include<stdio.h>
int main(){
	int a=5, b=10, sum=0;
	int *x, *y;
	x=&a;
	y=&b;
	sum=*x+*y;
	printf("%d", sum);
}
