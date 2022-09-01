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
	unsigned long int index = 0;
	hash_node_t *nnode = NULL;

	if (!ht || !key)
		return (0);

	nnode = malloc(sizeof(hash_node_t));
	if (!nnode)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);

	nnode->key = strdup(key);
	nnode->value = strdup(value);

	if (ht->array[index] && strcmp(key, ht->array[index]->key) != 0)
		nnode->next = ht->array[index];

	ht->array[index] = nnode;

	return (1);
}
