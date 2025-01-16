#include<stdio.hn>
int main(){
	int arr[5]={0,1,0,4,5};
	int newarr[5];
	int i, j=0;

	
	for(i=0;i<5;i++){
		
			if(arr[i]==0){
			newarr[j]=arr[i];
			j++;
			
		}	
	}
	
	for(i=0; i<5;i++){
		if(arr[i]!=0){
			newarr[j]=arr[i];
			j++;
		}
	}
	for(i=0;i<5;i++){
		printf("%d", newarr[i]);
	}
	

}
