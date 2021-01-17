#include "hash_tables.h"


/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table to update
 * @key: can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 on success; 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *looper;
	unsigned long int index;

	if (!ht || !(ht->array) || !key)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	looper = ht->array[index];
	while (looper->next)
		looper = looper->next;
	looper->next = node;
	return (1);
}
