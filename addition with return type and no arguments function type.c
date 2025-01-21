//addition with return type and no arguments function type
#include<stdio.h>
	int add(){
	 int a=10, b=20, sum;
	 sum=a+b;
	 return sum;
	}
	int main(){
		int res;
		res= add();
		printf("%d", res);
	}
