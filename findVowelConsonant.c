#include<stdio.h>
int main(){
	char char1;
	printf("enter any Alphabet: ");
	scanf("%c", &char1);
	
	if(char1>='A' && char1<='Z' || char1>='a' && char1<='z'){
	
	
		if(char1=='A' || char1=='E' || char1=='I' || char1=='O' || char1=='U'||
		   char1=='a' || char1=='e' || char1=='i' || char1=='o' || char1=='u')
	{
			printf("%c is an Vowel ", char1);

	}
	else
	{
		printf("%c is an Consonant ", char1);
	}
}
	else{
		printf("%c is not an Alphabet ", char1);
	}

}
