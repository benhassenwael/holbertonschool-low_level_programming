#include "holberton.h"

/**
 * _print_last_digit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0 )
		n = -n;
	r = n % 10;
	_putchar('0' + r);
	return (r);
}
