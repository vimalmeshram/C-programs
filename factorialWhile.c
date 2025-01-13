#include<stdio.h>
int main(){
	int i=1, n, factorial;
	printf("enter terms: ");
	scanf("%d", &n);
	
	while(i<=n){

		factorial*=i;  
		i++;
		
	}
	printf(" Factorial of %d is %d \n", n, factorial);

}
