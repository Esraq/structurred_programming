#include<stdio.h>  
int main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);  
    printf("\n");  
    for (i = 1; i <= rows; ++i) // outer loop  
    {  
        for (j = 1; j <= i; ++j) // inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    }  
   return 0;
}  
