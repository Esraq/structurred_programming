#include<stdio.h>
int main()
{
	double basic_salary,dearness_allowance,house_rent,gross_salary;
	
	printf("Enter Niloys basic salary: ");
	scanf("%lf",&basic_salary);
	dearness_allowance=0.4*basic_salary;
	house_rent=0.2*basic_salary;
	gross_salary=basic_salary-dearness_allowance-house_rent;
	printf("Gross salary of Niloy:%.2lf",	gross_salary);
	
	return 0;
	
}
