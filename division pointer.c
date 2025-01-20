#include<stdio.h>
int main(){
	int a=10, b=5, div=0;
	int *x, *y;
	x=&a;
	y=&b;
	div=(*x)/ (*y);
	
	printf("%d", div);
}
