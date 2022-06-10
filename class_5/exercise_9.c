#include<stdio.h>

int main()
{
    int a[100]={10,20,30,40,50,60,70,80,90},i,size=10,pos,value;
    
    printf("Array before insertion\n");
    for(i=0;i<9;i++)
    {
    	
    	printf("%d\t",a[i]);
	}
    
    printf("\n");
    
    
    printf("Enter the position to be deleted ");
    scanf("%d",&pos);
    for(i=pos-1;i<=size-2;i++){
    	
    	a[i]=a[i+1];
    	
	}
    a[size-1]=0;
    
    for(i=0;i<size-2;i++){
    	
    	printf("%d\t",a[i]);
	}
  
    
    return 0;
}
