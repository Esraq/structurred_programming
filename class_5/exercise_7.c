#include<stdio.h>
int main()
{
   int a[100], n, element, pos=0;
   int i;

   printf("Enter array size [1-100]: ");
   scanf("%d", &n);

   printf("Enter array elements: ");
   for(i=0; i<n; i++)
   {
   
   scanf("%d", &a[i]);
   
   }

   printf("Enter element to search: ");
   scanf("%d",&element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       printf("%d found at position %d", element, i+1);
       return 0;
     }
   }

   printf("%d not found.", element);
   return 0;
}
