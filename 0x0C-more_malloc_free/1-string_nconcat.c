#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to a newly alocated space in memory which
 * contains the two string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2;
	unsigned int i;
	char *str;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		for (size1 = 0; s1[size1]; size1++)
			;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		for (size2 = 0; s2[size2] && size2 < n; size2++)
			;
	}
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (i = 0; i < size2; i++)
		str[size1 + i] = s2[i];
	str[size1 + size2] = '\0';
	return (str);
}
