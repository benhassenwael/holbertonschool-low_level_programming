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

	for (i = 0; i < n; i++)
	{
		if (i == i-1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}

}
