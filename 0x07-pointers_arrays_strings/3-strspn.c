#include "holberton.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: accepted bytes
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (!accept[j])
			return (i);
	}
	return (i);
}
