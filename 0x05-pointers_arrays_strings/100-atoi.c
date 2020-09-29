#include "holberton.h"

/**
 * _atoi - convert string to int
 * @s: string to convert to int
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1, number = 0, i = 0, continu = 1;

	while (continu && s[i])
	{
		if (s[i] == '-' && !number)
			sign *= -1;

		if (s[i] < 58 && s[i] > 47)
		{
			number *= 10;
			number += s[i] - '0';
		}
		else if (number)
		{
			continu = 0;
		}
		i++;
	}

	number *= sign;

	return (number);
}
