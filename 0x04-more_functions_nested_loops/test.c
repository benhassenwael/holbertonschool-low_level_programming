#include "holberton.h"
#include <math.h>
/**
*print_number - printing harder
*@n: the number to print
*/
void print_number(int n)
{
	int i, x, y = 1, z = n % 10;

	n /= 10;
	i = n;
	if (z < 0)
	{
		z *= -1;
		i *= -1;
		n *= -1;
		_putchar ('-');
	}
	if (i > 0)
	{
		while (i / 10 != 0)
		{
			i /= 10;
			y *= 10;
		}
		while (y > 0)
		{
			x = n / y;
			_putchar (x + '0');
			n -= x * y;
			y /= 10;
		}
	}
	_putchar (z + '0');
}
