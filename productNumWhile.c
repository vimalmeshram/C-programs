#include<stdio.h>
int main(){
	int i=1, product=1, n;
	printf("enter terms: ");
	scanf("%d", &n);
	
	while(i<=n){
		product*=i;
	   i++;
		
	}
	printf(" Product from 1 to %d is %d \n", n, product);
	

}
