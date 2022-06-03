#include<stdio.h>
int main()
{
	
	int choice,i,fact=1,number,num,count=0;
	
	
	
	printf("\n------------------------------------------------------");
    printf("\nChoices are as below\n");
    printf("1:Factorial\t");
    printf("2:Prime\t\t");
    printf("3:Odd/Even\t");
    printf("4:Exit\n");
	printf("Enter choice ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		case 1:
		    
        printf("Enter a number: ");    
        scanf("%d",&number);    
        for(i=1;i<=number;i++){    
        fact=fact*i;    
    }    
     printf("Factorial of %d is: %d",number,fact);
		
		break;
		
		case 2:
			
		 

       printf("Enter any positive number:");
scanf("%d",&num);

for(i=2;i<num;i++){
	
	if(num%i==0){
		
		count++;
		break;
	}
	
}

if(count==0){
	
	printf("Prime Number");
}
else{
	
	printf("Not Prime Number");
	
}
		
		
		
	break;
	
	case 3:
	printf("Enter a number: ");    
    scanf("%d",&number);    	
    if(number%2==0){
    	
    	printf("even number");
    	
	}		
	else{
		
		printf("odd number");
	}
		
	
	break;
	
	default:
	
	 printf("No case");	

}

return 0;
	
}
