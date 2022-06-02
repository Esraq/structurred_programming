#include<stdio.h>
int main()
{
	char ch;
	int a,b,add,mul,sub,division;
	
	
    printf("Enter operation:");
	scanf("%c",&ch);	
	
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	
	
	

	
	switch(ch){
		
		case '+':
		add=a+b;	
		printf("%d",add);	
		break;
		
		case '-':
		sub=a-b;	
		printf("%d",sub);
		break;
		
		case '*':
		mul=a*b;
	    printf("%d",mul);	
		break;
		
		case '/':
		division=a/b;	
		printf("%d",division);
		break;
		
		
		deafult:
		printf("No case");		
		
		
		
		
	}
	
	
	return 0;
	
	
}
