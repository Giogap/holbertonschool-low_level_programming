#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - check code
  * @name: name of dog
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dog;
	int i;
	int cont = 0;
	char *cpname;
	char *cpowner;

	dog = malloc(sizeof(struct dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	for(i = 0; name[i] != '\0'; i++)
	{
		cont = cont + 1;
	}

	cpname = malloc(cont);

	for (i = 0; i <= cont; i++)
	{
		cpname[i] = name[i];
	}
	else
	{
		free(dog);
		return (NULL);
	}

	cont = 0;

	for(i = 0; owner[i] != '\0'; i++)
	{
		cont = cont + 1;
	}

	cpowner = malloc(cont);

	for (i = 0; i <= cont; i++)
	{
		cpowner[i] = owner[i];
	}
	else
	{
		free(dog);
		return (NULL);
	}

	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);	
}
