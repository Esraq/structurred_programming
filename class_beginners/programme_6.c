#include<stdio.h>
int main()
{
	float a,b,addition,substraction,multiply,division; 
    printf("Enter a float number:");
	scanf("%f",&a);
	printf("Enter a float number:");
	scanf("%f",&b);
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
	///divisibility=a%b;
	
	printf("Addition:%.2f\n",addition);
	printf("Substraction:%.2f\n",substraction);
	printf("Multiply:%.2f\n",multiply);
	printf("Division:%.2f\n",division);
	
	
    return 0;
	
}
