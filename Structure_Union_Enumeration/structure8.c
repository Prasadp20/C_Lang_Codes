#include<stdio.h>
#include<string.h>

struct cricketPlayer
{
	char playerName[20];
	int jercyNo;
	float strickRate;
};


void main()
{
	struct cricketPlayer obj1 = {"M.S.Dhoni", 7, 130.25};
	struct cricketPlayer obj2 = {"Virat Kohli", 13, 125.35};
	struct cricketPlayer obj3 = {"Dinesh Kartik", 16, 115.25};
	
	struct cricketPlayer arr[] = {obj1, obj2, obj3};

	for(int i = 0; i < 3; i++)
	{
		printf("Player Name : %s\n", arr[i].playerName);
		printf("Player's Jercy Number : %d\n", arr[i].jercyNo);
		printf("Strick Rate of the Player : %f\n", arr[i].strickRate);
	}
}
