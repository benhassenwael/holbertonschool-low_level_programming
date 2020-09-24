#include "holberton.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: length of the line to print
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1; n >= 0 && i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
