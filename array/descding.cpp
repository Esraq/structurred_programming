#include<iostream>
using namespace std;
int main()
{
	
	int a[]={25,3,87,1,6};
	int i,j,temp;
	for(i=0;i<5;i++){
		
		cout<<a[i]<<endl;
		
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
		
		if(a[i]<a[j]){
			
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			
			
			
		}
	
		
	}
	
	
}


 


	
	cout<<"Sorted Array in descding:"<<endl;
	
	for(i=0;i<5;i++){
		
		cout<<a[i]<<" ";
		
		
	}
	
	
	
	
	
	
}
