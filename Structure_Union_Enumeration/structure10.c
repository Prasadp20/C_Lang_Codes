#include <stdio.h>
#include <string.h>

// 2nd way to initialize the value to the structure

struct movieInfo
{
	char actor[20];
	float imdbRate;
};
struct movie
{
	char movieName[20];
	struct movieInfo obj1;
};

void main()
{
	struct movie obj2 = {"Leo", {"Vijay Thalapathy", 9.7}};

	printf("%s\n", obj2.movieName);
	printf("%s\n", obj2.obj1.actor);
	printf("%f\n", obj2.obj1.imdbRate);
}
