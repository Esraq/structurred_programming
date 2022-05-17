#include<stdio.h>
int main()
{
	
	double length,breadth,area,perimeter;
	
	
	printf("Enter the length of the traingle:");
	scanf("%lf",&length);
	printf("Enter the breadth of the traingle:");
	scanf("%lf",&breadth);
	
	area=length*breadth;
	perimeter=2*(length+breadth);
	
	
	if(area>perimeter){
		
		printf("Area is greatar than perimeter");
		
	}
	else
	{
		
		printf("Perimeter is greater than area");
		
		
	}
	
	return 0;
	
	
	
}
