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
	if (d == NULL)
	{
		printf((nil));
	}
	if (name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("%f\n", d->age);
	printf("%s\n", d->owner);	
}
