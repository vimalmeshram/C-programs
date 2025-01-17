#include<stdio.h>

void copyString(char*dest, const char*src){
	int i;
	for(i=0; src[i]!='\0';i++){
		dest[i]=src[i];
	}
	dest[i]='\0';
}
int main(){
	char str1[20];
	char str2[20];
	printf("Enter name to be copied: ");
	gets(str1);
	
	copyString(str2, str1);
	printf("Copied name: %s", str2);
}
