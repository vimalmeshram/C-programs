//Multiplication no return type and with arguments function type
#include<stdio.h>
	void mul(int x, int y){
		int mul;
		mul=x * y;
		printf("%d ", mul);
	}
	int main(){
		int a=10, b=20;
		mul(a,b);
	}
