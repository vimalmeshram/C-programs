//Multiplication with return type and no arguments function type
#include<stdio.h>
	int mul(){
	 int a=10, b=20, mul;
	 mul=a*b;
	 return mul;
	}
	int main(){
		int res;
		res= mul();
		printf("%d", res);
	}
