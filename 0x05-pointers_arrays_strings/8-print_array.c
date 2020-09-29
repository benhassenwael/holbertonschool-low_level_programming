#include <stdio.h>

/**
 * print_array - print a given array
 * @a: array of int
 * @n: number of array elements
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
