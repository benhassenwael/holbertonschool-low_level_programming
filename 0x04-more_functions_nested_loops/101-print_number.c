#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 */

void print_number(int n)
{
	int x, nDigits = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	x = n / 10;
	while (x != 0)
	{
		x /= 10;
		nDigits *= 10;
	}

	while (nDigits != 1)
	{
		_putchar((n / nDigits) + '0');
		n %= nDigits;
		nDigits /= 10;
	}
	_putchar(n + '0');
}
