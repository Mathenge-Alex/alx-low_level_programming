#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Function adds a node at end of a linked list
 * @head: The character to print
 * @str: string for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *nw_node;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
	{
		free(nw_node);
		return (NULL);
	}
	nw_node->str = strdup(str);
	if (nw_node->str == NULL)
	{
		free(nw_node);
		return (NULL);
	}
	nw_node->len = c;
	nw_node->next = NULL;

	if (current)
		current->next = nw_node;
	else
		*head = nw_node;
	return (nw_node);
}
