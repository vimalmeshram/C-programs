//Division with return type and with arguments function type


#include<stdio.h>

int div(int x, int y){
	int div;
	div=x/y;
    return div;
}
int main(){
	int a, b, res;
	res=div(a, b);
	printf("%d", res);
}
