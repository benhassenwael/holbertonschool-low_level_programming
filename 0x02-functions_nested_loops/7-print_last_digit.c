#include "holberton.h"

/**
 * print_last_digit - display last digit.
 * @n:integer.
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int x, y;

	y = n % 10;
	if (y < 0)
	{
		y = -y;
	}
	x = '0' + y;
	_putchar(x);
	return (y);
}
