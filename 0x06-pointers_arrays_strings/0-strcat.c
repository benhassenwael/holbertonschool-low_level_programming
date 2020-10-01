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
	int i;

	for (i = 0; dest[i]; i++)
	{
	}

	while (*src)
		dest[i++] = src++;

	dest[++i] = '\0';

	return (dest);
}
