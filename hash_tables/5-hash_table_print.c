#include "hash_tables.h"

/**
 * hash_table_print - check code
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;
	int flag = 0;

	if (!ht || !ht->array)
		return;
}
