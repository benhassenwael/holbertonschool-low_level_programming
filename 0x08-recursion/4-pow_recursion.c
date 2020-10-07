#include "holberton.h"

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x: value to be raised
 * @y: the power
 *
 * Return: if y is lower than 0 return -1 else x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
