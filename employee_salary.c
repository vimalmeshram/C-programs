int main(){
    int employee_ID;
	float working_hours, hours_rate, salary;
	printf("Enter employee ID");
	scanf("%d", &employee_ID);
	printf("Enter total working hours of employee");
	scanf("%f", &working_hours);
	printf("Enter hourly rate of employee work ");
	scanf("%f", &hours_rate);
	salary= working_hours*hours_rate;
	printf("Salary of employee is  %f",salary );
}
