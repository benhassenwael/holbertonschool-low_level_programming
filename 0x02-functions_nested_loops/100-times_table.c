#include "holberton.h"

/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n < 0 || n > 15)
		return;
	for (i = 0 ; i <= n ; i++)
	{
		_putchar('0');
		for (j = 1 ; j <= n ; j++)
		{
			r = i * j;
			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((r / 100) + '0');
				_putchar(((r % 100) / 10) + '0');
				_putchar(((r % 100) % 10) + '0');
			}
			if (j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
