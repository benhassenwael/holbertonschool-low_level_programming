#include "holberton.h"

/**
 * print_rev - print a string in reverse followed by a newline
 * @s: string to print
 *
 */

void print_rev(char *s)
{
	int length, i;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
