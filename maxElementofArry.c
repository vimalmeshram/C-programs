#include<stdio.h>
int main(){
	
	int n, i, max;
	printf("enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	max=arr[0];
	
	for(i=0;i<n;i++){
	         if(arr[i]>max){
	         	max=arr[i];
			 }
	}
	 printf("Maximum element of an array: %d \n", max);
}
