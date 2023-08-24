#include <stdio.h>

void main()
{
	float startTime, endTime;
	printf("Please enter your start time for study : ");
	scanf("%f",&startTime);
	printf("Please enter your end time :");
	scanf("%f",&endTime);

	for(float i = startTime; i <= endTime; i++)
	{
		printf("Focus on Study...\n");
	}
}
