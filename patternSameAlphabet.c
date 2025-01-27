#include<stdio.h>
int main(){
	char ch='E';
	int rows=5;
	int i, j;
		
	for(i=0;i<rows;i++){
		for(j=0;j<rows-i;j++){
			printf("%c", ch);
		}
		printf("\n");
		ch--;
	}
}
