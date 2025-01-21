//substraction with return type and no arguments function type
#include<stdio.h>
		
	int sub(){
		int a=10, b=20, sub;
		sub=a-b;
		return sub;
		
	}
int main(){
	int res;
	res=sub();
	printf("%d", res);
}
