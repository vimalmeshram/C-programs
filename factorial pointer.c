#include<stdio.h>
int main(){
	int i, num, factorial=1;
	printf("enter positive number: ");
	scanf("%d", &num);
	int *x;
	x=&factorial;
	
	for(i=0; i<num;i++){
     *x*=i;
	}
	printf("The factorial of %d is: %d \n", num, *x);
}
