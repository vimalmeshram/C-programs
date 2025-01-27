#include<iostream>
using namespace std;
int main(){
	int total_days, remaining_days,year, weeks, days;
	cout<<"Enter number of Days:";
	cin>>total_days;
	cout<<"Entered total days means: ";
	year = total_days/365;
	cout<< year <<" years"<<endl;
	remaining_days = total_days%365;
	weeks = remaining_days/7;
	cout<< weeks <<" week"<<endl;
	days = weeks%7;
	cout<< days <<" day"<<endl;
	
	
	
}
