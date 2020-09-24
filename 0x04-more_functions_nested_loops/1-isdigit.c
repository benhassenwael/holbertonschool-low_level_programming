#include "holberton.h"

/**
 * _isdigit - check for a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit
 * 0 if c is not a digit
 */

int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);

	return (0);
}
