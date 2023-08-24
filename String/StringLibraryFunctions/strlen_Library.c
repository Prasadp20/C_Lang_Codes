#include <stdio.h>
#include <string.h>

void main()
{

	char name[] = {'R','A','S','H','M','I','\0'};
	char *str = "PRASAD";

	int nameLen = strlen(name);
	int strLen = strlen(str);

	printf("%d\n",nameLen);
	printf("%d\n",strLen);
	

}
