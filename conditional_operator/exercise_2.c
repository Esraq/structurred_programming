#include<stdio.h>
int main()
{
	
	int year;
	
	printf("Enter year:");
	scanf("%d",&year);
	
	if(year%4==0 || year%400==0){
		
		printf("Year is leap");
		
	}
	else if(year%100==0){
	  
	   printf("Year is not leap");
	  
	    
	}
	else{
		
		printf("Year is not leap");
	}
	
	
	return 0;
}
