#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
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
	
	for(i = 1 ; i <= 50 ; i++)
	{
		printf("%ld, ", prec);
		x = prec + pre_prec;
		pre_prec = prec;
		prec = x;
	}
	printf("\n");
	return(0);
}
