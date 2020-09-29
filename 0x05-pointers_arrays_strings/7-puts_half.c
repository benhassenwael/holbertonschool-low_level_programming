#include "holberton.h"

/**
 * puts_half - print the second half of a string
 * @str: string to print
 *
 */

void puts_half(char *str)
{
	int start, length = 0;

	while (str[length])
		length++;
if (length > 1)
	{
	if (length % 2)
		start = (length - 1) / 2;
	else
		start = length / 2;

	for (; str[start]; start++)
		_putchar(str[start]);
	}
	_putchar('\n');
}
