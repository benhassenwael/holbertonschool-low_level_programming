#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - count the number of elements in a linked list list_t
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *looper = h;

	for (size = 0; looper; size++, looper = looper->next)
		;
	return (size);
}
