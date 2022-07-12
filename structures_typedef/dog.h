#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - check code
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: data of dog
 */

void dog(struct dog_t *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
