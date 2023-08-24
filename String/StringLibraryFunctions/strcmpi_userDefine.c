#include<stdio.h>

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
int mystrcmpi(char *str1, char *str2)
{
	while(*str1 != '\0')
	{
		if((*str1 == *str2) || (*str1 - *str2 = 32) || (*str1 - *str2 = -32))
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
void main()
{
	int diff = 1;
	char *str1 = "Prasad";
	char *str2 = "prasad";

	int diff1 = mystrlen(str1);
	int diff2 = mystrlen(str2);

	if(diff1 == diff2)
	{
		diff = mystrcmpi(str1, str2);
	}

	if(diff == 0)
		printf("String are equal");
	else
		printf("Strings are not equal");
}

