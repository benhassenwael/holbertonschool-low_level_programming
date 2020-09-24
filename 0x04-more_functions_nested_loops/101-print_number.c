#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 */

void print_number(int n)
{
	int nDigits = 1;
	unsigned int x, x2;

	if (n < 0)
	{
		_putchar('-');
		x2 = -n;
	}
	else
	{
		x2 = n;
	}


	x = x2 / 10;
	while (x != 0)
	{
		x /= 10;
		nDigits *= 10;
	}

	while (nDigits != 1)
	{
		_putchar((x2 / nDigits) + '0');
		x2 %= nDigits;
		nDigits /= 10;
	}
	_putchar(x2 + '0');
}
