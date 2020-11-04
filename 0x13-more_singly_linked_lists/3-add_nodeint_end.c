#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: list to add to
 * @n: value of the new node
 *
 * Return: the address of the new element or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *looper;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		looper = *head;
		while (looper->next)
		{
			looper = looper->next;
		}
		looper->next = node;
	}
	return (node);
}
