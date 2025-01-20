#include<stdio.h>
int main(){
	char str[20];
	printf("Enter name: ");
	gets(str);
	int vowels=0, consonant=0;
    char *x;
    x=&str[0];
   
while(*x!='\0'){
          if(*x=='a' || *x=='e' || *x=='i' || *x=='o' || *x=='u'){
	  	vowels++;
	  }
		

	 else{
	  		consonant++;
	  }
			x++;
		}
	printf("The number of vowels is %d \n", vowels);
	printf("The number of consonants is %d \n", consonant);
	
}
