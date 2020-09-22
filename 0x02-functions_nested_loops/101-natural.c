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
	int i, r = 0;

	for(i = 1 ; i < 1024 ; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			r += i;
	}
	printf("%d\n", r);
	return(0);
}
