#include<stdio.h>
int main(){
	int rows=5;
	int i, j;
		
	for(i=0;i<rows;i++){
		for(j=rows-i-1;j<rows;j++){
			printf("%d", i);
 }
		printf("\n");
		
	}
	for(i=rows-2;i>=0;i--){
		for(j=rows-i-1;j<rows;j++){
			printf("%d", i);
		}
		printf("\n");
		
	}
	return 0;
}
