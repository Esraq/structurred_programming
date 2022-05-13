#include<stdio.h>
int main()
{
	float fahrenheit,centigrade;
	
	printf("Enter temperature of city in fahrenheit:");
	scanf("%f",&fahrenheit);
	centigrade=(5.0/9.0)*(fahrenheit-32);
	printf("Temperature:%f ",centigrade);
	
	return 0;
}
