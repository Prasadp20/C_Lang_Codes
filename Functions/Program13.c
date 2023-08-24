#include <stdio.h>

void printArray(int (*ptr[])[3])
{
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d\n", *(**(ptr + i) + j));
		}
		printf("\n");
	}
}

void main()
{
	int intArr[] = {10,20,30};
	char charArr[] = {'A','B','C'};
	//double doubleArr[] = {10.10,10.20,10.30};

	int (*ptr[])[3] = {&intArr, &charArr};

	printArray(ptr);


}
