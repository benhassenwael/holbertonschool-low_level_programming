#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to print
 *
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0' || s[1] == '\0')
		_putchar(s[0]);
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
