#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	if (head)
		free(head);
}
