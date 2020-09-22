#include "holberton.h"

/**
 * times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1 ; j < 10 ; j++)
		{
			r = i * j;
			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
