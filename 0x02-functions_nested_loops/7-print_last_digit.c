#include "holberton.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int r, i = n;

	if (i < 0)
		i = -i;
	r = i % 10;
	_putchar('0' + r);
	return (n % 10);
}
