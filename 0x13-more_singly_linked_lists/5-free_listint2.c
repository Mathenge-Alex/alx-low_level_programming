#include "lists.h"

/**
 * free_listint2 - Function frees a listint_t list
 * Description: The head will point to NULL at the end.
 * Therefore, the tail always points to NULL, we will
 * move a temp pointer, and free its memory if its not NULL
 * Untill we reach the tail
 * @head: The head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}

}
