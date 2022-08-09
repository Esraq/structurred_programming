#include<stdio.h>
int main()
{
	int c,d,temp;
	
	
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	
	temp=c;
	c=d;
	d=temp;
	
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	
	
	
	
	return 0;
	
	
	
	
	
	
	
}
