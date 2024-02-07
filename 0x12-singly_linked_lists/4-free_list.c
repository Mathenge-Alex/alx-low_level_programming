#include "lists.h"

/**
 * free_list - Function frees a list_t list
 * @head: Linked list head
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxxt;

	current = head;

	while (current != NULL)
	{
		nxxt = current->next;
		free(current->str);
		free(current);
		current = nxxt;
	}
}
