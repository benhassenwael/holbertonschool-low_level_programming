#include "hash_tables.h"


/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *looper;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			looper = ht->array[i];
			ht->array[i] = looper->next;
			free(looper->key);
			free(looper->value);
			free(looper);
		}
	}
	free(ht->array);
	free(ht);
}
