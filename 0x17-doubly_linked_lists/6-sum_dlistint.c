#include "lists.h"

/**
 * sum_dlistint - calculate and return the sum of all the data of
 * a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data of the lsit
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
