#include <stdio.h>
#include <string.h>

void main()
{
	char *str1 = "Prasad";
	char *str2 = "Prasad";

	int diff = strcmp(str1,str2);

	if(diff == 0)
		printf("Strings are equals\n");
	else
		printf("Strings are not equals\n");
}
