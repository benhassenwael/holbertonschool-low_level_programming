#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of where the new node should be inserted, starting from 0
 * @n: data of the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *looper;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	looper = *h;
	while (looper && i < idx)
	{
		looper = looper->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	if (!looper)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = looper;
	node->prev = looper->prev;
	(looper->prev)->next = node;
	looper->prev = node;
	return (node);
}
