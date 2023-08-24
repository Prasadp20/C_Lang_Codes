#include <stdio.h>

int mystrlen(char *);
int mystrcmp(char *str1, char *str2);

void main()
{
	char *str1 = "Prasad";
	char *str2 = "PrasadPathak";

	int diff1 = mystrlen(str1);
	int diff2 = mystrlen(str2);

	int diff = 1;
	if(diff1 == diff2)
	{
		diff = mystrcmp(str1, str2);
	}
	if(diff == 0)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
}

int mystrlen(char *str)
{
	int count = 0;

	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int mystrcmp(char *str1, char *str2)
{
	while(*str1 != '\0')
	{
		if(*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			return *str1 - *str2;
		}
	}

	return 0;
}
