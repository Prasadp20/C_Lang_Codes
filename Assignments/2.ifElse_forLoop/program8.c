#include <stdio.h>

void main()
{
	//WAP that take the angles of a triangle from the user and print wheather this triangle is valid or not
	
	int angle1, angle2, angle3;

	printf("Enter the first angle of triangle : ");
	scanf("%d",&angle1);

	printf("Enter the second angle of triangle : ");
	scanf("%d",&angle2);

	printf("Enter the third angle of triangle : ");
	scanf("%d",&angle3);

	int triangle = angle1 + angle2 + angle3;

	if(triangle == 180)
	{
		printf("The triangle with angles %d, %d & %d is Valid\n",angle1,angle2,angle3);
	}
	else
	{
		printf("The triangle with angles %d, %d & %d is an Invalid\n",angle1,angle2,angle3);

	}

}
