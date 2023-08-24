

#include <stdio.h>
void main()
{
        int numOfRows, k;
        printf("How many number of rows you want to print : ");
	scanf("%d",&numOfRows);
	for(int i = 1; i <= numOfRows; i++)					
	{
		k = i;
		for(int j = 1; j <= numOfRows; j++)
		{											                        
			printf("%d  ",k++);
		}
		
		printf("\n");										        
	}
}
