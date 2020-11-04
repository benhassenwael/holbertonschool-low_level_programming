#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t list
 * @h: list to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *looper = h;

	while (looper)
	{
		printf("%d\n", looper->n);
		looper = looper->next;
		size++;
	}
	return (size);
}
