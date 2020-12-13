#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index if the node to delete, starting from 0
 *
 * Return: 1 on success an -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		if ((*head)->next)
			*head = (*head)->next;
		else
			*head = NULL;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != index)
		return (-1);
	(tmp->prev)->next = tmp->next;
	if (tmp->next)
		(tmp->next)->prev = tmp->prev;
	free(tmp);
	return (1);
}
