#include "holberton.h"

/**
 * print_number - print a given integer
 * @n: int to print
 *
 */

void print_number(int n)
{
	int nDigits;
	unsigned int aux, num = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	aux = num / 10;
	while (aux != 0)
	{
		aux /= 10;
		nDigits *= 10;
	}

	while (nDigits != 1)
	{
		_putchar((num / nDigits) + '0');
		num %= nDigits;
		nDigits /= 10;
	}

	_putchar(num + '0');

}
