#include "lists.h"

/**
 * pop_listint - Function deletes a listint_t linked list's head node
 * @head: The head of a linked list
 * Return: Returns the head node’s data --> n.
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int p;

	if (head == NULL)
		return (0);

	curr = *head;
	if (curr == NULL)
		return (0);

	p = curr->n;
	*head = curr->next;
	free(curr);
	return (p);
}

