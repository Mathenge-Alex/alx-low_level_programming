#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function prints elements of linked lists
 * @h: The head
 * Return: Returns a string length
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	const listint_t *curr_v = h;

	while (curr_v != NULL)
	{
		printf("%i\n", curr_v->n);
		curr_v = curr_v->next;
		no_nodes++;
	}
	return (no_nodes);
}
