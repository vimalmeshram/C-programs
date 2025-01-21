//substraction with return type and with arguments function type
#include<stdio.h>
int sub(int x, int y){
	int z;
	z = x - y;
	return z;
	
}
int main(){
	int a=20, b=10, res;
	res=sub(a,b);
	printf("%d", res);
}
