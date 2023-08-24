#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct IPL
{
	char playerName[20];
	int noOfTeams;
	float priceMoney;
};

char* mystrcpy(char *dest, char* src)
{
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void main()
{
	struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));
	
	mystrcpy((*ptr).playerName, "M.S.Dhoni");
	(*ptr).noOfTeams = 10;
	(*ptr).priceMoney = 20000.2000;

	printf("%s\n",(*ptr).playerName);
	printf("%d\n",(*ptr).noOfTeams);
	printf("%f\n",(*ptr).priceMoney);

}
