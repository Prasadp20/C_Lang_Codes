#include <stdio.h>

void main()
{
	// WAP to print the size and value of the below variable. 
	
	int numberOfPerson;
	float priceOfMovieTicket;
	char seatNumber;

	printf("Please enter the series of your seat number : ");
	scanf("%c",&seatNumber);

	printf("Please enter the number of person : ");
	scanf("%d",&numberOfPerson);

	printf("Please enter the total price of the movie ticket : ");
	scanf("%f",&priceOfMovieTicket);


	printf("\nTotal number of persons are : %d,\nTotal price of your tickets is : %f and\nYour seat numbeer series is : %c\n",numberOfPerson, priceOfMovieTicket, seatNumber);
	
	printf("\n");
	printf("Size of numberOfPerson variable is : %lu\n", sizeof(numberOfPerson));
	printf("Size of priceOfTicket variable is : %lu\n", sizeof(priceOfMovieTicket));
	printf("Size of seatNumber variable is : %lu\n", sizeof(seatNumber));
}
