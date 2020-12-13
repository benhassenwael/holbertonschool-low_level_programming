#include "lists.h"

/**
 * get_dnodeint_at_index - finds and returns the nth node of
 * a dlistint_t list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: pointer to the nth node or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
