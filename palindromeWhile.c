#include<stdio.h>
int main(){
	int num, rev=0, remainder, original;
	printf("enter num");
	scanf("%d", &num);
	original= num;
	while(num!=0){
		remainder=num%10;
		rev=rev*10+remainder;
		num/=10;	
	}
	if(original==rev){
		printf("%d is Palindrome", original);
	}else{
		printf("%d is not Palindrome", original);
	}
}
