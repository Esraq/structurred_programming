#include<stdio.h>
int main()
{
	int first_angel,second_angel,third_angel,sum;
	
	
	sum=first_angel+second_angel+third_angel;
	
	
	
	printf("Enter first side of traingle:");
	scanf("%d",&first_angel);
		
	printf("Enter second side of traingle:");
	scanf("%d",&second_angel);
	
	printf("Enter third side of traingle:");
	scanf("%d",&third_angel);
	
	
	
	
	if(sum==180){
		
		printf("Triangle is valid");
	}
	else{
		
		printf("Triangle is invalid");
		
	}
	
	
	return 0;
	
}
