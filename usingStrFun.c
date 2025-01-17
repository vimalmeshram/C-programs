#include<stdio.h>
#include<string.h>
int main(){
	
	char str[20];
	char copy[20];
	
	printf("Enter name: \n");
	gets(str);
	printf("%s", str);
	strcpy(copy, str);
	printf("%s", copy);
	
}
