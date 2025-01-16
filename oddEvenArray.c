#include<stdio.h>
int main(){
	int arr[5]={0,1,2,4,5};
	int oddarr[5];
	int evenarr[5];
	int i, j=0,k=0;

	
	for(i=0;i<5;i++){
		
			if(arr[i]%2==0){
			evenarr[j]=arr[i];
			j++;
				}else{
					oddarr[k]=arr[i];
					k++;
				}
			
	}
	
		for(i=0; i<k;i++){
	
		printf("%d", oddarr[i]);
	}
	printf("  \n");
	for(i=0; i<j;i++){
	
			printf("%d", evenarr[i]);
	}
	

}
