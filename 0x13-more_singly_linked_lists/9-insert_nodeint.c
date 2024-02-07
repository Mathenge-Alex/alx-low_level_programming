#include "lists.h"

/**
 * insert_nodeint_at_index - Function inserts a new node at a certain position
 * @head: The head of linked list
 * @idx: The index to insert the node
 * @n: The new node data
 * Return: Returns new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	curr = *head;

	while (idx != 1)
	{
		curr = curr->next;
		--idx;
		if (curr == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = curr->next;
	curr->next = new;

	return (new);
}
