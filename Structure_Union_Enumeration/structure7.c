#include<stdio.h>
#include<string.h>

struct Movie
{
	char movieName[20];
	int noOfTickets;
	float totalPrice;
}obj1 = {"Avtar Way Of Water", 5, 1250.50};

void main()
{
	printf("%s\n", obj1.movieName);
	printf("%d\n", obj1.noOfTickets);
	printf("%f\n", obj1.totalPrice);
	
	struct Movie obj2;
	struct Movie *sptr = &obj2;

	strcpy((*sptr).movieName, "Jhon Wick");
	(*sptr).noOfTickets = 3;
	(*sptr).totalPrice = 1350.50;

	printf("%s\n", (*sptr).movieName);
	printf("%d\n", (*sptr).noOfTickets);
	printf("%f\n", (*sptr).totalPrice);

}
