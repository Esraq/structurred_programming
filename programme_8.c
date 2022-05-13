#include<stdio.h>
int main()
{
	double a,b,addition,substraction,multiply,division;
	
	printf("Enter the value of a:");
	scanf("%lf",&a);
	printf("Enter the value of b:");
	scanf("%lf",&b);
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
	
	printf("Value of Addition=%.5lf\n",addition);
	printf("Value of Substract=%.5lf\n",substraction);
	printf("Value of Multiply=%.5lf\n",multiply);
	printf("Value of Division=%.5lf\n",division);
	
	
    return 0;
	
}
