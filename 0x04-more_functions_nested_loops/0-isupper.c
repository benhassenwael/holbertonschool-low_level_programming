#include "holberton.h"

/**
 * _isupper - check for uppercase character
 * @c: character to check
 *
 * Return: 1 if c is uppercace
 * 0 if c is lowercase
 */

int _isupper(int c)
{
	if (c < 91  && c > 64)
		return (1);

	return (0);
}
