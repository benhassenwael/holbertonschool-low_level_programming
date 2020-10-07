#include "holberton.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: naumber to count its factorial
 *
 * Return: factorial of n if n >= 0 else return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
