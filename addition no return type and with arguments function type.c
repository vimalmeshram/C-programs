//addition no return type and with arguments function type
#include<stdio.h>
	void add(int x, int y){
		int sum;
		sum=x + y;
		printf("%d ", sum);
	}
	int main(){
		int a=10, b=20;
		add(a,b);
	}
