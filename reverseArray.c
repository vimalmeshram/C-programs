#include<stdio.h>
int main(){
           int i, n;
           int arr[n];
           
           printf("enter number of element: \n");
           scanf("%d", &n);
           
           printf("enter elements: %d \n", n);
           for(i=0;i<n;i++){
           	scanf("%d", &arr[i]);
		   }
		   
		   for(i=n-1;i>=0;i--){
		   	printf("reverse Array : %d\n", arr[i]);
		   }


}
