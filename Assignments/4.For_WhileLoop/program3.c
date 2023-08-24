
	// WAP to print the divisiors and count of divisiors of the entered number.
	
#include <stdio.h>
void main()
{
	int userInput;
	int count = 0;
	int sum = 0;
	printf("Enter the number : ");
	scanf("%d",&userInput);
	
	printf("The divisiors of the %d are : ",userInput);
	for(int i = 1; i <= userInput; i++)
	{
		if(userInput % i == 0)
		{
			printf("%d ",i);
			sum = sum + i;
			count++;
		}
	}

	printf("\n");
	printf("The count of divisior is : %d\n",count);
	printf("Addition of divisior is : %d\n",sum);
	
}
