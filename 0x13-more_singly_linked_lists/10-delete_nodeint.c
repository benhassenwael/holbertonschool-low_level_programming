#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at given index of a listint_t list
 * @head: list to delete from
 * @index: index of the element to delete
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *looper;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	looper = *head;
	while (looper)
	{
		if (i == (index - 1))
		{
			temp = looper->next;
			looper->next = temp->next;
			free(temp);
			return (1);
		}
		looper = looper->next;
		i++;
	}
	return (-1);
}
