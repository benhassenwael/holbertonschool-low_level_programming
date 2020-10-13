#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes it with given char
 * @size: size of array to create
 * @c: char to initialize with
 *
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (0);
	s = malloc(size * sizeof(char));
	if (!s)
		return (0);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
