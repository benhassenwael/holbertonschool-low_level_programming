#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: list to delete from
 *
 * Return: the head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (value);
}
