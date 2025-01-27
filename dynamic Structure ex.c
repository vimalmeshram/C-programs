#include<stdio.h>
 
 struct student{
 	char name[20];
 	int rollNo;
 	float fees;
 }s1;
 
 int main(){
 	printf("enter name: ");
 	scanf("%s", s1.name);
 	printf("enter Roll no. : ");
 	scanf("%d", &s1.rollNo);
 	printf("enter fees: ");
 	scanf("%f", &s1.fees);
 	printf("%s \t", s1.name);
	 printf("%d \t", s1.rollNo);
	 printf("%f \t", s1.fees);
 }
