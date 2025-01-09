#include<stdio.h>
int main(){

	float weight1, weight2, purchase1, purchase2, total_weight, total_items, average;
	printf("Enter weight of first item");
	scanf("%f", &weight1);
	printf("Enter weight of second item");
	scanf("%f", &weight2);
	printf("Enter purchase of first item");
	scanf("%f", &purchase1);
	printf("Enter purchase of second item");
	scanf("%f", &purchase2);
	total_weight= (weight1*purchase1)+(weight2*purchase2);
	total_items= purchase1+purchase2;
	average=total_weight/total_items;
		printf("Average value of items are %f", average );
	}

