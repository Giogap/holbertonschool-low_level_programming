#include <stdio.h>
#include "dog.h"

/**
  * init_dog - check code
  * @d: array info dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
