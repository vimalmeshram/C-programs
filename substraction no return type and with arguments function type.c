//substraction no return type and with arguments function type
#include<stdio.h>
		
	void sub(int x, int y){
		int sub;
		sub=x-y;
		printf("%d ", sub);	
	}
	int main(){
			int a=10, b=20;
			sub(a,b);
		}
