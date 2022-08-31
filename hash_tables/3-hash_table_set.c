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
	hash_node_t *item = NULL, *current_item = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		current_item = ht->array[index];
		while (current_item)
		{
			if (strcmp(current_item->key, keyDup) == 0)
			{
				free(ht->array[index]->value);
				free(keyDup);
				free(item);
				return (1);
			}
			current_item = current_item->next;
		}
		current_item = ht->array[index];
		item->next = current_item;
		ht->array[index] = item;
	}
	else
		ht->array[index] = item;
	return (1);
}
