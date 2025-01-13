#include<stdio.h>
int main(){
	int i, n, sum=0;
	float avg;
	printf("enter 10 numbers: \n");
	
	
	while(i<10){
		printf("number: ");
		scanf("%d", &n);
	    sum+=n;
		i++;
	}
		
	avg=sum/10;
		printf(" The sum is %d \n", sum);
	printf(" The average is %f \n", avg);
	
}

