#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all the elements of a list_t list
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *looper = h;

	while (looper)
	{
		if (looper->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", looper->len, looper->str);
		looper = looper->next;
		size++;
	}
	return (size);
}
