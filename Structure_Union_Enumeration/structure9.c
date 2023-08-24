#include <stdio.h>
#include <string.h>

// !st way to initialize the value to nested structure 

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
	struct movie obj2;
	strcpy(obj2.movieName, "Vikram");
	strcpy(obj2.obj1.actor, "Vijay");
	obj2.obj1.imdbRate = 9.3;

	printf("%s\n", obj2.movieName);
	printf("%s\n", obj2.obj1.actor);
	printf("%f\n", obj2.obj1.imdbRate);
}
