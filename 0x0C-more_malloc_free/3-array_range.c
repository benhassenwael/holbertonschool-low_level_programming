#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of int
 * @min: number array start from
 * @max: number
 *
 * Return: a pointer to the array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int i, size, n;
	int *s;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	s = malloc(size * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0, n = min; i < size; i++, n++)
		s[i] = n;
	return (s);
}
