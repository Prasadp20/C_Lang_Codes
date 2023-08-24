#include <stdio.h>

struct cricketPlayer
{
	char playerName[20];
	int jercyNumber;
	float avgRate;
};

void main()
{
	printf("%ld\n",sizeof(struct cricketPlayer));
	
	struct cricketPlayer play = {"Virat Kohli",18,120.25};

	printf("Name of the player : %s\n",play.playerName);
	printf("Jercy number of the player : %d\n",play.jercyNumber);
	printf("Average rate of the player : %f\n",play.avgRate);
		

}
