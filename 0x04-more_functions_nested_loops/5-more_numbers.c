#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
