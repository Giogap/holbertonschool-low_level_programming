#include "hash_tables.h"

/**
 * hash_table_set - check code
 * @ht: value hash table
 * @key: value key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nnode = NULL;
	unsigned int long index;

	if (!ht || !key || !value)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && ht->array[index]->value == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
	{
		return (0);
	}
	nnode->key = strdup(key);
	nnode->value = strdup(value);
	nnode->next = ht->array[index];
	ht->array[index] = nnode;

	return (1);
}
