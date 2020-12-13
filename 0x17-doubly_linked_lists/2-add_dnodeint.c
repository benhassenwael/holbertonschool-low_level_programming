#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of
 * a dlistint_t list
 * @head: pointer the head of the list
 * @n: data of the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
