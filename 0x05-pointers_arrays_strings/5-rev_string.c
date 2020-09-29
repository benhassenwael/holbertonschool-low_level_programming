#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int length, i;
	char aux;

	for (length = 0; s[length]; length++)
	{
	}

	for (i = 0, length -= 1; i < length / 2; i++)
	{
		aux = s[i];
		s[i] = s[length - i];
		s[length - i] = aux;
	}
}
