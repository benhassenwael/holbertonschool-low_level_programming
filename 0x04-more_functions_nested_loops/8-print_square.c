#include "holberton.h"

/**
 * print_square - print square
 * @size: size of the square to print
 *
 */

void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
