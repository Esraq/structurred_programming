#include<stdio.h>
int main()
{
	double man_population,women_population,total_leteracy,man_literacy,women_percantage,
	illeterate_man,illeterate_women;
	
	
	double population=8000;
	
	
	
	man_population=population*0.52;
	women_population=population-man_population;
	total_leteracy=population*0.48;
	man_literacy=population*0.35;
	illeterate_man=	man_population-man_literacy;
	illeterate_women=women_population-(total_leteracy-man_literacy);
	printf("Illeterate Man=%.2lf\n Illeterate Women=%.2lf",illeterate_man,illeterate_women);
	
	return 0;
	
}
