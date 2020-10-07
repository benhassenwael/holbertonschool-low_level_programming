#include "holberton.h"

/**
 * the_real_is_prime - finds if a number is prime
 * @i: number to check divison on
 * @n: number to check
 *
 * Return: 1 is n is a prime number else return 0
 */
int the_real_is_prime(int i, int n)
{
	if (n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (the_real_is_prime(i + 1, n));
}

/**
 * is_prime_number - finds if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is a prime number else return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (the_real_is_prime(2, n));
}
