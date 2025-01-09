#include<stdio.h>
int main(){

	float pie=3.14, r, a, p;
	printf("Enter radius of circle");
	scanf("%f", &r);
	a=pie*r*r;
	printf("Area of circle is %f \n", a);
	p=2*pie*r;
		printf("Perimeter of circle is %f \n", p);
}
