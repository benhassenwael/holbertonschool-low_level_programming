#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: list to count
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
