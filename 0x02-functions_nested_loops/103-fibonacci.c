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
	long sum = 0;
	
	while(prec <= 4000000)
	{
		if (prec % 2 == 0)
		{
			printf("prec in sum:%ld, ", prec);
			sum += prec;
		}
		x = prec + pre_prec;
		pre_prec = prec;
		prec = x;
		printf("prec end of loop:%ld\n", prec);
	}
	printf("%ld\n", sum);
	return(0);
}
