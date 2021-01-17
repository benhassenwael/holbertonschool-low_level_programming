#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key of the value
 *
 * Return: the value associated with the element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *looper;

	if (!ht || !(ht->array) || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	looper = ht->array[index];
	while (looper)
	{
		if (strcmp(looper->key, key) == 0)
			return (looper->value);
		looper = looper->next;
	}
	return (NULL);
}
