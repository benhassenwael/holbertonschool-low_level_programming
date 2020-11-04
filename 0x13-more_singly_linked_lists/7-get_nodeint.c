#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a listint_t list
 * @head: list
 * @index: index of the element to find
 *
 * Return: the nth node or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *looper;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	looper = head;
	while (looper)
	{
		if (i == index)
			return (looper);
		looper = looper->next;
		i++;
	}
	return (NULL);
}
