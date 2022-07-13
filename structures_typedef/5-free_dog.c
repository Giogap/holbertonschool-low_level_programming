#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - check code
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: dog or NULL
  */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		d = malloc(sizeof(*d));
		free(d);
		free(d->name);
		free(d->owner);
	}
}
