#include "lists.h"

/**
 * find_listint_loop - Function finds the loop contained in
 * a linked list of a listint_t
 * @head: A pointer for the head of the listint_t list
 *
 * Return: Returns NULL if there is no loop or else
 * the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_tort, *fast_hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_tort = head->next;
	fast_hare = (head->next)->next;

	while (fast_hare)
	{
		if (slow_tort == fast_hare)
		{
			slow_tort = head;

			while (slow_tort != fast_hare)
			{
				slow_tort = slow_tort->next;
				fast_hare = fast_hare->next;
			}

			return (slow_tort);
		}

		slow_tort = slow_tort->next;
		fast_hare = (fast_hare->next)->next;
	}

	return (NULL);
}
