#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string holding result
 * @src: string to concatenate
 * @n: number of bytes to add from src
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}

	for (j = 0; src[j] && j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
