//Multiplication with return type and with arguments function type
#include<stdio.h>
	int mul(int x, int y){
	 int mul;
	 mul=x*y;
	 return mul;
	}
	int main(){
		int a=10, b=20, res;
		res= mul(a, b);
		printf("%d", res);
	}
