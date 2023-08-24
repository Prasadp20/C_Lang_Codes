#include <stdio.h>
#pragma pack(1)

struct demo
{
	char pName[20];
	int jercyNumber;
	float avg;
} obj2 = {"Virat Kohli",18,120.25};

void main()
{
	struct demo obj1 = {"M.S.Dhoni",7,130.25};

	printf("Name of the player : %s\n", obj1.pName);
	printf("Jercy number of the player : %d\n", obj1.jercyNumber);
	printf("Average of the player : %f\n", obj1.avg);
	
	printf("Name of the player : %s\n", obj2.pName);
	printf("Jercy number of the player : %d\n", obj2.jercyNumber);
	printf("Average of the player : %f\n", obj2.avg);
}
