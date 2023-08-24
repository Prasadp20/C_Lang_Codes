#include<stdio.h>

struct movie
{
	char movieName[20];
	struct movieInfo
	{
		char actor[20];
		float imdb;
	}obj1;
};

void main()
{
	struct movie obj = {"Leo", {"Vijay Thalapathy", 8.5}};

	printf("%s\n", obj.movieName);
	printf("%s\n", obj.obj1.actor);
	printf("%f\n", obj.obj1.imdb);
}
