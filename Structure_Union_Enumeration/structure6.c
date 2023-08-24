#include<stdio.h>
#include<string.h>

struct ottPlatform
{
	char platformName[20];
	int noOfUser;
	float subscriptionAmount;
};

void main()
{
	struct ottPlatform ott;

	printf("Enter the name of Ott Platform you use : ");
	gets(ott.platformName);

	printf("How many user use this ott platform : ");
	scanf("%d", &ott.noOfUser);

	printf("How many amount you pay for %s : ",ott.platformName);
       	scanf("%f", &ott.subscriptionAmount);	

	printf("%s\n", ott.platformName);
	printf("%d\n", ott.noOfUser);
	printf("%f\n", ott.subscriptionAmount);
}
