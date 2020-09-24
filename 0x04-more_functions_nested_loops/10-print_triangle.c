#include "holberton.h"

/**
 * print_triangle - print a tringle
 * @size: triangle size
 *
 */

void print_triangle(int size)
{
	int lines, spaces, c;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < size; lines++)
		{
			for (spaces = 1; spaces < (size - lines); spaces++)
			{
				_putchar(' ');
			}

			for (c = 0; c <= lines; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
