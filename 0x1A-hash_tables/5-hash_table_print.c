#include "hash_tables.h"


/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int is_first = 1;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!is_first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			is_first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
