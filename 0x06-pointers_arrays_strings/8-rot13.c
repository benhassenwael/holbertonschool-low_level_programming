#include "holberton.h"

/**
 * rot13 - encode a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the resulting string
 */

char *rot13(char *s)
{
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i = 0, j;

	while (s[i])
	{
		j = 0
		while (alpha[j] && s[i] != m[j])
			j++;

		if (alpha[j])
			s[i] = rot[j];

		i++;
	}

	return (s);
}
