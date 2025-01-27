#include<stdio.h>
int main(){
	char ch;
	int rows=5;
	int i;
		
	for(i=0;i<rows;i++){
		for(ch='E';ch>='E'-i;ch--){
			printf("%c", ch);
		}
		printf("\n");
		
	}
}
