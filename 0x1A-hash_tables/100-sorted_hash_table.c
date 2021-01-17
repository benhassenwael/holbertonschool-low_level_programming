#include "hash_tables.h"


/**
 * shash_table_create - create a sorted hash table
 * @size: the size of the array of the sorted hash table
 *
 * Return: pointer to the newly created hash table or
 * NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *sht;

	if (size == 0)
		return (NULL);
	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);
	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (!(sht->array))
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	sht->shead = sht->stail = NULL;
	return (sht);
}

/**
 * insert_sll - insert node into sorted linked list of a shash_table
 * @ht: sorted hash table to insert into
 * @node: node to insert
 *
 */
void insert_sll(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *looper;

	if (!ht->shead)
	{
		ht->shead = ht->stail = node;
		return;
	}
	looper = ht->shead;
	while (looper)
	{
		if (strcmp(node->key, looper->key) < 0)
		{
			node->snext = looper;
			node->sprev = looper->sprev;
			if (!looper->sprev)
				ht->shead = node;
			else
				(looper->sprev)->snext = node;
			looper->sprev = node;
			return;
		}
		looper = looper->snext;
	}
	node->sprev = ht->stail;
	(ht->stail)->snext = node;
	ht->stail = node;
}

/**
 * shash_table_set - add an element to the sorted hash table
 * @ht: the hash table to update
 * @key: can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 on success; 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *looper;
	unsigned long int index;

	if (!ht || !(ht->array) || !key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	looper = ht->array[index];
	while (looper)
	{
		if (strcmp(looper->key, key) == 0)
		{
			if (looper->value)
				free(looper->value);
			looper->value = strdup(value);
			return (1);
		}
		looper = looper->next;
	}
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	node->sprev = node->snext = NULL;
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	insert_sll(ht, node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key of the value
 *
 * Return: the value associated with the element or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *looper;

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

/**
 * shash_table_print - print a sorted hash table
 * @ht: hash table to print
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *looper;
	int is_first = 1;

	if (!ht)
		return;
	putchar('{');
	looper = ht->shead;
	while (looper)
	{
		if (!is_first)
			printf(", ");
		printf("'%s': '%s'", looper->key, looper->value);
		is_first = 0;
		looper = looper->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse
 * @ht: hash table to print
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *looper;
	int is_first = 1;

	if (!ht)
		return;
	putchar('{');
	looper = ht->stail;
	while (looper)
	{
		if (!is_first)
			printf(", ");
		printf("'%s': '%s'", looper->key, looper->value);
		is_first = 0;
		looper = looper->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table
 * @ht: the hash table to delete
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *looper;
		
	while (ht->shead)
	{
			looper = ht->shead;
			ht->shead = looper->next;
			free(looper->key);
			free(looper->value);
			free(looper);
	}
	free(ht->array);
	free(ht);
}
