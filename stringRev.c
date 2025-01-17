#include<stdio.h>
#include<string.h>
int main(){
	
	char str[20];
	

	
	printf("Enter first name: ");
	gets(str);
	strrev(str);
	printf("Reverse name: %s", str);
}
