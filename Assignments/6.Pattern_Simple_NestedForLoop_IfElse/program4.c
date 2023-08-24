
	//	I  H  G 
	//	F  E  D
	//	C  B  A

#include <stdio.h>
void main()
{
	int row;
	printf("Enter how many number of rows you want to print : ");
	scanf("%d",&row);

	int ch = 64 + (row * row);
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < row; j++)
		{

			printf("%c  ",ch--);

		}
		printf("\n");
	}
}
