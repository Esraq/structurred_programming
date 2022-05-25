#include<stdio.h>
int main()
{
	double gpa,ielts_score;
	
	
	printf("Enter gpa:");
	scanf("%lf",&gpa);
	printf("Enter ielts score:");
	scanf("%lf",&ielts_score);
	
	if(gpa==5.00 || ielts_score>=7.00){
		
		printf("Canadian Scholarship");
	}
	else{
		
		printf("No Scholarship");
	}
	
	return 0;
	
}
