#include<stdio.h>
int main(){
	float i, n=10, sum=0 ;
	float average;
	printf("enter the number of terms : ");
		
	for(i=0;i<=n;i++){
		printf("number: %f\n", i);
		sum+=i;
	}
	average=sum/10;
	printf(" The sum of first %f natural number is %f \n", n, sum);
	printf(" The average of first %f natural number is %f \n", n, average);
}

