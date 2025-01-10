#include<stdio.h>
int main(){
	char char1;
	printf("enter any Input: ");
	scanf("%c", &char1);
	
	if(char1>='A' && char1<='Z' || char1>='a' && char1<='z'){
			printf("%c is an Alphabet ", char1);

	}
	else if(char1>='0' && char1<='9')
	{
		printf("%c is a Number ", char1);
	}
	else{
		printf("%c is a Special Character ", char1);
	}
}
