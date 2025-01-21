//Division with no return type and with arguments function type

#include<stdio.h>

void div(int x, int y){
	int div;
	div=x/y;
	printf("%d", div);
}
int main(){
	int a, b;
	div(40, 20);
}
