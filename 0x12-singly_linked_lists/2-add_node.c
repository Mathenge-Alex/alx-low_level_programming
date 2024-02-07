#include "lists.h"
#include <string.h>

/**
 * *add_node - Function adds a node to a linked list head
 * @head: Linked list head
 * @str: String element of the linked list
 * Return: Returns number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;
	int len_str;

	nw_node = (list_t *) malloc(sizeof(list_t));

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
	for (len_str = 0; str[len_str] != '\0';  len_str++)
	;

	nw_node->len = len_str;
	nw_node->next = *head;
	*head = nw_node;

	return (nw_node);
}
