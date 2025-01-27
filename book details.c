#include<stdio.h>
struct books{
	int book_id;
	char title[20];
	char author[20];
	int price;
}bk[5];
int main(){
	int i;
	for(i=0;i<5;i++){
		printf("Enter books details ");
		bk[i].book_id=i+1;
		printf("enter book title: ");
		scanf("%s", bk[i].title);
		printf("enter book author: ");
     	scanf("%s", bk[i].author);
     	printf("enter book price: ");
     	scanf("%d", &bk[i].price);
   
   printf("enter book Id: %d \n", bk[i].book_id );
	printf("enter book title: %s \n", bk[i].title );
	printf("enter book author: %s \n", bk[i].author);
	printf("enter book price: %d \n", bk[i].price );
	}
	
	 
}
