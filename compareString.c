#include<stdio.h>
#include<string.h>
int main(){
	
	char str[20];
	char str2[20];
	int comp;
	printf("Enter first name:");
	gets(str);
	printf("Enter last name: ");
	gets(str2);
	comp=strcmp(str,str2);
	printf(" %d", comp);
}
