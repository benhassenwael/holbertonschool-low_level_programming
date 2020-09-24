#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: length of line to draw
 *
 */

void print_diagonal(int n)
{
	int i, j, nSpace = 0;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; n > 0 && i <= n; i++)
		{
			for (j = 1; j <= nSpace; j++)
			{
				_putchar(' ');
			}
			nSpace++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
