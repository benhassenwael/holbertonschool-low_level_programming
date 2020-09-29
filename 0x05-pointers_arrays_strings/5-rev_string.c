#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int length, i, j;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	char aux[length + 1];

	for (i = 0; i <= length; i++)
	{
		aux[i] = s[i];
	}

	for (i = length - 1, j = 0; i >= 0; i--, j++)
	{
		s[j] = aux[i];
	}

	s[length] = '\0';
}
