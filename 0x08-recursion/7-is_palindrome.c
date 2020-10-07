#include "holberton.h"

/**
 * strend - find the end of string
 * @s: string to find its end
 *
 * Return: char pointer to end of string
 */
char *strend(char *s)
{
	if (!s[1])
		return (s);
	else
		return (strend(s + 1));
}

/**
 * the_real_is_palindrome - check if a string palindrome
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 if a string is palindrome, 0 if not
 */
int the_real_is_palindrome(char *start, char *end)
{
	if (start > end)
		return (1);
	else if (*start != *end)
		return (0);
	else
		return (the_real_is_palindrome(start + 1, end - 1));
}

/**
 * is_palindrome - check if a string palindrome
 * @s: string
 *
 * Return: 1 if a string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (the_real_is_palindrome(s, strend(s)));
}
