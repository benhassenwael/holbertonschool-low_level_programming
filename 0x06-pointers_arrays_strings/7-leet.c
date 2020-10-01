#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the resulting string
 */

char *leet(char *s)
{
	char elite[] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (j < 8 && s[i] != elite[j] && s[i] != (elite[j] - ('a' - 'A')))
		{
			j++;
		}

		if (j != 8)
		{
			s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
