#include<stdio.h>
int main(){
           int i,j, n;
           int arr[n];
           
           
           printf("enter number of element: \n");
           scanf("%d", &n);
           
           printf("enter elements: %d \n", n);
           for(i=0;i<n;i++){
           	scanf("%d", &arr[i]);
		   }
		   
		   for(i=0;i<n;i++){
		   	arr[j]=arr[i];
		   	printf("another Array : %d\n", arr[j]);
		   }


}
