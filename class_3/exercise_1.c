#include<stdio.h>
int main()
{
    int i,hour, extra;
    for(i = 1 ; i <= 10 ; i++) 
    {
    	
     printf("\n");
	printf("Enter the working hour of the employ : ");
	scanf("%d", &hour);
	
	if(hour>40)
	{
		extra = (hour - 40)*12;
		printf("\n%d Rs. is the overtime pay of employee\n", extra);
	}
	else
		printf("\nThis employ has not done overtime.\n");
  }
 return 0;
     }
