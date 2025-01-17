#include<stdio.h>
#include<string.h>
void revString(char*str){
	int i;
	int length=strlen(str);
	char temp;
	for(i=0; i<length/2;i++){
	   temp=str[i];
		str[i]= str[length-i-1];
		str[length-i-1]=temp;
	}
	
}
int main(){
	char str1[20];
	printf("Enter name to be Reverse: ");
	gets(str1);
	
	revString(str1);
	printf("Reverse name: %s", str1 );
}
