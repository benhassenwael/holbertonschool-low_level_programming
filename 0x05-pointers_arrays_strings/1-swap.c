#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * @a: variable to swap
 * @b: variable to swap
 *
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
