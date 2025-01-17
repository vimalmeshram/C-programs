#include<stdio.h>
#include<string.h>
int main(){
	
	char str[20];
	

	
	printf("Enter first name: ");
	gets(str);
	strlwr(str);
	printf("lowercase name: %s \n", str);
	strupr(str);
	printf("uppercase name: %s \n", str);
}
