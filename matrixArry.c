#include<stdio.h>
int main(){
	int i, j;
	int matrix[3][3];
	
	printf("Enter 9 element of matrix 3*3: \n");
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
		
		printf("element of matrix for position [%d][%d]: ", i, j);
		scanf("%d", &matrix[i][j]);
	}
	 
	}
	
	printf("elements are: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", matrix[i][j]);
		}
		printf(" \n");
		
	}
}
