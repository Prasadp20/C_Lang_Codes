

	// WAP to print the addition of 1 to 10 with 10 to 1
	
#include <stdio.h>
void main()
{
	int i,j;
	printf("Addition of 1 to 10 with 10 to 1 is : \n");

	for(i = 1, j = 10; i <= 10, j >= 1; i++, j--)
	{
		printf("%d\n", i + j);

	}
}
