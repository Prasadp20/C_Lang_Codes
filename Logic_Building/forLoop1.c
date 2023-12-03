#include<stdio.h>

// WAP to print square of odd number between a given range
void main()
{
	int from = 0;
	int to = 0;
	printf("Enter the range : \n");
	printf("Enter Start : ");
	scanf("%d", &from);
	printf("Enter End : ");
	scanf("%d", &to);

	printf("Square of odd number between given range : ");
	for(int i = from; i <= to; i++)
	{
		if(i % 2 != 0){
		
			printf("%d  ", i * i);
		}
	}
	printf("\n");
}
