#include<stdio.h>
int main(){
	char char1;
	printf("enter any Alphabet: ");
	scanf("%c", &char1);
	
	if(char1>='A' && char1<='Z' || char1>='a' && char1<='z'){
			printf("%c is an Alphabet ", char1);

	}
	else
	{
		printf("%c is not an Alphabet ", char1);
	}
}
