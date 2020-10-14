#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate a 2 dimensional array of int
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to width * height array intialized to 0
 * or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **ar;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ar[i] = 0;
	return (ar);
}
