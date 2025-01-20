#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	int *x;
	x=arr;
	printf("Enter %d elements of array:  \n", n);
	for(i=0;i<n;i++){
		printf("element %d: ", i+1);
		scanf("%d", x+i);
		
		}
	printf("Elements of array are: \n");
	for(i=0;i<n;i++){
		printf("%d", *x);
		x++;
	}	
}
