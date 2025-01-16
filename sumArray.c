#include<stdio.h>
int main(){
           int i, n, sum=0;
           
           
           printf("enter number of element: \n");
           scanf("%d", &n);
           int arr[n];
           printf("enter elements: %d \n", n);
           for(i=0;i<n;i++){
           	scanf("%d", &arr[i]);
           	sum=sum+arr[i];
           	
		   }
		   
		    
	printf("Sum of elements : %d\n", sum);
}
