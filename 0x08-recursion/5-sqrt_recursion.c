#include "holberton.h"

/**
 * the_real_sqrt - check the square root of a number
 * @i: number to check
 * @n: number to find its sqrt
 *
 * Return: sqrt of n or -1
 */
int the_real_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (the_real_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: number
 *
 * Return: int square root of n or -1 if no natural square root found
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (the_real_sqrt(1, n));
}
