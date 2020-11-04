#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: value of the new node
 *
 * Return: address of the new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
