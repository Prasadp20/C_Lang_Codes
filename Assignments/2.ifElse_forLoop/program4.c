#include <stdio.h>
void main()
{
	// WAP in which according to month number print the number of days in that month
	
	int month;
	printf("Enter the month (in number) : ");
	scanf("%d",&month);
	printf("Month = %d\n",month);

	switch(month)
	{
		case 1:
			printf("January has 31 days\n");
			break;
		case 2:
			printf("February has 28 days\n");
			break;
		case 3:
			printf("March has 31 days\n");
			break;
		case 4:
			printf("April has 30 days\n");
			break;
		case 5:
			printf("May has 31 days\n");
			break;
		case 6:
			printf("June has 31 days\n");
			break;
		case 7:
			printf("July has 30 days\n");
			break;
		case 8:
			printf("August has 31 days\n");
			break;
		case 9:
			printf("September has 30 days\n");
			break;
		case 10:
			printf("Octobar has 31 days\n");
			break;
		case 11:
			printf("November has 30 days\n");
			break;
		case 12:
			printf("December has 31 days\n");
			break;
		default:
			printf("You entered wrong input\n");
			
	}

}
