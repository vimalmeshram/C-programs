//addition with return type and with arguments function type

#include<stdio.h>
	int add(int x, int y){
	 int sum;
	 sum=x+y;
	 return sum;
	}
	int main(){
		int a=10, b=20, res;
		res= add(a,b);
		printf("%d", res);
	}
