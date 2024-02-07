#include "lists.h"
/**
 *free_listint - Function frees a memory location
 *@head: Head of the linked listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)

		return;

	while (head)

	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
