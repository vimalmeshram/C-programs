#include<iostream>
using namespace std;
int main(){
	float weight1, weight2, qty1, qty2 , total_purchase,avg ;
	cout<<"enter weight of first item: ";
	cin>>weight1;
	cout<<"enter weight of second item: ";
	cin>>weight2;
	cout<<"enter number of quantity of first item: ";
	cin>>qty1;
	cout<<"enter number of quantity second item: ";
	cin>>qty2;
	total_purchase= (weight1*qty1)+(weight2*qty2);
	avg=total_purchase/(qty1+qty2);
	cout<<"Average of total items: ";
	cout<<avg;
}
