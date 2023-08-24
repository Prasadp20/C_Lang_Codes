#include <stdio.h>
void main()
{
	char arrName[] = {'P','R','A','S','A','D','\0'};
	char *ptrName = "RASHMI";

	for(int i = 0; i < 7; i++)
	{
		printf("%c  ",arrName[i]);
	}
	printf("\n");

	for(int i = 0; i < 7; i++)
	{
		printf("%c  ",ptrName[i]);
	}
	printf("\n");
}
