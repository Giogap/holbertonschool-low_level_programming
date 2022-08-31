#include "hash_tables.h"

/**
 * key_index - check code
 *
 * @key: key
 * @size: size hash
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;
	int value = hash_djb2(key);

	index = value % size;

	return (index);
}
