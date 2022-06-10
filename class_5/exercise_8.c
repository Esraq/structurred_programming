#include<stdio.h>

int main()
{
    int a[100]={10,20,30,40,50,60,70,80,90},i,size=9,pos,value;
    
    printf("Array before insertion\n");
    for(i=0;i<9;i++)
    {
    	
    	printf("%d\t",a[i]);
	}
    
    
    
    printf("\n");
    
    
    
    printf("Which Position? ");
    scanf("%d",&pos);
    printf("Enter the value");
    scanf("%d",&value);
   
    
    
    
    
    for(i=size;i>=pos;i--)
    {
    	
    	a[i]=a[i-1];
	}
    
    a[pos-1]=value;
    
    printf("Array after insertion");
    
    for(i=0;i<size+1;i++){
    	
    	printf("%d\t",a[i]);
	}
    
    return 0;
}
