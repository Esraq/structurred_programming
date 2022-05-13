#include<stdio.h>
int main()
{
	
	int subject_1,subject_2,subject_3,subject_4,subject_5,aggregate;
	float percentage;
	printf("Enter the number of subject 1: ");
	scanf("%d",&subject_1);
	printf("Enter the number of subject 2: ");
	scanf("%d",&subject_2);
	printf("Enter the number of subject 3: ");
	scanf("%d",&subject_3);
	printf("Enter the number of subject 4: ");
	scanf("%d",&subject_4);
	printf("Enter the number of subject 5: ");
	scanf("%d",&subject_5);
	
	aggregate=subject_1+subject_2+subject_3+subject_4+subject_5;
	percentage=aggregate*(100.00/500.00);
	
	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);
	
	
	return 0;
	
}
