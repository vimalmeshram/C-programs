#include<stdio.h>
int main(){
	int i=1, n;
	printf("enter terms: ");
	scanf("%d", &n);
	
	while(i<=n){
		printf("%d cube is %d \n", i, i*i*i);
		i++;
	}
}
