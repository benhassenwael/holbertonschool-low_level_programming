#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: pointer to head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
