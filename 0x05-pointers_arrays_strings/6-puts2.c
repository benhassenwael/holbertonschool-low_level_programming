#include "holberton.h"

/**
 * puts2 - print every other character of a string
 * @str: string to print from
 *
 */

void puts2(char *str)
{
	int i = -2;

	while (str[i + 1] != '\0' && str[i + 2] != '\0' && str[i])
	{
		i += 2;
		_putchar(str[i]);
	}
	_putchar('\n');
}
