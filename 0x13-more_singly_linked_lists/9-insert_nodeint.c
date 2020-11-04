#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: list to inset into
 * @idx: index where new node will be inserted
 * @n: value of the new node
 *
 * Return: address of the new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *looper, *node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	looper = *head;
	while (looper)
	{
		if (i == (idx - 1))
		{
			node->next = looper->next;
			looper->next = node;
			return (node);
		}
		looper = looper->next;
		i++;
	}
	return (NULL);
}
