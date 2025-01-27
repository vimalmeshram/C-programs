#include<stdio.h>
int main(){
	int rows=4;
	int i, j;
		
	for(i=0;i<rows;i++){
		for(j=3;j>=3-i;j--){
			printf("%d", j);
 }
		printf("\n");
		
	}
	for(i=rows-2;i>=0;i--){
		for(j=3;j>=3-i;j--){
			printf("%d", j);
		}
		printf("\n");
		
	}
	return 0;
}
