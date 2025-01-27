#include<iostream>
using namespace std;
int main(){
	string emp_id, name;
	int salary, workedHr, salary_per_hr;
	cout<<"Enter employee Id: ";
	cin>>emp_id;
	cout<<"Enter employee name: ";
	cin>>name;
	cout<<"Enter employee total worked hour in a month:  ";
	cin>>workedHr;
	cout<<"Enter salary per hour of employee:  ";
	cin>>salary_per_hr;
	salary= workedHr * salary_per_hr;
	cout<<"employee Id: "<<emp_id<<endl;
	cout<<"employee name: "<<name<<endl;
	cout<<"employee salary for month: "<<salary<<endl;
	
}
