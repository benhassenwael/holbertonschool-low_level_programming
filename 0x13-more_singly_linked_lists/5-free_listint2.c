#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list and set the head to null
 * @head: list to free
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
