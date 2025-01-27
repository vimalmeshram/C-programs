#include<stdio.h>
 
 struct emp{
 	int id;
 	char name[20];
 	float salary;
 }e1;
 
 int main(){
 	printf("enter Employee ID: ");
 	scanf("%d", &e1.id);
 	printf("enter Employee name: ");
 	scanf("%s", e1.name);
 	printf("enter Employee salary: ");
 	scanf("%f", &e1.salary);
 	printf("Employee ID: %d \n", e1.id);
	 printf("Employee name: %s \n", e1.name);
	 printf("Employee salary:  %f \n", e1.salary);
 }
