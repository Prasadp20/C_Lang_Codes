#include <stdio.h>

int mystrlen(char *str, int size)
{
	int count = 0;
	
	for(int i = 0; i < size; i++)
	{
		str++;
		count++;
	}
	/*
	while(*str != 0)
	{
		str++;
		count++;
	}
	*/
	return count;
}

void main()
{
	char *str = "Prasad Pathak";
	//printf("%ld\n", sizeof(str));

	char charArr[] = {'P','R','A','S','A','D','P','A','T','H','A','K','\0'};
	//printf("%ld\n",sizeof(charArr));
	
	int sizeOfArray = sizeof(charArr)/sizeof(charArr[0]);
	//printf("%d\n",sizeOfArray);

	int count = mystrlen(str, sizeOfArray);

	printf("%d\n", count);
}
