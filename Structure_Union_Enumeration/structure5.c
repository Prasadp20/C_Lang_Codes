#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Demo
{
	char gameName[20];
	int noOfCopySell;
	float priceOfGame;
};

void fun()
{
	struct Demo *obj2 = (struct Demo*)malloc(sizeof(struct Demo));

	strcpy((*obj2).gameName, "Mario");
	(*obj2).noOfCopySell = 500;
	(*obj2).priceOfGame = 1750.25;

	printf("%s\n", (*obj2).gameName);
	printf("%d\n", (*obj2).noOfCopySell);
	printf("%f\n", (*obj2).priceOfGame);
}

void main()
{
	struct Demo obj1 = {"Walerant", 50, 1500.50};

	printf("%s\n",obj1.gameName);
	printf("%d\n",obj1.noOfCopySell);
	printf("%f\n",obj1.priceOfGame);

	fun();
}
