#include "hash_tables.h"

/**
 *
 *
 *
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;
	int value = hash_djb2(key);

	index = value % size;

	return (index);
}
