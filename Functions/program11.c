#include <stdio.h>
void main()
{
	int arr[] = {10,20,30,40,50};

	int (*ptr)[5] = &arr;

	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", (*ptr)[i]);
	}
}
