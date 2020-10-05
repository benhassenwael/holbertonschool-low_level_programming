#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: matrix size
 *
 */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;
	int *p1 = a;
	int *p2 = a + (size - 1);

	for (i = 0; i < size; i++, p1 += size + 1, p2 += size - 1)
	{
		diag1 += *p1;
		diag2 += *p2;
	}

	printf("%d, %d\n", diag1, diag2);
}
