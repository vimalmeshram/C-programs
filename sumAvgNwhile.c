#include<stdio.h>
int main(){
	float i, n, sum;
	float avg;
	printf("enter terms: ");
	scanf("%f", &n);
	
	while(i<=n){
		printf("%f \n", i);
	    	sum+=i;
		i++;
		
	}
    avg=sum/n;

	printf(" sum is %f \n", sum);
	printf(" Average is %f \n", avg);
}
