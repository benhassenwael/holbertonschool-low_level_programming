#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 * @head: list to free
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
