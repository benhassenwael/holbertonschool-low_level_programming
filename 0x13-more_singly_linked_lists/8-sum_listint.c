#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculate the sum of all the data (n) of a listint_t list
 * @head: list
 *
 * Return: sum of data of the list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
