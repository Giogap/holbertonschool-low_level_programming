#include <stdio.h>
#include "dog.h"


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog;

	if (d)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
}
