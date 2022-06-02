#include<iostream>
using namespace std;
int main()
{
	
  int i,n,a[n];

   
   cout<<"Enter the limit:";
   cin>>n;   
   cout<<"Enter the value:"<<endl;
   
   for(i=0;i<n;i++){
   	
   	cin>>a[i];
   	
   	
   }
   	
 for(i=0;i<n;i++){
   	
   	cout<<a[i]<<" ";
   	
   	
   }

 for(i=0;i<n;i++){
   	
    a[i]=a[n-i-1];
   	
   }
   	
 cout<<"Reversed order:";
	
	for(i=0;i<n;i++)
    {
    	
    	cout<<a[i]<<" ";
    	
    	
	}
    
	
	
	
	
	
	
	
}
