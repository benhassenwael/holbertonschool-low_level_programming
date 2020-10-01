#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - print a buffer
 * @b: buffer
 * @size: buffer size
 *
 */

void print_buffer(char *b, int size)
{
	int j;

	for(j = 0; j < size; j++)
		sprintf(&b[2*j], "%02X", b[j]);
}
