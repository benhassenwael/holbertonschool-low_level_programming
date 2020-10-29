#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: double pointer to head of list
 * @str: data to add  to the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *looper = *head, *node;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	for (size = 0; str[size]; size++)
		;
	node->len = size;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (looper->next)
		looper = looper->next;
	looper->next = node;
	return (node);
}
