#include <iostream>
using namespace std;
 
int main()
{
    int arr[100], size, isUnique;
    int i, j, k;
 
    //Reads size of the array
    cout<<"Enter size of array: ";
    cin>>size;
 
    //Reads elements in array
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
 
    //Removing all duplicate elements from the array
    for(i=0; i<size; i++)
    {
        // Assuming  cuurent element is unique */
        isUnique = 1;
 
        for(j=i+1; j<size; j++)
        {
 
            //If any duplicate element is found
 
            if(arr[i]==arr[j])
            {
                // Removing duplicate element
                for(k=j; k<size-1; k++)
                {
                    arr[k] = arr[k+1];
                }
 
                size--;
                j--;
                isUnique = 0;
            }
        }
 
        /*
        If array element is not unique
        then also remove the current element
         */
        if(isUnique != 1)
        {
            for(j=i; j<size-1; j++)
            {
                arr[j] = arr[j+1];
            }
 
            size--;
            i--;
        }
    }
    //Printing all unique elements in array
    cout<<"All unique elements in the array are: ";
    for(i=0; i<size; i++)
    {
       cout<<arr[i]<<"\t";
    }
    
    
}
   
