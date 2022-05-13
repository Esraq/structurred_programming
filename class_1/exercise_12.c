#include<stdio.h>
int main()
{
	int selling_price,total_profit,cost_price;
	double one_item;
	
	
	printf("Enter the selling price of 15 items:");
	scanf("%d",&selling_price);
	printf("Enter the total profit of 15 items:");
	scanf("%d",&total_profit);
	
	cost_price=selling_price-total_profit;
	
	///printf("%d",cost_price);
	
	one_item=cost_price/15;
	
     printf("Cost of one item:%.2lf",one_item);
	
	
	return 0;
	
	
	
}
