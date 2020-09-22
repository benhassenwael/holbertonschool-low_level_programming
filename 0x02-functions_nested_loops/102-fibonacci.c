#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;
	long prec = 1;
	long pre_prec = 1;
	long x = 1;

	for (i = 1 ; i < 50 ; i++)
	{
		printf("%ld, ", prec);
		x = prec + pre_prec;
		pre_prec = prec;
		prec = x;
	}
	printf("%ld\n", prec);
	return (0);
}
