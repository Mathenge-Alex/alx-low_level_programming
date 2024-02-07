#include "lists.h"

/**
 * get_nodeint_at_index - Function returns nth node of a listint_t linked list.
 * @head: The head of linked list
 * @index: node index to return
 * Return: Returns a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;

	if (head == NULL)
		return (0);

	curr = head;

	while (index != 0)
	{
		curr = curr->next;
		index--;
		if (curr == NULL)
			return (0); /*Out of range*/
	}

	return (curr);
}

