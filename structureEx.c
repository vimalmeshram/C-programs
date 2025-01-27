#include<stdio.h>
 
 struct student{
 	char name[20];
 	int rollNo;
 	float fees;
 };
 
 int main(){
 	struct student s1={"John", 101, 5500
	 };
	 printf("%s \t", s1.name);
	 printf("%d \t", s1.rollNo);
	 printf("%f \t", s1.fees);
 }
