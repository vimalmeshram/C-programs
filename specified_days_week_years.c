#include<stdio.h>
int main(){

	int total_days, days, weeks, years;
	printf("Enter total days");
	scanf("%d", &total_days);
    years= total_days/365;
    weeks=(total_days%365)/7;
    days=(total_days%365)%7;
    
    printf("%d total days equivalent to , %d years, %d weeks, %d days \n", total_days, years, weeks, days);
}
