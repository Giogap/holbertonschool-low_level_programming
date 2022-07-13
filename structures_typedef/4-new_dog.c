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
	dog_t *dog;
	int i;
	int cont = 1;
	char *cpname;
	char *cpowner;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	for(i = 0; name[i] != '\0'; i++)
	{
		cont = cont + 1;
	}

	cpname = malloc(cont);

	if (cpname != NULL)
	{	
		for (i = 0; i <= cont; i++)
		{
			cpname[i] = name[i];
		}
	}	
	else
	{
		free(dog);
		return (NULL);
	}

	cont = 1;

	for(i = 0; owner[i] != '\0'; i++)
	{
		cont = cont + 1;
	}

	cpowner = malloc(cont);

	if (cpowner != NULL)
	{	
		for (i = 0; i <= cont; i++)
		{
			cpowner[i] = owner[i];
		}
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
