#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: array to reverse
 * @n: array length
 *
 */

void reverse_array(int *a, int n)
{
	int aux, i, j;

	for (i = 0, j = n - 1; j > i; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}

}
