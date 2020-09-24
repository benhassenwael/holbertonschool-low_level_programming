#include <stdio.h>
#include <math.h>
#include "holberton.h"

/**
 * main - main func
 *
 * Return: always 0
 */
int main(void)
{
	long n = 612852475143;
	int i, max;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	printf("%d\n", max);
	return (0);
}
