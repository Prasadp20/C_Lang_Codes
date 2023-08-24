
	// WAP to print the charcter whose ASCII is even
	
#include <stdio.h>
void main()
{
	int count = 1;
	int To, From;
	printf("Enter the range to print the characters whose ASCII value is even : \n");

	printf("From : ");
	scanf("%d",&From);

	printf("To : ");
	scanf("%d",&To);

	printf("Character whose ASCII value is even from %d to %d are show in below : ",From,To);
	for(int i = From; i < To; i++)
	{
		if(i % 2 == 0)
		{
			printf("%c \n",i);
			count++;
		}
	}
	printf("Total characters: %d\n",count);
}
