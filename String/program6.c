#include <stdio.h>
#include<string.h>

void main()
{
	char userChoise[20];
	int count = 0;

	printf("**Quiz on basic computer or programing knowledge**\n**Please enter your option or answer in word**\n");
	
	printf("Que.1 - Worlds first programing language.\n");
	printf("1. BCPL\n2. C\n3. C++\n4. Python\n");
	char *answer = "BCPL";
	gets(userChoise);

	int result = strcmp(userChoise, answer);

	if(result == 0)
		count++;
	else
		printf("Your answer is wrong\n");

}
