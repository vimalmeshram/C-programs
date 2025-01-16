#include<stdio.h>
int main(){
	int arr[8]={5,4,2,8,9,7,4,6};
	
	int i,j,k;
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(arr[j]>arr[j+1]){
				k=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=k;
			}
		}
	}
	printf("sorted Array: \n");
	for(i=0;i<8;i++){
	printf("%d", arr[i]);
	}
}
