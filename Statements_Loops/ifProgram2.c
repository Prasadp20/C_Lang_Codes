#include<stdio.h>
void main()
{
	float income;
	printf("Please enter your annual income : ");
	scanf("%f",&income);
	printf("Your annual income is : %f\n", income);

	if(income > 0 && income <= 500000)
	{
		printf("You have 0%% of tax\n");
	}
	if(income > 500000 && income <= 1000000)
	{
		printf("You have 10%% of tax\n");
	}
	if(income > 1000000 && income <= 1500000)
	{
		printf("You have 15%% of tax\n");
	}
	if(income > 1500000 && income <= 2000000)
	{
		printf("You have 20%% of tax\n");
	}
	if(income > 2000000)
	{
		printf("You have 30%% tax\n\n");
	}
}
