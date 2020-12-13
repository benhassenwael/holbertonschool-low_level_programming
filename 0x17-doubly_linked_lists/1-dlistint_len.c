#include "lists.h"

/**
 * dlistint_len - count and return the number of elements in
 * a dlistint_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
