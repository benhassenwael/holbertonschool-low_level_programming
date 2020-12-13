#include "lists.h"

/**
 * add_dnodeint_end - add anew node at the end of
 * a dlistint_t list
 * @head: pointer to the head of the list
 * @n: data of the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *looper;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	looper = *head;
	while (looper && looper->next)
		looper = looper->next;
	node->prev = looper;
	if (!looper)
		*head = node;
	else
		looper->next = node;
	return (node);
}
