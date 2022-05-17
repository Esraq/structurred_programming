#include<stdio.h>
int main() {

int x1,y1,x2,y2,x3,y3,curve1,curve2;


printf("Please enter the values of Three points:  ");
printf("\n(x1,y1):\n");
scanf("%d%d",&x1,&y1);
printf("\n(x2,y2):\n");
scanf("%d%d",&x2,&y2);
printf("\n(x3,y3):\n");
scanf("%d%d",&x3,&y3);

curve1=(x2-x1)/(y2-y1);
curve2=(x3-x2)/(y3-y2);

if(curve1==curve2){

printf("\nAll three points fall on one straight line.\n");

}
else{

printf("\nThese three points do not fall on one straight line.\n");

}


return 0;

}
