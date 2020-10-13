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

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (!str)
		return (0);
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
	str[size1 + i] = '\0';
	return (str);
}
