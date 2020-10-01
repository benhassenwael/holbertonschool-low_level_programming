#include <stdio.h>
#include "holberton.h"
/**
 * _push - add char to the start of strong
 * @s: string to push into
 * @l: string length
 * @c: char to push
 *
 */

void _push(char *s, int l, char c)
{
printf("char to push: %c | l = %d\n", c, l);
	while (l)
	{
		s[l] = s[l - 1];
		l--;
	}
	s[0] = c;
printf("r after push: %s\n", s);
}


/**
 * infinite_add - adds two numbers given as string
 * @n1: first number
 * @n2: second number
 * @r: buffer for storing result
 * @size_r: size of the buffer
 *
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long i1 = 0, i2 = 0, length = 0;
	int sum = 0, carry = 0;

	while (n1[i1])
		i1++;
	while (n2[i2])
		i2++;

	for (i1 -= 1, i2 -= 1; i1 >= 0 && i2 >= 0 ; i1--, i2--)
	{
		if (length + 1 >= size_r - 1)
			return (0);

		sum = (n1[i1] - '0') + (n2[i2] - '0') + carry;
		carry = (sum > 9) ? sum / 10 : 0;
		_push(r, length++, (sum % 10 + '0'));
	}
	printf("r out of loop: %s\n", r);
	if (i1 < 0)
	{
		while (i2 >= 0)
		{
			if (length + 1 >= size_r - 1)
				return (0);

			sum = (n2[i2--] - '0') + carry;
			carry = (sum > 9) ? sum / 10 : 0;
			_push(r, length++, (sum % 10) + '0');
		}
	}
	else if (i2 < 0)
	{
		while (i1 >= 0)
		{
			if (length + 1 >= size_r - 1)
				return (0);

			sum = (n1[i1--] - '0') + carry;
			carry = (sum > 9) ? sum / 10 : 0;
			_push(r, length++, (sum % 10 + '0'));
		}
	}
	if (carry)
		_push(r, length++, carry + '0');
	return (r);
}
