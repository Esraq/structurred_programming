#include<stdio.h>
int main()
{
	double cgpa,ielts_score;
	
	printf("Enter cgpa:");
	scanf("%lf",&cgpa);
	printf("Enter ielts score:");
	scanf("%lf",&ielts_score);
	
	if(cgpa>=3.75)
	{
		if(ielts_score>=7.0){
			
			printf("You got the scholarship");
			
		}
		
		
	}
	else{
		
			printf("Rejected");
	}
	
	return 0;
}
