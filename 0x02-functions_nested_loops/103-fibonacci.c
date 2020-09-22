#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	long prec = 1;
	long pre_prec = 1;
	long x = 1;
	long sum = 0;

	while (prec <= 4000000)
	{
		if (prec % 2 == 0)
			sum += prec;
		x = prec + pre_prec;
		pre_prec = prec;
		prec = x;
	}
	printf("%ld\n", sum);
	return (0);
}
