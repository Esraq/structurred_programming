#include<stdio.h>
int main()
{
	
	int a,b,addition,substraction,multiply,division,divisible;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
	divisible=a%b;
	
	printf("Addition=%d\n",addition);
	printf("Substraction=%d\n",substraction);
	printf("Multiply=%d\n",multiply);
	printf("Division=%d\n",division);
	printf("Divisible=%d\n",divisible);

	return 0;
	
}
