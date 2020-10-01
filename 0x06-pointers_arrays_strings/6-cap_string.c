#include "holberton.h"

/**
 * is_separator - finds if a char a separator
 * @c: char to compare
 *
 * Return: 1 if c is a separator 0 if not
 */

int is_separator(char c)
{
char s[] = {'\t', ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0, found = 0;

	while (i < 13 && !found)
	{
		if (c == s[i])
			found = 1;
		i++;
	}
	return (found);
}



/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to the resulting string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (is_separator(s[i]) && (s[i + 1] <= 'z' && s[i + 1] >= 'a'))
			s[i + 1] -= 'a' - 'A';
		i++;
	}

	return (s);
}
