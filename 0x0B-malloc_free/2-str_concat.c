#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly alocated space in memory which
 * contains the two string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int i;
	char *str;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		while (s1[size1])
			size1++;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		while (s2[size2])
			size2++;
	}
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[size1 + i] = s2[i];
		i++;
	}
	str[size1 + size2] = '\0';
	return (str);
}
