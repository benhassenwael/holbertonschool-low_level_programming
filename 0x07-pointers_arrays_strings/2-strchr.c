#include "holberton.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: char to locate
 *
 * Return: pointer to the first occurence of the char c
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (c == '\0')
		return (s + i);

	return (0);
}
