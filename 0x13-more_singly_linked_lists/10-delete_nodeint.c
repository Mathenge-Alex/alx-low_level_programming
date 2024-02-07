#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - Function deletes a node at a certain position
 * @head: The linked list head
 * @index: The index to delete
 * Return: Returns 1 if successful, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(curr);
		return (1);
	}

	while (index != 1)
	{
		if (curr->next == NULL)
			return (-1);

		curr = curr->next;
		--index;
	}
	tmp = curr->next;
	if (curr->next->next)
		curr->next = curr->next->next;
	else
		curr->next = NULL;
	free(tmp);

	return (1);
}
