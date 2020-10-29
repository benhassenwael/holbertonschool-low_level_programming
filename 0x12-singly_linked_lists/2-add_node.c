#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: double pointer to head of list_t to add into
 * @str: data to put in the new node
 *
 * Return: pointer to the first node in the list or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
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
	node->next = *head;
	*head = node;
	return (node);
}
