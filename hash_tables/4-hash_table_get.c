#include "hash_tables.h"

/**
* hash_table_get - check code
* @ht: table
* @key: key
* Return: value o NULL if faile
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nnode = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	nnode = ht->array[index];

	while (nnode != NULL)
	{
		if (!strcmp(nnode->key, key))
			return (nnode->value);

		nnode = nnode->next;
	}

	return (NULL);
}
