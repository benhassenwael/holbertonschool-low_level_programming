#include "hash_tables.h"


/**
 * key_index - compute and return the index of a given key
 * @key: key to compute its index
 * @size: size of the arrray of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
