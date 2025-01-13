#include<stdio.h>
int main(){
	int i=1, n, sum;
	printf("enter terms: ");
	scanf("%d", &n);
	
	while(i<n){
	if(i%2==0){
		printf("%d \n", i);
		sum+=i;
	}
	   
		i++;
		
	}
	printf(" sum is %d \n", sum);

}
