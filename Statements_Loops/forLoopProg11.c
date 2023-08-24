#include <stdio.h>

void main()
{
	int i,j;
	for(i = 1, j = 10; i <= j; ++i, --j)
	{
		printf("i = %d\n",i);
		printf("j = %d\n",j);
		printf("\n");
	}
}
