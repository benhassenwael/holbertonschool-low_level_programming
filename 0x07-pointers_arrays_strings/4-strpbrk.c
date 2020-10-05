#include "holberton.h"

/**
 * _strpbrk - locate the first occurrence in string s of any of
 * the bytes in the string accept
 * @s: string
 * @accept: bytes to locate
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (accept[j])
			return (s + i);
	}
	return (0);
}
