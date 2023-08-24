
		//	D  C  B  A
		//	e  d  c  b
		//	F  E  D  C
		//	g  f  e  d
	
	#include <stdio.h>
	void main()
	{
		int row;
		printf("How many rows you want to print : ");
		scanf("%d",&row);

		for(int i = 0; i < row; i++)
		{
			int CH = 68 + i;
			int ch = 100 + i;
			for(int j = 0; j < row; j++)
			{
				if(i % 2 == 0)
					printf("%c  ",CH--);

				else
					printf("%c  ",ch--);
			}
			printf("\n");
		}
	}
