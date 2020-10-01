#include "holberton.h"

/**
 * string_toupper - chage all lowercase letters of a string to uppercase
 * @s: string to convert
 *
 * Return: pointer to the resulting string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}

	return (s);
}
