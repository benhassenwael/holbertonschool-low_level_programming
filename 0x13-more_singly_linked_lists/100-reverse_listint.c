#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse alistint_t list
 * @head: list to reverse
 *
 * Return: pointer to the first node of the reversed list or NULL on failure
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	p = NULL;
	while ((*head) != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n
	}
	return (p);
}
