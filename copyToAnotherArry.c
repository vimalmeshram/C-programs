#include<stdio.h>
int main(){
	
	int n, i;
	printf("enter the number of elements: ");
	scanf("%d", &n);
	int first[n], another[n];
	printf("enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d", &first[i]);
	}
		for(i=0;i<n;i++){
	         another[i]=first[i];
	}
	printf("elements of the another array: \n");
	for(i=0;i<n;i++){
	         printf("%d \n", another[i]);
	}
}
