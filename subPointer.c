#include<stdio.h>
int main(){
	int a=5, b=10, sub=0;
	int *x, *y;
	x=&a;
	y=&b;
	sub=*x-*y;
	printf("%d", sub);
}
