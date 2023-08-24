#include<stdio.h>
#pragma pack(1)

struct movie
{
	char movieName[20];
	int noOfTickets;
	float priceOfTickets;
}obj1 = {"Kantara",3,350.25};

void fun()
{
	struct movie obj3 = {"Spaider-Man", 7, 789.254};

	printf("%s\n", obj3.movieName);
	printf("%d\n", obj3.noOfTickets);
	printf("%f\n", obj3.priceOfTickets);

	printf("\n");
}
void main()
{
	struct movie obj2 = {"Drushyam 2", 5, 750.25};

	fun();
	
	
	printf("%s\n", obj1.movieName);
	printf("%d\n", obj1.noOfTickets);
	printf("%f\n", obj1.priceOfTickets);
	
	printf("\n");
	
	printf("%s\n", obj2.movieName);
	printf("%d\n", obj2.noOfTickets);
	printf("%f\n", obj2.priceOfTickets);

	printf("\n");
}
