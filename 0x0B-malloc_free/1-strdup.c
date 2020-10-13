#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - creates a copy of a given string
 * @str: string to copy
 *
 * Return: a pointer to a newly allocated space in memory which contains
 * a copy of the given string or NULL if it fails
 */

char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *cpy;

	if (!str)
		return (0);
	while (str[size])
		size++;
	cpy = malloc((size + 1) * sizeof(char));
	if (!cpy)
		return (0);
	for (i = 0; i <= size; i++)
		cpy[i] = str[i];
	return (cpy);
}
