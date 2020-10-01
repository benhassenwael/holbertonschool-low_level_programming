#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string holding result
 * @src: string to concatenate
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i]; i++)
	{
	}

	while (src[j])
		dest[i++] = src[j++];

	dest[++i] = '\0';

	return (dest);
}
